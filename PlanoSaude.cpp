#include <stdio.h>

int main(){
	int idade;
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Nome: %s \n", nome);
	printf("Idade: %d \n", idade);
	
	if(idade <= 18){
		printf("O valor do plano e: 50,00\n");
	}
		else
		{
			if((idade >= 19) && (idade <= 29)){
				printf("O valor do plano e: 70,00\n");
			}
			else
			{
				if((idade >= 30) && (idade <= 45)){
					printf("O valor do plano e: 90,00 \n");
				}
				else
				{
					if((idade >= 46) && (idade <= 65)){
						printf("O valor do plano e: 130,00 \n");
					}
					else
					{
						printf("O valor do plano e: 170,00\n");
					}
				}
			}
		}
		
		return(0);
}