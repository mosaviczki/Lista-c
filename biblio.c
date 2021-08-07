#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stddef.h>
#include "biblio.h"
TipoListaSimples *alocaNo(TipoValor valor)
{
    TipoListaSimples *no;
    no = (TipoListaSimples *) malloc(sizeof(TipoListaSimples));
    if (no == NULL) return NULL;
    no->valorQualquer = valor;
    no->prox = NULL;
    return no;
}
TipoListaSimples* insereInicio(TipoListaSimples **prim, TipoChave chave, TipoValor valor)
{
	assert(prim);
    TipoListaSimples* noAux = alocaNo(valor);
	if(noAux == NULL)
	   return NULL;
    noAux->chave = chave;
    noAux->valorQualquer = valor;
    noAux->prox = NULL;
    noAux->prox = *prim;
    *prim = noAux;
    return *prim;
}
TipoListaSimples* insereInicio2(TipoListaSimples **prim2, TipoChave chave, TipoValor valor)
{
	assert(prim2);
    TipoListaSimples* noAux = alocaNo(valor);
	if(noAux == NULL)
	   return NULL;
    noAux->chave = chave;
    noAux->valorQualquer = valor;
    noAux->prox = NULL;
    noAux->prox = *prim2;
    *prim2 = noAux;
    return *prim2;
}
void imprimeLista(TipoListaSimples *prim)
{
    int i=0;
	if(prim == NULL)
		printf("Lista vazia\n");
	while(prim != NULL)
	{
		printf("\nNo %d - %d", prim->chave, prim->valorQualquer);
		prim = prim->prox;
	}
}
void atualizaValor(TipoListaSimples *prim, TipoValor novoValor)
{
    if(prim == NULL)
	  return;
	  else
        prim->valorQualquer = novoValor;
}
void removePrimeiroNo(TipoListaSimples **prim)
{
    TipoListaSimples *atual = *prim;
    if(*prim== NULL) return;
    else
    {
        (*prim) = (*prim)->prox;
        free(atual);
    }
}
TipoListaSimples *pesquisaNo(TipoListaSimples *prim, TipoChave chave)
{
	TipoListaSimples *aux = prim;
	while(aux!=NULL)
	{
		if(aux->chave == chave)
		  return aux;
		else aux = aux->prox;
	}
	return NULL;
}
TipoListaSimples * insereFimListaSimples(TipoListaSimples **prim, TipoChave chave)
{
	 assert(prim);
     TipoListaSimples* pa = *prim;
     TipoListaSimples* aux = alocaNo(chave);
     if (aux == NULL) exit(0);

     while(pa->prox!=NULL)
     {
      	pa = pa->prox;
    }
    pa->prox = aux;
}
void removeUltimoNo(TipoListaSimples **prim)
{
    TipoListaSimples *aux = *prim, *ant;
    if(aux)
    {
    	if(aux == ((*prim)->prox == NULL))
    	{
    		(*prim)->prox == NULL;
    		free(aux);
		}
		else
		{
			while(aux->prox != (*prim)->prox == NULL)
			{
				aux = aux->prox;
			}
			ant = aux->prox;
			aux->prox = NULL;
			(*prim)->prox == NULL;
			free(ant);
		}
	}
	    
}
void removeNo(TipoListaSimples **prim, TipoChave chave)
{
    TipoListaSimples *aux = *prim, *ant = *prim;
    if(*prim == NULL)
        exit(1);
    else
    {
        if((*prim)->chave == chave)
        {
             *prim = (*prim)->prox;
             free(aux);
             aux = NULL;
        }
        else
        {
             while(aux != NULL)
             {
                  if(aux->chave == chave)
                  {
                      ant->prox = aux->prox;
                      free(aux);
                      aux = NULL;
                  }
                  ant = aux;
                  if(aux != NULL)
                      aux = aux->prox;
             }
        }
    }


}
void liberaNos(TipoListaSimples **prim)
{
	if(*prim == NULL)
	  return;
	liberaNos(&(*prim)->prox);
	(*prim)->prox = NULL;
	free(*prim);
	*prim=NULL;
}
/*TipoListaSimples *copiaListas(TipoListaSimples *prim);
{

}*/
/*TipoListaSimples *intersecaoListas(TipoListaSimples **prim, TipoListaSimples **prim2)
{
    TipoListaSimples *aux = *prim2, *ant;
    if(aux)
    {
    	if(aux == ((*prim2)->prox == NULL))
    	{
    		(*prim2)->prox == NULL;
    		free(aux);
		}
		else
		{
			while(aux->prox != (*prim2)->prox == NULL)
			{
				aux = aux->prox;
			}
			ant = aux->prox;
			aux->prox = NULL;
			(*prim2)->prox == NULL;
			TipoListaSimples* pa = *prim;
            TipoListaSimples* aux1 = alocaNo(ant);
             if (aux1 == NULL) exit(0);

             while(pa->prox!=NULL)
             {
            	pa = pa->prox;
             }
            pa->prox = aux1;
			free(ant);
		}
	}
	

}
/*void insereRemove(TipoListaSimples **primLista1, TipoListaSimples **primLista2)
{

}
void transplantaNo(TipoListaSimples **primLista1, TipoListaSimples **primLista2)
{

}
int contaNo(TipoListaSimples **primLista1)
{

}
int alturaNo(TipoListaSimples **primLista1, TipoChave chave)
{

}*/
