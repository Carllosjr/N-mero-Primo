#include <iostream>
using namespace std;

int main()
{
	int n, i, resto, contadoresto;
	
	do
	{
		cout << "\nDigite um numero positivo ou -1 para sair: ";
		cin >> n;
		
		contadoresto = 0;
		
		//LOOP VAI ACONTECER ATÉ O CONTADOR I FOR MENOR OU IGUAL AO NÚMERO DIGITADO
		for(i = 1; i <= n; i++)
		{
			resto = n % i;
			
			//SE O RESTO DA DIVISÃO DO NÚMERO PELO CONTADOR I FOR IGUAL A 0
			if(resto == 0){
				
				//CONTADORRESTO RECEBE +1
				contadoresto++;
			}
		}
		
		//QUANDO O LOOP FINALIZAR E O CONTADORESTO TIVER VALOR 2 O NÚMERO É PRIMO
		if (contadoresto == 2){
			cout << "\nPrimo\n";
		}else{
			
			//SENÃO NÃO É PRIMO
			cout << "\nNao primo\n";
		}
	}
	
	//CONDIÇÃO PARA FECHAR O PROGRAMA
	while(n != -1);
}
