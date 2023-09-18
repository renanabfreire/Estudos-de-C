#include <stdio.h>

int main()
{
    // Declarando variáveis
    FILE *fp_in, *fp_out;
    char nome[20];
    float nota1, nota2, media, media_turma=0, aprovados=0;
    int num_de_alunos=0;

    fp_in = fopen("alunos.txt", "r"); fp_out = fopen("relatorio.txt", "w"); // pegando arquivos
    if (fp_in == NULL) return 0; if (fp_out == NULL) return 0; // Conferindo ambos

    while (fscanf(fp_in, "%[^,], %f, %f \n", nome, &nota1, &nota2) == 3) // lendo cada linha
    {
        // fazendo os calculos para medias e aprovados
        media = (nota1 + nota2) / 2;
        num_de_alunos++;
        media_turma += media;

        // Escrevendo novas informações no arquivo de saída
        fprintf (fp_out, "%s, %.2f, ", nome, media);
        if (media < 5) fprintf (fp_out, "REPROVADO\n");
        else if (media < 7) fprintf (fp_out, "FINAL\n");
        else
        {
            fprintf (fp_out, "APROVADO\n");
            aprovados++;
        }
    }

    // Usando das informações obtidas para calcular média e porcentagem de aprovados
    media_turma /= num_de_alunos;
    aprovados = aprovados / num_de_alunos * 100;

    fprintf(fp_out, "Media da turma: %.2f\nAprovados: %.2f", media_turma, aprovados); // escrevendo infromações finais

    // Fechando arquivos
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
