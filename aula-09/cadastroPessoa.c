#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char nome[50];
    int telefone;
    char email[30];

} CadastroPessoa;

int main(int argc, char const *argv[])
{
    CadastroPessoa contatos[100];
    int index = 0, opcaoUsuario = -1, encontrado = -1, consultaInt, opcaoExcluir;
    char consultaChar[50];

    while (opcaoUsuario != 0)
    {
        printf("-----------Lista de Contatos-----------\n");
        printf("   ( 1 ) Cadastrar contato  \n");
        printf("   ( 2 ) Listar todos os contatos \n");
        printf("   ( 3 ) Consultar contato por id \n");
        printf("   ( 4 ) Consultar contato por nome \n");
        printf("   ( 5 ) Consultar contato por telefone \n");
        printf("   ( 6 ) Consultar contato por email \n");
        printf("   ( 7 ) Excluir contato  \n");
        printf("   ( 0 ) Sair  \n");
        scanf("%d", &opcaoUsuario);

        switch (opcaoUsuario)
        {
        case 0:
            printf("\n Saindo...\n");
            break;
            
        case 1:
            printf("\n Cadastrar contato:  \n");
            printf("\n ID:%d\n", contatos[index].id = index);
            printf("\n NOME:");
            scanf(" %50[^\n]", &contatos[index].nome);
            printf("\n TELEFONE:");
            scanf("%d", &contatos[index].telefone);
            fflush(stdout);
            printf("\n EMAIL:");
            scanf(" %30[^\n]", &contatos[index].email);
            printf("\n");
            index++;
            break;

        case 2:
            printf(" Listar todos os contatos:  \n");
            for (int i = 0; i < index; i++)
            {
                printf("\n ID:%d", contatos[i].id);
                printf("\n NOME:%s", contatos[i].nome);
                printf("\n EMAIL:%s", contatos[i].email);
                printf("\n TEL:%d", contatos[i].telefone);
                printf("\n");
            }
            break;

        case 3:
            printf("Consultar contato por id: \n");
            printf("Informe o id a ser encontrado: ");
            scanf("%d", &consultaInt);

            for (int i = 0; i < index; i++)
            {
                if (contatos[i].id == consultaInt)
                {
                    printf("Contato encontrado: \n");
                    printf("\n ID:%d", contatos[i].id);
                    printf("\n NOME:%s", contatos[i].nome);
                    printf("\n EMAIL:%s", contatos[i].email);
                    printf("\n TEL:%d", contatos[i].telefone);
                    printf("\n");
                    encontrado = 1;
                }
            }

            if (encontrado != 1)
            {
                printf("Contato não encontrado!\n");
            }
            break;

        case 4:
            printf("Consultar contato pelo nome: \n");
            printf("Informe o nome a ser encontrado: ");
            scanf("%s", &consultaChar);

            for (int i = 0; i < index; i++)
            {
                if (strcmp(consultaChar,contatos[i].nome)==0)
                {
                    printf("Contato encontrado: \n");
                    printf("\n ID: %d", contatos[i].id);
                    printf("\n NOME:%s", contatos[i].nome);
                    printf("\n EMAIL:%s", contatos[i].email);
                    printf("\n TEL:%d", contatos[i].telefone);
                    printf("\n");
                    encontrado = 1;
                }
            }

            if (encontrado != 1)
            {
                printf("Contato não encontrado!\n");
            }

            break;
            
        case 5:
            printf("Consultar contato pelo telefone: \n");
            printf("Informe o telefone a ser encontrado: ");
            scanf("%d", &consultaInt);

           for (int i = 0; i < index; i++)
            {
                if (contatos[i].telefone == consultaInt)
                {
                    printf("Contato encontrado: \n");
                    printf("\n ID: %d", contatos[i].id);
                    printf("\n NOME:%s", contatos[i].nome);
                    printf("\n EMAIL:%s", contatos[i].email);
                    printf("\n TEL:%d", contatos[i].telefone);
                    printf("\n");
                    encontrado = 1;
                }
            }

            if (encontrado != 1)
            {
                printf("Contato não encontrado!\n");
            }

            break;

        case 6:
            printf("Consultar contato pelo email: \n");
            printf("Informe o email a ser encontrado: ");
            scanf("%s", &consultaChar);

            for (int i = 0; i < index; i++)
            {
                if (strcmp(consultaChar,contatos[i].email)==0)
                {
                    printf("Contato encontrado: \n");
                    printf("\n ID: %d", contatos[i].id);
                    printf("\n NOME:%s", contatos[i].nome);
                    printf("\n EMAIL:%s", contatos[i].email);
                    printf("\n TEL:%d", contatos[i].telefone);
                    printf("\n");
                    encontrado = 1;
                }
            }

            if (encontrado != 1)
            {
                printf("Contato não encontrado!\n");
            }
            break;

        case 7:
            printf("\nExcluir contato: \n");
            printf("\nInforme o id:");
            scanf("%d", &consultaInt);
            printf("\n NOME:%s", contatos[consultaInt].nome);
            printf("\n EMAIL:%s", contatos[consultaInt].email);
            printf("\n TEL:%d", contatos[consultaInt].telefone);

            printf("\nDeseja excluir esse contato? [1]Sim/[2]Não: ");
            scanf("%d", &opcaoExcluir);
            if (opcaoExcluir == 1)
            {
                for (int i = consultaInt; i < index; i++)
                {
                    strcpy(contatos[i].nome, contatos[i + 1].nome);
                    strcpy(contatos[i].email, contatos[i + 1].email);
                    contatos[i].telefone = contatos[i + 1].telefone;
                }
                index--;
            }
            break;

        default:
            printf("Operação inválida!\n");
            break;
        }
    }

    return 0;
}
