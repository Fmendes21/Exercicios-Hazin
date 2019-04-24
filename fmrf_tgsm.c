#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int num;
	struct node *left;
	struct node *right;
	struct node *father;
	int alt;
}Node;

int getaltura (Node *no){
	if (no == NULL){
		return 0;
	}
	else{
		return(no->alt);
	}
}

Void atualizaAlt (Node *no){
	int altDireita;
	int altEsquerda;

	if (no != NULL)
	{
		altDireita = getaltura(no->right);
		altEsquerda = getaltura(no->left);
	
	}
}

Node* createTree (int info, Node *esq, Node *dir){
	Node *raiz;
	raiz = malloc(sizeof(Node));

	raiz->num = info;
	raiz->left = esq;
	raiz->right = dir;
	esq->father = raiz;
	dir->father = raiz;

	return(raiz);
}

Node* rotacaoEsquerda (Node *raiz){
	Node *aux = malloc(sizeof(Node));
	aux = raiz->right;
	raiz->right = aux->left;
	aux->left = raiz;
	aux->father = raiz->father;
	raiz->father = aux;
	raiz->direita->father = raiz;
	atualizaAlt(raiz->left);
	atualizaAlt(raiz);

	return (aux);
}

Node* rotacaoDuplaEsquerda (Node *raiz){
	Node *resultado = malloc(sizeof(Node));

	raiz->right = rotacaoDireita(raiz->right);
	resultado = rotacaoEsquerda(raiz->left);

	return(resultado);
}

Node* rotacaoDireita (Node *raiz){
	Node *aux = malloc(sizeof(Node));
	aux = raiz->left;
	raiz->left = aux->right;
	aux->right = raiz;
	aux->father = raiz->father;
	raiz->father = aux;
	raiz->left->father = raiz;
	atualizaAlt(raiz->right);
	atualizaAlt(raiz);

	return (aux);
}

Node* rotacaoDuplaDireita (Node *raiz){
	Node *resultado = malloc(sizeof(Node));
	raiz->left = rotacaoEsquerda(raiz->left);
	resultado = rotacaoDireita(raiz->right);

	return(resultado);
}

void inserir (int x, Node raiz){

	if (raiz == NULL)
	{
		raiz = malloc(sizeof(Node));
		raiz->info = x;
		raiz->left = NULL;
		raiz->right = NULL;
		raiz->alt = 1;
	}

	else{
		if (x < raiz->info)
		{
			inserir(x, raiz->left)

				if (((getaltura(raiz->left)) - (getaltura(raiz->right))) == 2{

					if (x < raiz->left->info){
							rotacaoDireita(raiz);
					}
					else{
							rotacaoDuplaDireita(raiz);
					}	
				}
		}
		else{
			inserir(x, raiz->right);
			if ((getaltura(raiz->right)) - (getaltura(raiz->left))) == 2 {
				if (x >raiz->right->info){
					rotacaoEsquerda(raiz);
				}
				else{
					rotacaoDuplaEsquerda(raiz)
				}
			}
		}
		atualizaAlt(raiz);
	}
}

		





int main (){
	int info, Q, k;
	Node *esq, *dir, *father;

	scanf("%i", &Q);

	for (int i = 0; i < Q; i++){
		scanf("%i %i", &k, &info);

		if (k == 1)
		{
			inserir(info, father);
		}

		if (k == 2){
			
		}

	}


}
