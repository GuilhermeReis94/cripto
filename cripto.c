#include <stdio.h>
#include <string.h>
#define tamanho 10000

int main(){
	
	char mensagem[tamanho];
	int ctd, t = 0, escolha;
	
	system("MODE con cols=53 lines=20");
	system("color 2");
	printf("-----------------------------------------------------\n");
	printf("-----         ESCOLHA A OPCAO DESEJADA         ------\n");
	printf("-----          1 -> Criptografar               ------\n");
	printf("-----          2 -> Descriptografar            ------\n");
	printf("-----------------------------------------------------\n");
	scanf("%d", &escolha);
	
	while(escolha != 1 && escolha != 2){
		printf("Opcao invalida\n");
		scanf("%d", &escolha);
	}

	if(escolha == 1){
		fflush(stdin);
		system("color 4");
		system("cls");
		printf("Digite a mensagem a ser criptografada: \n");
		gets(mensagem);
		t = strlen(mensagem);
	
		for(ctd = 0; ctd < t; ctd++){mensagem[ctd] += 1;}
		for(ctd = 0; ctd < t; ctd+=2){mensagem[ctd] += 7;}
		for(ctd = 0; ctd < t; ctd+=3){mensagem[ctd] -= 42;};
		for(ctd = 0; ctd < t; ctd+=4){mensagem[ctd] -= 135;}

		system("color 2");
		printf("\nMensagem criptografada: \n");
		for(ctd = 0; ctd < t; ctd++){printf("%c", mensagem[ctd]);}
	}

	if(escolha == 2){
		fflush(stdin);
		system("color 4");
		system("cls");
		printf("Digite a mensagem a ser descriptografada: \n");
		gets(mensagem);
		t = strlen(mensagem);
	
		for(ctd = 0; ctd < t; ctd++){mensagem[ctd] -= 1;}
		for(ctd = 0; ctd < t; ctd+=2){mensagem[ctd] -= 7;}
		for(ctd = 0; ctd < t; ctd+=3){mensagem[ctd] += 42;}
		for(ctd = 0; ctd < t; ctd+=4){mensagem[ctd] += 135;}
		
		system("color 2");
		printf("\nMensagem descriptografada: \n");
		for(ctd = 0; ctd < t; ctd++){printf("%c", mensagem[ctd]);}
	}
	return 0;
}

