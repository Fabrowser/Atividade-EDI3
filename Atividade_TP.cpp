#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Funcionario
{
	private:
		int prontuario;
		string nome;
		double salario;

	public:
		Funcionario(int prontuario, string nome, double salario)
		{
			this->prontuario = prontuario;
			this->nome = nome;
			this->salario = salario;
		}

		Funcionario()
		{
			this->prontuario = 0;
			this->nome ="";
			this->salario = 0.0;
		}
		
		void setProntuario(int prontuario)
		{
			this->prontuario = prontuario;
		}

		int getProntuario()
		{
			return this->prontuario;
		}
		
		void setNome(string nome)
		{
			this->nome = nome;
		}

		string getNome()
		{
			return this->nome;
		}
		
		void setSalario(double salario)
		{
			this->salario = salario;
		}

		int getSalario()
		{
			return this->salario;
		}
		
		string getFuncionario()
		{
			return to_string(this->prontuario) + nome + to_string(this->salario);
		}
	
		

		
		/*set()
		{
			
		}
		
		Pesquisar()
		{
			
		}*/
	 };	

		int main(int argc, char** argv)
		{
			
			int opcao;
			int prontuario;
			string nome;
			double salario;	
			Funcionario *funcionario = new Funcionario(prontuario,nome,salario);
		
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
												
					//	func[prontuario]->setProntuario(prontuario); 
					//	func[prontuario]->setNome(nome);
					//	func[prontuario]->setSalario(salario);
							
						k++;	Funcionario *funcionario = new Funcionario(prontuario,nome,salario);
						Funcionario *func[k];
						
						//cout << func.size() << endl;
						}
				
						break;
					
						
				/*	case 2: 
						{
						
					
						}
					
						break;
				*/	
							
					case 4: 
					{
						Funcionario *func[k];
							
						for(int i=0;i<=k;i++){
							
						cout<<endl;
						cout << "Prontuario:" << func[i]->getProntuario()<<endl; 
						cout << "Nome:" << func[i]->getNome()<<endl; 
						cout << "Salario:" << func[i]->getSalario()<<endl; 			
							
						}
					
					}	
					
					 break;						
					
					   
					   default:{
					   	
						   	cout << "Opção Invalida." << endl;
					   }
					   
					return 0;   
					   
				  }
	
				
			}while(opcao !=0);
			
			
	}