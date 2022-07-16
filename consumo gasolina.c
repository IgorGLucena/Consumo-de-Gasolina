#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int main (){
	float km,kml;
	float reais_gasolina,preco_gasolina;
	float litros;
	
	printf("\n Vamos descobrir quantos km/l seu carro faz");
	printf("\n Por favor, digite quantos km voce percorreu:");
	scanf("%f",&km);
	printf("\n Digite qual o preco da gasolina:");
	scanf("%f",&preco_gasolina);
	printf("\n Digite quanto de gasolina voce abasteceu em reais:");
	scanf("%f",&reais_gasolina);
	
	litros = reais_gasolina / preco_gasolina;
	kml = km / litros;
	
	printf("\n\n\n --------------------------------------");
	printf("\n Voce abasteceu: %.2f litros",litros);
	printf("\n Seu carro faz %.2f km/l \n\n",kml);
	
	system("pause");
	system("cls");
	
	printf("\n -----------------------------------------");
	printf("\n Vamos descobrir quanto gasta um determinado percurso");
	printf("\n Digite quantos km voce vai percorrer:");
	scanf("%f",&km);
	
	printf("\n\n ---------------------------------------");
	printf("\n Seu carro Percorreu %.2f km",km);
	printf("\n Seu carro faz %.2f km/l",kml);
	printf("\n Voce gastou %.2f litros de gasolina neste percurso", km/kml);
	printf("\n Voce gastou %.2f reais neste percurso",(km/kml)*preco_gasolina);
	
	
	
	
	getch();
	return 0;
}
