#ifndef BIBLIO_H_INCLUDE
#define BIBLIO_H_INCLUDE
typedef int TipoChave;
typedef int TipoValor;
struct TipoListaSimples
{
    TipoChave chave;
    TipoValor valorQualquer;
    struct TipoListaSimples *prox;
};
typedef struct TipoListaSimples TipoListaSimples;


TipoListaSimples *alocaNo(TipoValor valorQualquer);
TipoListaSimples *insereInicio(TipoListaSimples **prim, TipoChave chave, TipoValor valor);
TipoListaSimples *insereInicio2(TipoListaSimples **prim2, TipoChave chave, TipoValor valor);
void imprimeLista(TipoListaSimples *p);

void atualizaValor(TipoListaSimples *prim, TipoValor novoValor);

void removePrimeiroNo(TipoListaSimples **prim);

TipoListaSimples *pesquisaNo(TipoListaSimples *prim, TipoChave chave);

TipoListaSimples * insereFimListaSimples(TipoListaSimples **prim,TipoChave chave);

void removeUltimoNo(TipoListaSimples **prim);

void removeNo(TipoListaSimples **prim, TipoChave chave);

void liberaNos(TipoListaSimples **prim);

TipoListaSimples *copiaListas(TipoListaSimples *prim);

TipoListaSimples *intersecaoListas(TipoListaSimples *prim1, TipoListaSimples *prim2);

void insereRemove(TipoListaSimples **primLista1, TipoListaSimples **primLista2);

void transplantaNo(TipoListaSimples **primLista1, TipoListaSimples**primLista2);

int contaNo(TipoListaSimples **primLista1);

int alturaNo(TipoListaSimples **primLista1, TipoChave chave);

#endif

