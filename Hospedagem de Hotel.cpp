#include <stdio.h>asd
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int dias;
	float totalTaxa, totalEstadia, total;
	
	
	
	printf("Digite a quantidade de dias que voc� deseja permanecer no hotel:");
	scanf("%d",&dias);
	
	if(dias>15){
		totalTaxa = (dias * 5.50);
		totalEstadia = (dias * 60.00);
		total = totalTaxa + totalEstadia;
		
		}else if(dias==15){
			totalTaxa = (dias * 6.00);
			totalEstadia = (dias * 60.00);
			total = totalTaxa + totalEstadia;
			
				}else if(dias<15){
					totalTaxa = (dias * 8.00);
					totalEstadia = (dias * 60.00);
					total = totalTaxa + totalEstadia;
			    	}
		
		
		
		printf("Valor da estadia:.....%.2f\n O valor dos servi�os:.....%.2f\n Valor Total A pagar.....%.2f",totalTaxa,totalEstadia,total);
	}
	
