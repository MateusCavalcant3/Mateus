#include <stdio.h>
#include <stdlib.h>


void main  () {
	int op, a ,b ,r;
	op = 1;
	
	while(op>0) {
	
	printf("\n\n==Calculadora==\n");
	printf("Escolha uma das opcoes abaixo:\n\n");
	printf("1)Adicao\n");
	printf("2)Subtracao\n");
	printf("3)Multiplicacao\n");
	printf("4)Divisao\n");
	printf("5)Fechar calculadora\n\n");
	scanf("%d",&op);
	
	
	switch(op){
		case 1 :
			printf("\nOpcao escolhida 1)Adicao.\n\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			printf("\nA adicao de %d + %d o resultado e = %d.",a ,b, r=a+b);
			a=0;
			b=0;
			r=0;
		break;
		case 2 :
			printf("\nOpcao escolhida 2)Subtracao.\n\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			printf("\nA subtracao de %d - %d o resultado e = %d.",a ,b, r=a-b);
			a=0;
			b=0;
			r=0;
		break;
		case 3 :
			printf("\nOpcao escolhida 3)Multiplicacao.\n\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			printf("\nA multiplicacao de %d x %d o resultado e = %d.",a ,b, r=a*b);
			a=0;
			b=0;
			r=0;
		break;
		case 4 :
			printf("\nOpcao escolhida 4)Divisao.\n\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			
			while(b==0){
				printf("\nImpossivel dividlr por 0\n");
				printf("Digite o outro numero:\n");
				scanf("%d",&b);
			}
				printf("\nA divisao de %d Ã· %d o resultado e = %d.",a ,b, r=a/b);
		break;
		case 5:
			printf("Saiu da calculadora");
			op=0;
			break;
		default:
			printf("\nEste numero e invalido");
		}
	}
}
    
