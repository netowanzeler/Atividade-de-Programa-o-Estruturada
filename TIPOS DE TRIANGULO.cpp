#include<stdio.h>
#include<stdlib.h>
int main()
{	float a1, l1, l2, lb, h;
    
	printf("Digite o primeiro lado do triangulo: ");
    	scanf("%f", &l1);
    printf("\nDigite o segundo lado do triangulo: ");
    	scanf("%f", &l2);
    printf("\nDigite o valor da base do triangulo: ");
    	scanf("%f", &lb);
    printf("\nDigite o valor correspondente a Altura do triangulo: ");
    	scanf("%f", &h);    
    if((l1+l2>lb) && (l1+lb>l2) && (l2+lb>l1))
    {printf("\nOs valores inseridos correspondente a um triangulo");
    	if((l1==l2 && l1!=lb) || (l2==lb && l1!=l2) || lb==l1 && lb!=l2) 
    		printf("\n\nO TRIANGULO E ISOSCELES");
    	else
		if(l1==l2 && l1==lb)
    		printf("\n\nO TRIANGULO E EQUILATERO");
   		else       	
        	printf("\n\nO TRIANGULO E ESCALENO");
	printf("\n\nA area do triangulo e: %.2f", a1= (lb*h) /2);}
    else
    printf("\n\nNAO E UM TRIANGULO!");}
