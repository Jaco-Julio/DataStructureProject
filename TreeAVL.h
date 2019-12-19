
typedef struct tree*Tree;

Tree* iniciaArvore();
void liberaArvore(Tree* raiz);
int isEmpty(Tree* raiz);
int alturaArvore(Tree*raiz);
int totalNodesArvore(Tree*raiz);
void imprimePreOrdem(Tree*raiz);
void imprimeEmOrdem(Tree*raiz);
void imprimePosOrdem(Tree*raiz);
void rotacaoSimplesEsquerda(Tree*raiz);
void rotacaoSimplesDireita(Tree*raiz);
void rotacaoDuplaEsquerda(Tree*raiz);
void rotacaoDuplaDireita(Tree*raiz);

int insereArvore(int valor, Tree*raiz);
