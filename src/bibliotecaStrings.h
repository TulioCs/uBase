/****
*
* TÍTULO: FUNÇÃO RETORNA CAMINHO DO ARQUIVO/TABELA
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 03/08/2017
* ÚLTIMA MODIFICAÇÃO: 04/08/2017
*
* DESCRIÇÃO: ESTA FUNÇÃO IRÁ RECEBER O NOME DE UMA TABELA E RETORNAR O CAMINHO DO ARQUIVO NO QUAL ELA SERÁ GUARDADA
* 
* PARÂMETROS: - (char *): UM PONTEIRO A CHAR, QUE SERÁ O NOME DA TABELA QUE DESEJAMOS OBTER O CAMINHO CORRESPONDENTE 
*
* VALOR DE RETORNO: - (char *): O CAMINHO DO ARQUIVO EM QUE A TABELA ESTÁ
*					- (NULL): SE O NOME DA TABELA É NULO
*
****/

char * getCaminhoTabela(char *);

/****
*
* TÍTULO: FUNÇÃO SPLIT
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 03/08/2017
* ÚLTIMA MODIFICAÇÃO: 04/08/2017
*
* DESCRIÇÃO: ESTA FUNÇÃO IRÁ RECEBER UMA STRING E DIVIDIR ELA EM DUAS A PARTIR DO CARACTERE '.' (PONTO)
* 
* PARÂMETROS: - (int): O TAMANHO DO VETOR (STRING) QUE VAI SER DIVIDIDA
*
* VALOR DE RETORNO: - (char **): UM VETOR QUE GUARDA AS DUAS STRINGS DIVIDIDAS
*					- (NULL): SE NÃO FOI POSSÍVEL FAZER A DIVISÃO (NESSE CASO CHAMAR A HELP)
*
****/

char ** split(int, char *);