#include <iostream>
using  namespace std;

struct Funcionario
{
	int prontuario;
	string nome;
	double salario;
};



struct Lista
{
	Funcionario f;
	Lista* ant;

};



Lista* init()
{
	return NULL;
}

int isEmpty(Lista* lista)
{
	return (lista == NULL);
}

Lista* insert(Funcionario funcionario)

{

	Lista* novo = new Lista();
    novo->f = funcionario;
 	novo->ant = novo;


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
	int k = 0;
	Lista* aux;
	aux = lista;
	while (aux != NULL)
	{
		
	
		
        cout << "Prontuario: " << aux->f.prontuario << endl;
        cout << "Nome: " << aux->f.nome << endl;
        cout << "Salário: " << aux->f.salario << endl;
        cout << "----------" << endl;
        
        aux = aux->ant;
        k++;
	}


}

/*Lista find(Lista* lista, int i)
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
	Lista* minhaLista;
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
						
						Funcionario funcionario = new Funcionario(prontuario,nome,salario);

						
						minhaLista = insert(funcionario);
						
						
						
						}
				
						break;
						cout << "----------" << endl;
						
					case 2: 
						{
						
							
							
					
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