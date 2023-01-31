#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<strings.h>

int main()
{   
	char sair;
	int fim;
	system("color 02");
	int num;	
		
	printf("\n==============================================================");
	printf("\n==============================================================");
	printf("\n||             000 0 000  000 000  000 0   0                ||");
	printf("\n||             0   0 0  0 0   0  0 0 0 0   0                ||");
	printf("\n||             00  0 000  00  000  000 0   0                ||");
	printf("\n||             0   0 0 0  0   0  0 0 0 0   0                ||");
	printf("\n||             0   0 0 0  000 000  0 0 000 000              ||");
	printf("\n||            ---------------------------------             ||");
	printf("\n||                  INTERPRISE & TECNOLOGY                  ||");
	printf("\n||                                                          ||");
	printf("\n||                    MENU DE PROGRAMAS                     ||");
	printf("\n||                                                          ||");
	printf("\n||  1- NUMERO PAR OU IMPAR       2- FAZENDO AS 4 OPERAÇOES  ||");
	printf("\n||  3- CALCULE A MEDIA           4- SOMA/MEDIA/PRODUTO      ||");
	printf("\n||  5- AREA DO QUADRADO          6- APROV/RECUP/REPRO       ||");
	printf("\n||  7- CALC. O TRIANGULO         8- AREA DE 2 QUADRADOS     ||");
	printf("\n||  9- TAXI                      10-ENDERECO/CEP/TEL        ||");
	printf("\n||  11-PERIM/AREA/CIRCUNFE       12-DESCOBRINDO A IDADE     ||");
	printf("\n||  13-IMPOSTO DE RENDA          14-MEDIA PONDERADA         ||");
	printf("\n||  15-CONSUMO DO VEICULO        16-MOSTRANDO  A FIGURA     ||");
	printf("\n||  17-MOSTRANDO AS NOTAS        18-NOME/END/TEL            ||");
	printf("\n||  19-DECIM/CENTIM/MILIM        20-CALCULE O SEU IMC       ||");	
	printf("\n||  21-TROCANDO OS NUMEROS       22-CONTANDO NUMEROS PARES  ||");
	printf("\n||  23-VETORES IMPARES E PARES   24-CONTANDO STRINGS        ||");
	printf("\n||                                                          ||");
	printf("\n||  ##DIGITE UM NUMERO PARA ESCOLHER O PROGRAMA DESEJADO##  ||");
	printf("\n||                      <s PARA SAIR>                       ||");
	printf("\n==============================================================");
	printf("\n==============================================================\n");
	
	for ( ; ; )
{
	scanf("%d", &num);
	switch(num)
{
	//====================================================================
	{case 1:
	int num;
		printf("DIGITE UM NUMERO: ");
    		scanf("%d", &num);
				if(num%2==0)
    				{printf("\n\nO NUMERO E PAR!");}
   				else
    				{printf("O NUMERO E IMPAR!");}
    break;
	}
	//====================================================================
	{case 2:
	float num1, num2, soma, sub, div, mult;
    	printf("\nDigite o primeiro numero: ");
    		scanf("%f", &num1);
   		 printf("\nDigite o segundo numero: ");
    		scanf("%f", &num2);
   				printf("\n\nSOMA= %0.f", soma=num1+num2);
   				printf("\nSUBTRACAO= %0.f", sub=num1-num2);
    			printf("\nDIVISAO= %0.f", div=num1/num2);
    			printf("\nMUTIPLICACAO= %0.f", mult=num1*num2);
    break;
	}
	//====================================================================
	{case 3:
	float nota1, nota2, media, aprovado;
    	printf("Digite a primeira nota");
    		scanf("%f", &nota1);
    	printf("Digite a segunda nota");
    		scanf("%f", &nota2);
    			printf("A media do aluno= %.1f", media= (nota1+nota2) /2);
    break;
	}
	//====================================================================
	{case 4:
		
	int n1, n2, n3, soma, media, produto;
    		printf("Digite a primeira nota: ");
    		scanf("%d", &n1);
    	printf("Digite a segunda nota: ");
    		scanf("%d", &n2);
    	printf("Digite a terceira nota: ");
    		scanf("%d", &n3);
    			printf("soma= %d", soma= n1+n2+n3);
    			printf("\nmedia= %d", media= (n1+n2+n3) /3);
    			printf("\nproduto= %d", produto= soma*media);
	break;		
	}
	//====================================================================
	{case 5:
	int area, lado;
		printf("VAMOS CALCULAR A AREA DE UM QUADRADO?");
   		printf("\n\nDIGITE O VORLO CORRESPONDENTE AO LADO DO QUADRADO: ");
    		scanf("%d", &lado);
				printf("\n\nA AREA DO SEU QUADRADO E: %d", area= lado*lado);
    break;
	}
	//====================================================================	
	{case 6:
	float nota1, nota2, media;
 	printf("insira sua primeira nota ");
 		scanf("%f", &nota1);
 	printf("insira sua segunda nota ");
 		scanf("%f", &nota2);
 			printf("\nA sua media foi: %.1f", media= (nota1+nota2)/2);
		if(media>=8)
		{
 			printf("\nVoce foi aprovado");
		}
		else
 		
		if((media>=5) && (media<=7.9)) 
 		
 		{
			 printf("\nVoce esta de recuperacao");
 		}
		else
	 	{
		 	printf("\nVoce esta reprovado");
		}
	 break;
	}
	//====================================================================
	{case 7:
	float a1, l1, l2, lb, h;
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
					printf("\n\nNAO E UM TRIANGULO!");
	break;
	}
	//====================================================================
	{case 8:
	int a1, l1, a2, l2;
		printf("\n\nDIGITE O VARLO CORRESPONDENTE AO LADO DO PRIMEIRO QUADRADO: ");
			scanf("%d", &l1);
		printf("\n\nDIGITE O VALOR CORRESPONDENTE AO LADO DO SEGUNDO QUADRADO: ");
			scanf("%d", &l2);
				printf("\n\nA AREA DO PRIMEIRO QUADRADO E: %d", a1= l1*l1);
				printf("\n\nA AREA DO SEGUNDO QUADRADO E: %d", a2= l2*l2);
	if(a1==a2)
			printf("\n\nOS QUADRADOS SAO IGUAIS!");
	else
		if(a1>a2)
			printf("\n\nO 1 QUADRADO E MAIOR");
	else
			printf("\n\nO 2 QUADRADO E MAIOR");
	break;	
	}
	//====================================================================
	{case 9:		 
	float hora, dist, valorc;
	float desconto=0.15, pkm=3.25, vminimo=4.25, band1=5.00, band2=7.00;
	char card;
     
  		printf("\n\nINFORMAR A HORA ATUAL: ");
    		scanf("%f", &hora);
   		printf("INFORME A DISTANCIA DA CORRIDA: ");
    		scanf("%f", &dist);
		printf("POSSUI CARTAO FIDELIDADE? \ns ou n \n: ");
			scanf("%s", &card);
	
   		if(dist>=1)
   			{if(card=='s')   
   				{printf("PARABENS! VOCE RECEBEU UM DESCONTO.\n");
   		 			if((hora>=1) && (hora<=12))
   						printf("\nO VALOR DA SUA CORRIDA E:%.2f", valorc=(dist*pkm-(dist*pkm*desconto))*band1);

  		else
    			printf("\nO VALOR DA SUA CORRIDA E: %.2f", valorc=(dist*pkm-(dist*pkm*desconto))*band2);}
		else   
  				{printf("INFELIZMENTE VOCE NAO RECEBEU DESCONTO.\n");
   
  		if((hora>=1)&&(hora<=12))
   				printf("\nO VALOR DA SUA CORRIDA E:%.2f", valorc=(dist*pkm)*band1);
   		else 
  	 			printf("\nO VALOR DA SUA CORRIDA E:%.2f", valorc=(dist*pkm)*band2);}
			}		   
		else
			printf("\nO VALOR DA SUA CORRIDA E:%.2f", vminimo);
	break;
	}	
	//====================================================================
	{case 10:
char i, end[20], nome[20];
int tel, cep;
	printf("Digite seu Nome Completo: ");
			fflush(stdin);
			gets(nome);
	printf("\nDigite o seu Endereco: ");       
		gets(end);    
	printf("\nDigite o seu Cep: ");
		scanf("%d", &cep);      
	printf("\nDigite o seu Telefone: ");       
		scanf("%d", &tel);     
			printf("\nNome: %s", nome);     
				printf("\nEndereco: %s", end);     
					printf("\nCEP: %d", cep);
						printf("     Telefone: %d", tel);
	break;
	}
	//====================================================================
	{case 11:
		float perimetro, area, raio;
		float pi= 3.14; 
			printf("DIGITE O VALOR DO RAIO DA CIRCUNFERENCIA: ");
				scanf("%f", &raio);
					printf("\nO PERIMETRO DA CIRCUNFERENCIA E: %.2f", perimetro= 2*pi*raio);
						printf("\nA AREA DO CIRCUFERENCIA E: %.2f", area= pi*(raio*raio));
	break;
	}
	//====================================================================
	{case 12:
	int anoatual, idade, anodenascimento;
	printf("DIGITE O ANO QUE VOCE ESTA: ");
		scanf("%d", &anoatual);
	printf("DIGITE SUA IDADE: ");
		scanf("%d", &idade);
	printf("\nO ANO DO SEU NASCIMENTO E: %d", anodenascimento= anoatual-idade);
	break;
	}
	//====================================================================
	{case 13:
	float salario, impostopago, salarioliquido;
	float imposto= 0.07;
		printf("DIGITE O VALOR DO SEU SALARIO: ");
			scanf("%f", &salario);
				printf("\nSALARIO BRUTO: %.2f", salario);
				printf("\nVALOR DO IMPOSTO DE RENDA: %.2f",impostopago= salario*imposto);
				printf("\nSALARIO LIQUIDO: %.2f",salarioliquido= salario-impostopago);
	break;
	}
	//====================================================================
	{case 14:
	float media, mat, fis, qui, port, ing;
	float p= 10;
		printf("PESO DISCIPLINA");
		printf("\n3,0 MATEMATICA");
		printf("\n2,5 FISICA");
		printf("\n2,5 QUIMICA");
		printf("\n1,0 PORTUGUES");
		printf("\n1,0 INGLES");
			printf("\n\n\nDIGITE SUA NOTA DE MATEMATICA: ");
				scanf("%f", &mat);
			printf("\nDIGITE SUA NOTA DE FISICA: ");
				scanf("%f", &fis);
			printf("\nDIGITE SUA NOTA DE QUIMICA: ");
		 		scanf("%f", &qui);
			printf("\nDIGITE SUA NOTA DE PORTUGUES: ");
				scanf("%f", &port);
			printf("\nDIGITE SUA NOTA DE INGLES: ");
 				scanf("%f", &ing);
					printf("\n\nSUA MEDIA PESO E: %.2f", media=((3*mat)+(2.5*fis)+(2.5*qui)+(port)+(ing))/p);
	break;
	}
	//====================================================================
	{case 15:		
	float consumo, vtemp, velm, vesp;  int consvei= 12;
	
	printf("VAMOS CALCULAR AS INFORMACOES DA SUA VIAGEM?");   
	printf("\n=============================================");  
		printf("\n\nINFORME TEMPO DA SUA VIAGEM EM HORAS: ");   
			scanf("%f", &vtemp);  
		printf("\nINFORME A SUA SUA VELOCIDADE EM KM/h: ");   
			scanf("%f", &velm);    
				printf("\n\nINFORMACOES DA SUA VIAGEM:");    
				printf("\n\nVELOCIDADE MEDIA: %.2f KM/h", velm);    
				printf("\nTEMPO MEDIO GASTO: %.2f HORAS", vtemp);    
				printf("\nA DISTANCIA PERCORRIDA POR VOCE FOI: %.2f", vesp= vtemp*velm);    
				printf("\nSEU CONSUMO DE COMBUSTIVEL EM LITROS FOI: %.2f", consumo= vesp/consvei);
	break;	
	}
	//====================================================================
	{case 16:
		printf("xxxxx");
		printf("\nx   x");
		printf("\nx   x");
		printf("\nx   x");
		printf("\nxxxxx");
	break;	
	}
	//====================================================================
	{case 17:
		printf("ALUNO(A)");
		printf("    NOTA");
		printf("\n=========   =====");
		printf("\nALINE       9.0");
		printf("\nMARIO       DEZ");
		printf("\nSERGIO      4.5");
		printf("\nSHIRLEY     7.0");
	break;	
	}
	//====================================================================
	{case 18:
	char nome[30], end[30];
	int tel;
		printf("Digite seu Nome Completo: ");
			fflush(stdin);
			gets(nome);
		printf("\nDigite o seu Endereco: ");
			gets(end);
		printf("\nDigite o seu Telefone: ");
			scanf("%d", &tel);
				printf("\nNome: %s", nome);
				printf("\nEndereco: %s", end);
				printf("\nTelefone: %d", tel);	
	break;	
	}
	//====================================================================
	{case 19:
	float metros, decimetro, centimetros, milimetros;
		printf("DIGITE O VALOR DA METRAGEM: ");
			scanf("%f", &metros); 
					printf("\nDECIMETROS: %1.f",decimetro=metros*10);
						printf("\nCENTIMETROS: %1.f",centimetros=metros*100);
							printf("\nMILIMETROS: %1.f",milimetros=metros*1000);
	break;
	}	
	//====================================================================
	{case 20:		
		float imc, peso, alt;
   			printf("VAMOS CALCULAR O SEU IMC?");
    		printf("\n\nDIGITE O VALOR CORRESPONDENTE A SUA ALTURA: ");
    			scanf("%f", &alt);
    		printf("\n\nDIGITE O VALOR CORRESPONDENTE AO SEU PESO: ");
    			scanf("%f", &peso);
				    printf("\n\nO SEU IMC E: %f", imc=peso/(alt*alt));
   		if(imc<18.5)
    		printf("\n\nVOCE ESTA ABAIXO DO PESO!");
		else
		if((imc>=18.5) && (imc<25))
    			printf("\n\nVOCE ESTA NO PESO NORMAL!");
   		else 
			if((imc>=25) && (imc<=30))
    			printf("\n\nVOCE ESTA ACIMA DO PESO!");
	    else    
    	printf("\n\nVOCE ESTA OBESO!");
		break;
	}
	//====================================================================
	{case 21:
		int n1, n2, m;

		printf("digite um numero: ");
			scanf("%d", &n1);	
		printf("digite outro numero: ");
			scanf("%d", &n2);
		printf("\n Os numeros trocados sao: %d %d", n1=m, n2=n1, m=n2);	
	break;
	}
	//====================================================================
	{case 22:
	int num;
	for(num=0;num<=10;num++)
		if(num%2 == 0)
			{printf("O NUMERO E PAR=> %d\n", num);}
		else
			{printf("O NUMERO E IMPAR=> %d\n", num);}
		
	break;}
	//====================================================================
	{case 23:
		
	int i, num[10], par[10], impar[10], pares=0, impares=0;
	
		for(i=0;i<=9;i++)
		{
			printf("DIGITE O %d NUMERO ", i+1);
				scanf("%d.0",&num[i]);
		}
		for(i=0;i<=9;i++)
		{			
			if(num[i]%2==0)
			{
				par[pares]=num[i];
				pares++;	
			}
			else
			{
				impar[impares]=num[i];
				impares++;
			}
		}
		printf("\n\nOS NUMERO PARES SAO: ");
			for(i=0;i<pares;i++)
		{
				printf("\n%d\n", par[i]);	
		}
		printf("\n\nOS NUMERO IMPARES SAO: ");
			for(i=0;i<impares;i++)
		{
				printf("\n%d\n", impar[i]);
		}
	}
	//====================================================================
	{case 24:
	char nome1[20], nome2[20];

		printf("DIGITE O PRIMEIRO NOME COMPLETO: ");
			gets(nome1);
		printf("DIGITE O SEGUNDO NOME COMPLETO: ");
			gets(nome2);
				printf("\nO PRIMEIRO NOME E: %s", nome1);
				printf("\nO SEGUNDO NOME E: %s", nome2);
				printf("\nO PRIMEIRO NOME TEM: %d LETRAS", strlen(nome1));
				printf("\nO SEGUNDO NOME TEM: %d LETRAS", strlen(nome2));
		if(strlen(nome1)>strlen(nome2))
			{printf("\nO PRIMEIRO NOME E MAIOR!");}
		else
			printf("\nO SEGUNDO NOME E MAIOR!");
	}
	//====================================================================
}
	printf("\n\nDIGITE QUALQUER TECLA PARA CONTINUAR OU <s> PARA SAIR");
		scanf("%s", &sair);	
	if (sair=='s') 
	{break;}
}
	for(;;)
		{printf("10011100100111001011010100001101010101110001111101010");}
	
	return 0;		
}
