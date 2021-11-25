#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <climits>
#include <vector>
#include <time.h>

//Objetivos da Atividade 2:
// Criar novo repositório para inserção e compartilhamento com o professor
//Objetivos específicos:
//-Criar até duas funções, com uma delas com passagem de parâmetro por referência
//- Criar até dois loops, sendo um dos loops um "range-based for"
//- Usar o break e o continue no código
//- Usar a biblioteca string
//- Usar o cout e o cin ao invés do printf e o scanf
//- Usar o rand em algo dentro do código

//Problema:
//Criar um programa que recebe os nomes e notas de 2 alunos que realizaram uma tarefa em conjunto
//


//stdlibi.h para poder usar o rand()
//Cstring para que o usuário possa inserir seu nome (string)
//Climits permite fazer limpeza de buffer com INT_MAX e define tamanhos possíveis para as variáveis

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void troca(int&, int&);

int soma(int, int);

int main(){

    string nome1, nome2;
    int i, nota1, nota2, resultado, h1, h2;
    string mat1[2][2];

    //Utilização da string
    cout <<"****AVALIAÇÃO DE TRABALHO EM DUPLA****" << endl;
    cout <<"Insira o nome do primeiro aluno: " << endl;
    getline(cin, nome1);
    cout <<"Insira nota do primeiro aluno (0-5): " << endl;
    cin >> nota1;
    cout <<"Insira o nome do segundo aluno: "  << endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout <<"Insira nota do segundo aluno (0-5): " << endl;
    cin >> nota2;

    //Criação do vetor de nomes
    string x[3] = {nome1, nome2};

    cout << "Insira a nota que a dupla deveria receber de acordo com a sua avaliacao (0-10): " << endl;
    cin >> h1;

    //Imprime o nome dos alunos contidos no vetor com o range-based
    cout << "Os nomes dos alunos desta dupla sao: " << endl;
    for(string y : x ) {

        cout << y << endl;
    }
    cout << endl;

    //Imprime a nota que vc gostaria de atribuir à dupla
    cout << "A nota que vc daria dupla: " << h1 <<endl;

    //Geração de um número aleatório para a nota da dupla
    srand (time(NULL));
    h2 = rand() % 10 + 1;
    cout << "A nota que a dupla realmente merece eh: " << h2 << endl;


    //Chama a primeira função 'soma'
    resultado = soma(nota1, nota2);

    //Imprime a nota da dupla decorrente dafunção soma
    cout << "A nota da dupla eh: " << resultado <<endl;

    //Verifica se a função troca está funcionando
    cout << "Antes de chamar a funcao: \nNota do primeiro ="<<nota1<<"\nNota do segundo ="<<nota2<<endl;
    troca(nota1,nota2);
    cout << "Depois de chamar a funcao: \nNota do primeiro ="<<nota1<<"\nNota do segundo ="<<nota2<<endl;


    return 0;
}
int soma( int nota1, int nota2){

    return nota1 + nota2;
}


void troca(int &nota1, int &nota2){
        int temp;
        temp=nota1;
        nota1=nota2;
        nota2=temp;
}

