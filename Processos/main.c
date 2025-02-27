#define NUM_LETRAS 26
#define ASCII_A 65
#define TAMANHO_SENHA 4
#define TOTAL_COMBINACOES 456976

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

const int COPRIMES[4] = {3, 5, 7, 11};
const int SHIFTS[4] = {7, 11, 13, 17};

// Codificação proposta
char* encrypt(const char* str) {
    
    char* str_result = (char*) malloc(sizeof(char) * (TAMANHO_SENHA + 1));
    if (!str_result) {
        perror("Erro ao alocar memória");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < TAMANHO_SENHA; i++) {
        char c = str[i];
        
        if (c >= 'A' && c <= 'Z') {
            int val = c - ASCII_A;
            val = (val * COPRIMES[i] + SHIFTS[i]) % NUM_LETRAS;
            str_result[i] = val + ASCII_A;
        } else {
            perror("Erro: String contém caracteres inválidos.");
            free(str_result);
            exit(EXIT_FAILURE);
        }
    }
    str_result[TAMANHO_SENHA] = '\0';
    return str_result;
}

// Função que lê todas as linhas de um arquivo e compara com as codificações
void read_file_lines(const char *filename, const char *outname, char textos[][2][5]) {
    FILE *file = fopen(filename, "r"); // abre o arquivo para leitura
    if (file == NULL) {
        perror("Erro ao abrir arquivo");
        return;
    }
    FILE *fileout = fopen(outname, "w"); // abre o arquivo gravação de senhas decodificadas
    if (fileout == NULL) {
        perror("Erro ao abrir arquivo");
        return;
    }
    
    printf("Processo PID %d: Quebrando senhas de %s\n", getpid(), filename);

    char line[256];
    while (fgets(line, sizeof(line), file) != NULL) {
        line[strcspn(line, "\n")] = '\0'; // Remove o '\n', se presente
        for (int j = 0; j < TOTAL_COMBINACOES; j++) {
            if (strstr(line, textos[j][1]) != NULL) { // compara a linha com a senha codificada
                fprintf(fileout,"Senha encontrada: %s\n", textos[j][0]); // transcreve a decodificação para o novo arquivo
            }
        }
    }

    printf("Processo PID %d: Senhas quebradas salvas em %s\n", getpid(), outname);

    fclose(file);
}

int main(int argc, char *argv[]){
    char messages[TOTAL_COMBINACOES][2][5]; // messages[i][0] guarda a senha original e messages[i][1] sua codificação
    char *temp;
    int child_count = 0; // contagem de processos filhos

    DIR *dir;
    struct dirent *entry;
    
    // Inicia marcação de tempo
    clock_t inicio = clock();

    // Gera todas as combinações possíveis de 4 letras (de 'A' a 'Z')
    unsigned long counter = 0;
    for (char i = 'A'; i <= 'Z'; i++){ // primeiro dígito
        for (char j = 'A'; j <= 'Z'; j++){ // segundo dígito
            for (char k = 'A'; k <= 'Z'; k++){ // terceiro dígito
                for (char l = 'A'; l <= 'Z'; l++){ // quarto dígito
                    messages[counter][0][0] = i;
                    messages[counter][0][1] = j;
                    messages[counter][0][2] = k;
                    messages[counter][0][3] = l;
                    messages[counter][0][4] = '\0';
                    counter++; // obtem a posição da mensagem seguinte
                }
            }
        }
    }

    // Codifica todas as combinações e armazena o resultado em messages[i][1]
    for (unsigned long i = 0; i < TOTAL_COMBINACOES; i++){
        temp = encrypt(messages[i][0]);
        strncpy(messages[i][1], temp, TAMANHO_SENHA + 1);
        free(temp);
    }

    char* str = argv[1]; // Obtem diretório a ser analisado
    
    printf("Gerando processos para processar arquivos...\n", str);
    // Abre o diretório de senhas
    dir = opendir(str);
    if (dir == NULL) {
        perror("Erro ao abrir o diretório 'passwords'");
        return 1;
    }

    // Para cada arquivo no diretório cujo nome começa com '0', cria um processo filho
    // A escolha pelo '0' no inicio do nome foi por porque o programa lerá todo e qualquer arquivo ou diretório contido no diretório, então apliquei um parâmetro padrão para os arquivos com a senhas condizente no exemplo da atividade.
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] == '0') { // avalia se inicia com '0'
            pid_t pid = fork();
            if (pid < 0) {
                perror("Erro ao criar processo filho");
                closedir(dir);
                exit(EXIT_FAILURE);
            }
            if (pid == 0) { // fork de análise
                char fleitura[256]; // armazena o "diretorio_senha/arquivo_leitura"
                char fescrita[256]; // armazena o "diretorio_senha_decodificada/arquivo_escrita"
                snprintf(fleitura, sizeof(fleitura), "%s/%s", str, entry->d_name);
                snprintf(fescrita, sizeof(fescrita), "passwords_decod/%s", entry->d_name);
                read_file_lines(fleitura, fescrita, messages);
                
                exit(EXIT_SUCCESS);
            } else {
                // No processo pai, incrementa o contador de filhos
                child_count++;
            }
        }
    }

    closedir(dir); // fecha diretório de senhas

    // Aguarda o término de todos os processos filhos
    for (int i = 0; i < child_count; i++){
        wait(NULL);
    }
    printf("[Fim dos processos descendentes]\n");

    // Encerra contagem de tempo
    clock_t fim = clock();
    double tempo_execucao = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
    
    printf("Tempo total de execução: %lfms\n", tempo_execucao);

    return 0;
}
