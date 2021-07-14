#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float porcem, total, rest;asd
	
	printf("Digite a porcetagem:");
	scanf("%f",&porcem);
	
	system("cls");
	
	printf("\n %.0f porcento de quanto quer calcular:", porcem);
	scanf("%f",&total);
	
	rest = (porcem*total)/100;
	printf("\nResultado � : %.0f", rest);
	
	
}
