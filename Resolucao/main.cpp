#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//      Estrutura do estudante
typedef struct estudante aluno;
struct estudante{
    int id;
    string nome;
    string apelido;
    int dia;
    int mes;
    int ano;
    struct estudante *prox;
};
//      Funcao para criar novo aluno na lista
aluno* criar_aluno(){
    aluno* novo = (aluno*)malloc(sizeof(aluno));
    return novo;
}
//      funcao  para inserir aluno na lista
aluno* inserir_no_inicio(aluno* Lista, int stid, string stnome, string stapelido, int stdia, int stmes, int stano ){
    aluno *novo_aluno = criar_aluno();
    novo_aluno->id = stid;
    novo_aluno->nome=stnome;
    novo_aluno->apelido=stapelido;
    novo_aluno->dia=stdia;
    novo_aluno->mes=stmes;
    novo_aluno->ano=stano;
    if (Lista==NULL){
        Lista = novo_aluno;
        novo_aluno->prox=NULL;
    }else{
    novo_aluno->prox=Lista;
    Lista=novo_aluno;
    }
    return Lista;
}


/*aluno* remover (aluno* Lista, int stid, string stnome, string stapelido, int stdia, int stmes, int stano){
    aluno*aux, *remover = NULL;
        if(*Lista){
            if((*Lista)->id==stid){
                remover=*Lista;
                *Lista=remover->prox;
            }else{
                aux= *Lista;
                while()

            }
        }
    return remover;
}*/

//      Funcao para monstrar a lista dos alunos inseridos
void imprimir (aluno*Lista){
    aluno* aux= Lista;
    while(aux!=NULL){
        cout<<"ID: " << aux->id<< endl;
        cout<<"NOME: "<<aux->nome <<endl;
        cout<<"APELIDO:"<<aux->apelido <<endl;
        cout<<"DATA DE NASCIMENTO:"<< aux->dia << "/"<< aux->mes << "/"<< aux->ano << endl;

        aux=aux->prox;
    }
}
int main()
{
    aluno *Lista = NULL;
    Lista=inserir_no_inicio(Lista,10,"Alvaro","Xavier Alvaro", 10, 11, 1993);
    imprimir(Lista);
    return 0;
}









