#include <stdio.h>
#include <stdlib.h>

void imprime(int *vetor, int tam);

int main()
{
	int cont, posP = 0, posI = 0, vetorP[5], vetorI[5], vetorE[15];
	for (cont = 0; cont < 15; cont++)
	{
		printf("\nDigite: ");
		scanf("%d", &vetorE[cont]);
	}
	for (cont = 0; cont < 15; cont++)
	{
		if ((vetorE[cont] % 2) == 0)
		{
			if (posP = 5)
			{
				imprime(vetorP, posP);
				free(vetorP);
				posP = 0;
			}
			vetorP[posP] = vetorE[cont];
			posP++;
		}
		else
		{
			if (posI = 5)
			{
				imprime(vetorI, posI);
				free(vetorI);
				posI = 0;
			}
			vetorI[posI] = vetorE[cont];
			posI++;
		}

	}
	imprime(vetorP, posP);
	imprime(vetorI, posI);
	return 0;
}

void imprime(int *vetor, int tam)
{
	int cont;
	for (cont = 0; cont < tam; cont++)
	{
		printf("%d", vetor[cont]);
	}
}
