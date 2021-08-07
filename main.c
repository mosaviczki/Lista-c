#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stddef.h>
#include "biblio.h"


void main()
{
	TipoListaSimples *prim = NULL;
	TipoListaSimples *prim2 = NULL;

	insereInicio(&prim, 3, 7);
    insereInicio(&prim, 2, 12);
    insereInicio(&prim, 1, 3);
    insereInicio2(&prim2, 3, 22);
    insereInicio2(&prim2, 2, 8);
    insereInicio2(&prim2, 1, 2);

	int a;
	TipoListaSimples c;
	printf("\nMenu:\n1-atualizaValor\n2-removePrimeiroNo\n3-pesquisaNo\n4-insereFimListaSimples\n5-removeUltimoNo\n6-removeNo\n7-liberaNos\n8-copiaListas\n9-intersecaoListas\n10-insereRemove\n11-transplantaNo\n12-contaNo\n13-alturaNo\n14-SAIR\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
		    imprimeLista(prim);
		    int nvalor;
		    printf("\nInforme o novo valor: ");
		    scanf("%d",&nvalor);
		    atualizaValor(prim, nvalor);
		    imprimeLista(prim);break;

		case 2:
		    imprimeLista(prim);
		    removePrimeiroNo(&prim);
		    printf("\nRemovendo o primeiro no:\n");
		    imprimeLista(prim);break;

		case 3:
		    imprimeLista(prim);
		    TipoListaSimples *b = pesquisaNo(prim, 2);
			printf("\nNo no endereco %d", b);break;

		case 4:
			imprimeLista(prim);
		    insereFimListaSimples(&prim,2);
		    imprimeLista(prim);
		case 5:
		    imprimeLista(prim);
		    removeUltimoNo(&prim);
		    printf("\nRemovendo o ultimo no:\n");
		    imprimeLista(prim);break;
		case 6:
		    imprimeLista(prim);
		    removeNo(&prim, 2);
		    printf("\nRemovendo o no");
		    imprimeLista(prim);
		case 7:
	     	imprimeLista(prim);
		    liberaNos(&prim);
		    printf("\nLiberando os nos\n");
		    imprimeLista(prim);
		/*case 8:
		    *copiaListas(prim);
		case 9:
			imprimeLista(prim);
			imprimeLista(prim2);
		    intersecaoListas(&prim, &prim2);
		    imprimeLista(prim);
			imprimeLista(prim2);
		case 10:
		    insereRemove(&primLista1, &primLista2);

		case 11:
		    transplantaNo(&primLista1, &primLista2);
		case 12:
		    contaNo(&primLista1);
		case 13:
			TipoChave chave;
			scanf("%d", &chave);
		    alturaNo(&primLista1,chave);*/

		case 14:break;

		default:
		    printf("Entrada invalida!");break;
    }
}


