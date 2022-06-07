#include <stdio.h>

typedef struct{
    float salario;
    float rendimentos;
   } Pessoas;
typedef struct{
    int id;
    char nomeDespesa[40];
    char tipoDespesa[2];
    float valorDespesa;
   } Despesas;

int main() {
    Pessoas Usuario;
    Despesas CadastroDespesas[30];
    int i = 0, aux, op = -1;
    float soma = 0, divida = 0, saldo = 0;
    char retorno;

    while (op != 0){
        
        printf("----------------Menu---------------\n");
        printf("    ( 1 ) Inserir entradas.\n");
        printf("    ( 2 ) Inserir despesas.\n");
        printf("    ( 3 ) Ver Saldo.\n");
        printf("    ( 0 ) Sair.\n");
        scanf("%d", &op);
        
        switch(op){
            
            case 1:
            printf("-----------------------------------\n");
            printf("Digite seu salário: ");
		    scanf("%f", &Usuario.salario);
		    printf("Digite a soma de seus rendimentos: ");
		    scanf("%f", &Usuario.rendimentos);
		    
		    soma = Usuario.salario + Usuario.rendimentos;
		    
			printf("\n-----------------------------------");  
			printf("\nSalário R$%.2f ", Usuario.salario);
			printf("\nRendimentos: R$%.2f ", Usuario.rendimentos);
			printf("\nSoma das entradas: R$%.2f \n", soma);
			break;
			
			case 2:
			do { 
			    CadastroDespesas[i].id = i+1;
                printf("-----------------------------------\n");
			    printf("\nDigite o nome da %dº despesa: ",i+1);
			    scanf("%s", CadastroDespesas[i].nomeDespesa);
			    
			    printf("Digite o Tipo (F/E - Fixa / Eventual): ");
			    scanf("%s", CadastroDespesas[i].tipoDespesa);
			    
			    printf("Digite o Valor Estimado: ");
			    scanf("%f", &CadastroDespesas[i].valorDespesa);
			    
			    printf("\n-----------------------------------\n");
			    printf("\nDeseja cadastrar outra despesa? (S/N)\n");
    			scanf(" %c", &retorno);
				
				i++;
				aux = i;
				
				} while (retorno == 'S' || retorno == 's');
			
			for(int i = 0; i < aux; i++) {
			    printf("\n-----------------------------------");
			    printf("\nID Despesa %d ",CadastroDespesas[i].id);
			    printf("\nNome Despesa: %s ",CadastroDespesas[i].nomeDespesa);
		        printf("\nTipo Despesa: %s ",CadastroDespesas[i].tipoDespesa);
				printf("\nValor: R$%.2f ",CadastroDespesas[i].valorDespesa);
				divida += CadastroDespesas[i].valorDespesa;
			}
			printf("\n-----------------------------------");
			printf("\nSoma das despesas: R$%.2f \n",divida);
			break;
			
			case 3:
			saldo = soma - divida;
			printf("\n-----------------------------------"); 
			printf("\nO seu saldo é de: R$%.2f \n",saldo);
			break;
			
			case 0:
			printf("\n-----------------------------------"); 
			printf("\nSaindo do programa.");
			break;
			
    		default:
		    printf("\n-----------------------------------"); 
		    printf("\nNúmero inválido, tente novamente!\n");
		    break;
		}
    }
    
    return 0;
}