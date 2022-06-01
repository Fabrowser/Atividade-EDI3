#include <iostream>
using  namespace std;

struct Funcionario
{
	int prontuario;
	string nome;
	double salario;
};

struct Lista {
	Funcionario *funcionario;
	Lista *ant;
};


Lista* init()
{
	return NULL;
}

int isEmpty(Lista* lista)
{
	return (lista == NULL);
}

Lista* insert(Lista* lista, Funcionario *f)
{
	Lista* novo = new Lista();
    novo->funcionario = f;
	novo->ant = lista;
	return novo;

}

int count(Lista* lista)
{
	int k = 0;
	Lista* aux;
	aux = lista;
	while (aux != NULL)
	{
		++k;
		aux = aux->ant;	

	}
	return k;
}

void print(Lista* lista)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL)
	{
        cout << "Prontuario: " << aux->funcionario->prontuario << endl;
        cout << "Nome: " << aux->funcionario->nome << endl;
        cout << "Salário: " << aux->funcionario->salario << endl;
        cout << "----------" << endl;
        aux = aux->ant;
	}
}

Lista* find(Lista* lista, int p)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL && aux->funcionario->prontuario != p)
	{
		aux = aux->ant;
	}
	return aux;
}


//REMOVER


Lista* remove(Lista* lista, int p)
{
	
	Lista *aux;
	
	Lista *anterior = NULL;
	aux = lista;
	while (aux != NULL && aux->funcionario->prontuario!= p)
	{
		anterior = aux;
		aux = aux->ant;
	}
	
	if (aux == NULL)
	{
		return lista;
	}
	
	if (anterior == NULL)
	{
		lista = aux->ant; 
	}
	else
	{
   	    anterior->ant = aux->ant;
	}
	free(aux);
	
	return lista;
}




int main(int argc, char** argv)
{
	Lista* minhaLista;
	minhaLista = init();
	
	Funcionario *func1 = new Funcionario;
	func1->prontuario=1;
	func1->nome="um";
	func1->salario=100;
	minhaLista = insert(minhaLista,func1);
	Funcionario *func2 = new Funcionario;
	func2->prontuario=2;
	func2->nome="dois";
	func2->salario=200;
	minhaLista = insert(minhaLista,func2);
	Funcionario *func3 = new Funcionario;
	func3->prontuario=3;
	func3->nome="tres";
	func3->salario=300;
	minhaLista = insert(minhaLista,func3);
	
		   	int opcao;		

			do{
	  	          cout << "0. Sair:" << endl;
				  cout << "1. Incluir" << endl;
  			      cout << "2. Excluir:" << endl;
 	  	  	  	  cout << "3. Pesquisar:" << endl;
				  cout << "4. Listar:" << endl;
				  cin >> opcao;
				  
				  switch(opcao)
				  {
					case 1:
						
						{
                        Funcionario *umFuncionarioQualquer = new Funcionario;
					
						cout << "Digite o prontuario do funcionario:" << endl;
						cin >> umFuncionarioQualquer->prontuario;
						cout << "Digite o nome do funcionario:" << endl;
						cin >> umFuncionarioQualquer->nome;
						cout << "Digite o Salario:" << endl;
						cin >> umFuncionarioQualquer->salario;
						
						minhaLista = insert(minhaLista,umFuncionarioQualquer);
						
						}
				
						break;
						cout << "----------" << endl;
						
					case 2: 
						{
                        int pront;
						cout << "Digite o prontuario para excluir" << endl;
						cin >> pront;
						cout << "PARA EXCLUIR:" << pront << endl;
							
						minhaLista = remove(minhaLista,pront);	
						
					
						}
					
						break;
					
					
						case 3:
						
						{
						int pront;	
						cout << "Digite o prontuario para pesquisar" << endl;
						cin >> pront;
							
						cout << "Funcionário retornado da pesquisa: " << find(minhaLista,pront)->funcionario->nome <<endl;
						cout << "------------------" << endl;
						
							
					
							
						
						}
				
						break;
				
							
					case 4: 
					{
							
						print(minhaLista);
					
					}	
					
					 break;						
					
					   
					   default:{
					   	
						   	cout << "Opção Invalida." << endl;
					   }
					   
					return 0;   
					   
				  }
	
				
			}while(opcao !=0);
			
	
	
	return 0;
}