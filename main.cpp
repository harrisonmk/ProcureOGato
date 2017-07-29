#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void telai();

void jogocomp1();
void jogocomp2();
void jogocomp3();
void jogocomp4();

void jogo1v1();
void jogo1v1_2();
void jogo1v1_3();

void menuerrou();
void menuerrou1v1();
void acertou();
void pause(float);


int main()
{

	printf("___  ____  ____  ____   _  _  ____   ____    ____\n");
	printf("|__] |__/  |  |  |      |  |  |__/   |___    |  |\n");
	printf("|    |  \\  |__|  |___   |__|  |  \\   |___    |__|\n");

	printf("____ ____ ___ ____\n");
	printf("| __ |__|  |  |  |\n");
	printf("|__] |  |  |  |__| \n");
	printf("\n\n");

	telai();

	srand((unsigned)time(NULL));


	return 0;
}


void telai()
{
	setlocale(LC_ALL, "Portuguese");
	int op;

	printf("\n");
	printf(" __________________________________________");
	printf("\n");
	printf("|                                          |");
	printf("\n");
	printf("|     1.Jogo vs Computador                 |");
	printf("\n");
	printf("|     2.Jogo 1 vs 1                        |");
	printf("\n");
	printf("|     0.Sair                               |");
	printf("\n");
	printf("|                                          |");
	printf("\n");
	printf("|__________________________________________|\n");

	printf("\nDigite uma Opção:\n");

	while(op != 0)
	{
		scanf("%d", &op);
		switch(op)
		{
		case 0:
			op = 0;
			break;
			break;

		case 1:
			jogocomp1();
			break;

		case 2:
			jogo1v1();
			break;

		default:
			printf("Opcao incorreta!");
			break;

		}
	}
}

void menuerrou()
{
	setlocale(LC_ALL, "Portuguese");
	int op;

	printf("\n");
	printf(" __________________________________________");
	printf("\n");
	printf("|                                          |");
	printf("\n");
	printf("|     1.Retornar ao Menu Principal         |");
	printf("\n");
	printf("|     2.Jogar Novamente?                   |");
	printf("\n");
	printf("|     0.Sair                               |");
	printf("\n");
	printf("|                                          |");
	printf("\n");
	printf("|__________________________________________|\n");

	printf("Digite uma opção:\n");

	while(op != 0)
	{
		scanf("%d", &op);
		switch(op)
		{
		case 0:
			op = 0;
			break;
			break;
		case 1:
			telai();
			break;

		case 2:
			jogocomp1();
			break;

		default:
			printf("Opção Inválida!\n");

		}
	}
}

void menuerrou1v1()
{


	setlocale(LC_ALL, "Portuguese");
	int op;

	printf("\n");
	printf(" __________________________________________");
	printf("\n");
	printf("|                                          |");
	printf("\n");
	printf("|     1.Retornar ao Menu Principal         |");
	printf("\n");
	printf("|     2.Jogar Novamente?                   |");
	printf("\n");
	printf("|     0.Sair                               |");
	printf("\n");
	printf("|                                          |");
	printf("\n");
	printf("|__________________________________________|\n");

	printf("Digite uma opção:\n");

	while(op != 0)
	{
		scanf("%d", &op);
		switch(op)
		{
		case 0:
			op = 0;
			break;
			break;
		case 1:
			telai();
			break;

		case 2:
			jogo1v1();

		default:
			printf("Opção Inválida!\n");

		}
	}

}

void acertou()
{
	printf("\n |-------------|\n");
	printf(" |             |\n");
	printf(" |   |\\---/|   |\n");
	printf(" |   | o_o |   |\n");
	printf(" |    \\_^_/    |\n");
	printf(" |_____________|\n");

	pause(2.5);
	system("clear || cls");
}

void jogocomp1()
{
	system("clear || cls");
	setlocale(LC_ALL, "Portuguese");
	int i, n, c = 1, ale;

	printf("\nChances:%d\n", c);
	printf("\nNível 1\n");

	for(i = 1 ; i <= 3 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 3;
	printf("\nEm qual caixa está o gato?\n");
	scanf("%d", &n);
	if(n == ale)
	{
		printf("Acertou!\n");
		acertou();
		jogocomp2();
	}
	else
	{
		printf("Errou!\n");
		printf("Chances:%d\n", c - 1);
		menuerrou();

	}
}

void jogocomp2()
{

	setlocale(LC_ALL, "Portuguese");

	int i, n, c = 2, ale;


	printf("\nChances:%d\n", c);
	printf("\nNível 2\n");

	for(i = 1 ; i <= 4 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 4;
	printf("\nEm qual caixa está o gato?\n");
	scanf("%d", &n);
	if(n == ale)
	{
		printf("Acertou!\n");
		acertou();
		jogocomp3();
	}
	else
	{
		printf("Errou!\n");

		printf("\nChances:%d", c - 1);
		for(i = 1 ; i <= 4 ; i++)
		{
			printf("\n _______\n");
			printf("|       |\n");
			printf("|   %d   |\n", i);
			printf("|       |\n");
			printf("|_______|\n");
		}
		printf("\nEm qual caixa está o gato?\n");
		scanf("%d", &n);
		if(n == ale)
		{
			printf("Acertou!\n");
			acertou();
			jogocomp3();
		}
		else
		{
			printf("\nErrou!\n");
			printf("\nChances:0\n");
			menuerrou();
		}
	}
}

void jogocomp3()
{

	setlocale(LC_ALL, "Portuguese");

	int i, n, c = 2, ale;


	printf("\nChances:%d\n", c);
	printf("\nNível 3\n");

	for(i = 1 ; i <= 5 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 5;
	printf("\nEm qual caixa está o gato?\n");
	scanf("%d", &n);
	if(n == ale)
	{
		printf("Acertou!\n");
		acertou();
		jogocomp4();
	}
	else
	{
		printf("Errou!\n");

		printf("\nChances:%d", c - 1);
		for(i = 1 ; i <= 5 ; i++)
		{
			printf("\n _______\n");
			printf("|       |\n");
			printf("|   %d   |\n", i);
			printf("|       |\n");
			printf("|_______|\n");
		}
		printf("\nEm qual caixa está o gato?\n");
		scanf("%d", &n);
		if(n == ale)
		{
			printf("Acertou!\n");
			acertou();
			jogocomp4();
		}
		else
		{
			printf("\nErrou!\n");
			printf("\nChances:0\n");
			menuerrou();
		}
	}
}

void jogocomp4()
{
	setlocale(LC_ALL, "Portuguese");

	int i, n, c = 3, ale;


	printf("\nChances:%d\n", c);
	printf("\nNível 4\n");

	for(i = 1 ; i <= 6 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 6;
	printf("\nEm qual caixa está o gato?\n");
	scanf("%d", &n);
	if(n == ale)
	{
		printf("Acertou!\n");
		acertou();
	}
	else
	{
		printf("Errou!\n");

		printf("\nChances:%d", c - 1);
		for(i = 1 ; i <= 6 ; i++)
		{
			printf("\n _______\n");
			printf("|       |\n");
			printf("|   %d   |\n", i);
			printf("|       |\n");
			printf("|_______|\n");
		}
		printf("\nEm qual caixa está o gato?\n");
		scanf("%d", &n);
		if(n == ale)
		{
			printf("Acertou!\n");
			acertou();
		}
		else
		{
			printf("\nErrou!\n");
			printf("\nChances:1\n");
			for(i = 1 ; i <= 6 ; i++)
			{
				printf("\n _______\n");
				printf("|       |\n");
				printf("|   %d   |\n", i);
				printf("|       |\n");
				printf("|_______|\n");
			}
			printf("\nEm qual caixa está o gato?\n");
			scanf("%d", &n);
			if(n == ale)
			{
				printf("Acertou!\n");
				acertou();

			}
			else
			{
				printf("\nChances:0\n");
				menuerrou();
			}
		}
	}
}


void jogo1v1()
{
	system("clear || cls");
	setlocale(LC_ALL, "Portuguese");

	int i, n1, n2, c = 2, ale;


	printf("\nChances:%d\n", c);
	printf("\nNível 1\n");

	for(i = 1 ; i <= 4 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 4;

	printf("\nJogador 1,em qual caixa está o gato?\n");
	scanf("%d", &n1);

	printf("\nJogador 2,em qual caixa está o gato?\n");
	scanf("%d", &n2);

	if(n1 == ale)
	{
		printf("Jogador 1 acertou!\n");
		acertou();
		jogo1v1_2();
	}
	else if(n2 == ale)
	{
		printf("Jogador 2 acertou!\n");
		acertou();
		jogo1v1_2();
	}
	else
	{
		printf("Perderam!\n");
		menuerrou1v1();
	}
}

void jogo1v1_2()
{

	setlocale(LC_ALL, "Portuguese");

	int i, n1, n2, c = 2, ale;


	printf("\nChances:%d\n", c);
	printf("\nNível 2\n");



	for(i = 1 ; i <= 5 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 5;
	printf("\nJogador 1,em qual caixa está o gato?\n");
	scanf("%d", &n1);

	printf("\nJogador 2,em qual caixa está o gato?\n");
	scanf("%d", &n2);

	if(n1 == ale)
	{
		printf("Jogador 1 acertou!\n");
		acertou();
		jogo1v1_3();

	}
	else if(n2 == ale)
	{
		printf("Jogador 2 acertou!\n");
		acertou();
		jogo1v1_3();
	}
	else
	{
		system("clear || cls");
		printf("\nErrou\n");
		printf("\nChances:1\n");

		for(i = 1 ; i <= 5 ; i++)
		{

			printf("\n _______\n");
			printf("|       |\n");
			printf("|   %d   |\n", i);
			printf("|       |\n");
			printf("|_______|\n");
		}

		ale = rand() % 5;
		printf("\nJogador 1,em qual caixa está o gato?\n");
		scanf("%d", &n1);

		printf("\nJogador 2,em qual caixa está o gato?\n");
		scanf("%d", &n2);

		if(n1 == ale)
		{
			printf("Jogador 1 acertou!\n");
			acertou();
			jogo1v1_3();

		}
		else if(n2 == ale)
		{
			printf("Jogador 2 acertou!\n");
			acertou();
			jogo1v1_3();
		}
		else
		{
			printf("\nPerderam!\n");
			menuerrou1v1();
		}
	}
}

void jogo1v1_3()
{
	setlocale(LC_ALL, "Portuguese");

	int i, n1, n2, c = 2, ale;


	printf("\nChances:%d\n", c);
	printf("\nNível 3\n");

	for(i = 1 ; i <= 6 ; i++)
	{

		printf("\n _______\n");
		printf("|       |\n");
		printf("|   %d   |\n", i);
		printf("|       |\n");
		printf("|_______|\n");
	}

	ale = rand() % 6;
	printf("\nJogador 1,em qual caixa está o gato?\n");
	scanf("%d", &n1);

	printf("\nJogador 2,em qual caixa está o gato?\n");
	scanf("%d", &n2);
	if(n1 == ale)
	{
		printf("Jogador 1 Acertou!\n");
		acertou();
		printf("\nPARABÉNS,VENCERAM O JOGO!\n");
		menuerrou1v1();
	}
	else if(n2 == ale)
	{
		printf("Jogador 2 Acertou!\n");
		acertou();
		printf("\nPARABÉNS,VENCERAM O JOGO!\n");
		menuerrou1v1();
	}
	else
	{
		system("clear || cls");
		printf("\nErraram!\n");
		printf("\nChances:%d\n", c - 1);

		for(i = 1 ; i <= 6 ; i++)
		{

			printf("\n _______\n");
			printf("|       |\n");
			printf("|   %d   |\n", i);
			printf("|       |\n");
			printf("|_______|\n");
		}

		ale = rand() % 6;
		printf("\nJogador 1,em qual caixa está o gato?\n");
		scanf("%d", &n1);

		printf("\nJogador 2,em qual caixa está o gato?\n");
		scanf("%d", &n2);
		if(n1 == ale)
		{
			printf("\nJogador 1 Acertou!\n");
			acertou();
			printf("\nPARABÉNS,VENCERAM O JOGO!\n");
			menuerrou1v1();
		}
		else if(n2 == ale)
		{
			printf("\nJogador 2 Acertou!\n");
			acertou();
			printf("\nPARABÉNS,VENCERAM O JOGO!\n");
			menuerrou1v1();
		}
	}
	if(n1 && n2 != ale)
	{
		printf("\nChances:0\n");
		printf("\nPerderam!\n");
		menuerrou1v1();
	}
}

void pause (float delay1)
{

	if (delay1 < 0.001) return;

	float inst1 = 0, inst2 = 0;

	inst1 = (float)clock() / (float)CLOCKS_PER_SEC;

	while (inst2 - inst1 < delay1) inst2 = (float)clock() / (float)CLOCKS_PER_SEC;

	return;

}
