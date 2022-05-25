#include <iostream>
using  namespace std;

struct Funcionario
{
	int prontuario;
	string nome;
	double salario;
};


Lista
{
	Funcionario f;
	Lista* ant;
}

Funcionario* init()
{
	return NULL;
}

int isEmpty(Funcionario* funcionario)
{
	return (funcionario == NULL);
}

Funcionario* insert(Lista* lista, Funcionario f)
{
	f* novo = new Funcionario();
	novo->prontuario = prontuario;
	novo->nome = nome;
	novo->salario = salario;
	return novo;
}

int count(Funcionario* funcionario)
{
	int k = 0;
	Funcionario* aux;
	aux = funcionario;
	while (aux != NULL)
	{
		++k;
		aux = aux->ant;	

	}
	return k;
}

void print(Funcionario* funcionario)
{
	Funcionario* aux;
	aux = funcionario;
	while (aux != NULL)
	{
        cout << "Prontuario: " << aux->prontuario << endl;
        cout << "Nome: " << aux->nome << endl;
        cout << "Salário: " << aux->salario << endl;
        
        aux = aux->ant;
	}
	cout << "----------" << endl;
}

/*Lista* find(Lista* lista, int i)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL && aux->dado != i)
	{
		aux = aux->ant;
	}
	return aux;
}

Funcionario* remove(Funcionario* lista, int i)
{
	Lista *aux;
	
	Lista *anterior = NULL;

	aux = lista;
	while (aux != NULL && aux->dado != i)
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
*/


int main(int argc, char** argv)
{
	Funcionario* minhaLista;
	minhaLista = init();
	
	
		   	int opcao;
			int prontuario;
			string nome;
			double salario;	
		
			int k=0;		
						
		
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
						
						cout << "Digite o prontuario do funcionario:" << endl;
						cin >> prontuario;
						cout << "Digite o nome do funcionario:" << endl;
						cin >> nome;
						cout << "Digite o Salario:" << endl;
						cin >> salario;

						k++;
						
						minhaLista = insert(minhaLista,prontuario,nome,salario);

						}
				
						break;
					
						
				/*	case 2: 
						{
						
					
						}
					
						break;
				*/	
							
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