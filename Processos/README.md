### Atividade faz parte da disciplina de Linguagem de Programação II - CI(UFPB);

- Problema:
Você trabalha na equipe de segurança de uma empresa que recentemente passou por um
incidente: um ex-funcionário, antes de sair, criptografou arquivos importantes usando um
programa personalizado que ele mesmo desenvolveu. O código fonte do programa de
criptografia foi encontrado em um dos repositórios da empresa, mas as chaves originais
foram perdidas. Sua tarefa é analisar 10 arquivos criptografados (anexo passwords.zip) e
desenvolver um programa que os descriptografe. O único recurso disponível é o código fonte
da função de criptografia utilizada.

Você deve desenvolver um programa em C que implemente um "ataque de força bruta" para
recuperar as senhas originais. Sabendo que:
Todas as senhas originais têm exatamente 4 caracteres
São compostas apenas por letras maiúsculas (A-Z)
O espaço de busca total é, portanto, de 26^4 = 456.976 combinações possíveis
Exemplo: Quando passamos a string "LPII" para a função encrypt(), o resultado obtido é a
string "OIRB". Para verificar se uma string criptografada como "OIRB" pode ser
decriptografada de volta para "LPII", você deve seguir o seguinte processo:
1. Gerar Combinações: Gere todas as combinações possíveis de strings de 4 caracteres alfabéticos
maiúsculos, que variam de "AAAA" a "ZZZZ".
2. Aplicar Criptografia: Para cada combinação gerada, aplique a função encrypt() e verifique qual
string resulta em "OIRB".
3. Verificação: A combinação que gera "OIRB" ao ser criptografada é a chave correta que, ao ser
decriptografada, deve retornar a senha "LPII".
Seu código deve realizar este processo para cada senha em cada arquivo e exibir na saída
padrão as senhas quebradas ou armazená-las em arquivos. Faça cada arquivo ser manipulado
por um processo diferente e faça o processo original aguardar o término de todos os
processos descendentes. Ao término do programa, exiba o tempo de execução. O código
deve ser TODO documentado, principalmente no tocante à manipulação de processos.

---

Compilação(através do terminal, no diretório do arquivo):
```
gcc main.c -o main
```

Execução(**nota: o executável(chamado aqui de main) deverá estar no mesmo diretório em que está o diretório de senhas criptografadas. Além disso, é necessário criar diretório chamado passwords_decod no mesmo diretório do dito main**):

```
./main passwords/
```

*O passwords pode ser substituido pelo nome do diretório de senhas criptografadas*

Para execução correta, pus o parâmetro de que os arquivos que contem senhas a serem descriptografadas deve começar com o caracter '0'. Apenas a fim de padronização, para que não haja erro de execução, caso haja outros arquivos ou diretórios na pasta.
