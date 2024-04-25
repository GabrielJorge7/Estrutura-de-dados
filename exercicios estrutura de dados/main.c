#include <stdio.h>
#include <string.h>
#define max_pessoa 10
#define maxnome 50
#define maxtelefone 15

struct Pessoa{
    int codigo;
    char nome[maxnome];
    char telefone[maxtelefone];
};

void cadastrar(struct Pessoa pessoas[], int *quantidade);
void listar(struct Pessoa pessoas[], int quantidade);
void editar(struct Pessoa pessoas[], int quantidade);
void excluir(struct Pessoa pessoas[], int *quantidade);
void ordenarnome(struct Pessoa pessoas[], int quantidade);
int menu();

int main()
{
    struct Pessoa pessoas[max_pessoa];
    int quantidade = 0 ;
    int escolha;
    
    do{
        escolha = menu();
        
        switch (escolha){
            case 1:
            cadastrar(pessoas, &quantidade);
            break;
            case 2:
            listar(pessoas, quantidade);
            break;
            case 3:
            editar(pessoas, quantidade);
            break;
            case 4:
            excluir(pessoas, &quantidade);
            break;
            case 5:
            ordenarnome(pessoas, quantidade);
            break;
            case 0:
            printf("saindo do programa\n");
            break;
             default:
                printf("Opção inválida. Tente novamente\n");
        
        }
    } while(escolha != 0);
}

    int menu(){
        int escolha;
         printf("\n-------------MENU-------------\n");
    printf("[1] Cadastrar (Cadastre 1 pessoa por vez)\n");
    printf("[2] Listar\n");
    printf("[3] Editar (peça o código ou o nome da pessoa)\n");
    printf("[4] Excluir (não pode deixar posições vazias no meio da lista)\n");
    printf("[5] Ordenar por nome (use strcmp(x,y); da biblioteca string.h)\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);
    return escolha;
        
    }
    
    void cadastrar(struct Pessoa pessoas[], int *quantidade){
        if(*quantidade < max_pessoa){
            struct Pessoa novapessoa; 
            printf("codigo");
            scanf("%d", &novapessoa.codigo);
             printf("Nome ");
             scanf("%s", novapessoa.nome);
            printf("Telefone ");
            scanf("%s", novapessoa.telefone);
            
            pessoas[*quantidade] = novapessoa;
            (*quantidade)++;
        } else{
            printf("Limite de pessoas atingido\n");
        }
    }
    
    void listar(struct Pessoa pessoas[], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhuma pessoa cadastrada\n");
    } else {
        printf("Listagem de pessoas\n");
        for (int i = 0; i < quantidade; i++) {
            printf("Código: %d, Nome: %s, Telefone: %s\n", pessoas[i].codigo, pessoas[i].nome, pessoas[i].telefone);
        }
    }
}

    void editar(struct Pessoa pessoas[], int quantidade) {
    int codigo;
    printf("Digite o código da pessoa que deseja editar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < quantidade; i++) {
        if (pessoas[i].codigo == codigo) {
            printf("Novo Nome: ");
            scanf("%s", pessoas[i].nome);
            printf("Novo Telefone: ");
            scanf("%s", pessoas[i].telefone);
            printf("Dados atualizados com sucesso.\n");
            return;
        }
    }
    printf("Pessoa não encontrada.\n");
}

    void excluir(struct Pessoa pessoas[], int *quantidade){
        int codigo;
         printf("Digite o código da pessoa que deseja excluir ");
        scanf("%d", &codigo);
        
        for(int i = 0 ; i < *quantidade; i++){
            if(pessoas[i].codigo == codigo){
                 for (int j = i; j < *quantidade - 1; j++) {
                pessoas[j] = pessoas[j + 1];
            }
            (*quantidade)--;
             printf("Pessoa excluída com sucesso.\n");
             return;
        }
    }
     printf("Pessoa não encontrada\n");
 }

void ordenarnome(struct Pessoa pessoas[], int quantidade) {
    struct Pessoa temp;
    for (int i = 0; i < quantidade - 1; i++) {
        for (int j = i + 1; j < quantidade; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
    printf("Pessoas ordenadas por nome.\n");
}