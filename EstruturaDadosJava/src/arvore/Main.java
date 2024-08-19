package arvore;public class Main {
    public static void main(String[] args) {

        No raiz = inserir(raiz = null, 5);
        raiz = inserir(raiz, 15);
        raiz = inserir(raiz, 2);
        raiz = inserir(raiz, 1);
        raiz = inserir(raiz, 3);
        raiz = inserir(raiz, 6);
        raiz = inserir(raiz, 7);
        raiz = inserir(raiz, 11);
        raiz = inserir(raiz, 13);
        raiz = inserir(raiz, 19);
        raiz = inserir(raiz, 21);

        raiz = removerElemento(raiz,11);

        raiz = remover(raiz);
        raiz = remover(raiz);

        buscar(raiz, 13);

    }

    public static No inserir(No raiz, int valor){
        // o novo elemento é criado
        No novo = new No();
        // seta um valor para o novo elemento
        novo.setValor(valor);
        //verificação para saber se a árvore é nula
        if (raiz == null){
            //raiz recebe o valor do novo elemento
            raiz = novo;
            return raiz;
        }
        //criação ponteiros auxiliares
        No subraiz = null;
        No aux = raiz;

        while( aux != null) {
            subraiz = aux;
            if (novo.valor < aux.valor) {
                aux = aux.esquerda;
            } else {
                aux = aux.direita;
            }
        }
        //encontrou onde o novo elemento entrará
        if (novo.valor < subraiz.valor){
            subraiz.esquerda = novo;
        } else {
            subraiz.direita = novo;
        }
        return raiz;
    }

    public static No remover(No raiz) {
        // verifica se a arvore é vazia
        if (raiz == null){
            return null;
        }
        System.out.println("removendo raiz: " + raiz.valor);
        // verifica se a raiz só tem 1 lado
        if (raiz.getEsquerda() == null) {
            raiz = (raiz.getDireita());
            return raiz;
        }

        // maior recebe à esquerda da raiz
        No maior = raiz.getEsquerda();
        No anterior = null;


        while (maior.getDireita() != null) {
            anterior = maior;
            maior = maior.getDireita();
        }
        if (anterior != null){
            anterior.setDireita(maior.getEsquerda());
            maior.setEsquerda(raiz.getEsquerda());
        }
        maior.setDireita(raiz.getDireita());
        return maior;
    }

    public static No buscarPai(No raiz, int valor) {
        No atual = raiz;
        No pai = null;

        while (atual != null && atual.getValor() != valor) {
            pai = atual;
            if (valor < atual.getValor()) {
                atual = atual.getEsquerda();
            } else {
                atual = atual.getDireita();
            }
        }

        return pai; // Retorna o pai, que é o elemento a ser removido
    }

    public static No removerElemento(No raiz, int valor) {
        No pai = buscarPai(raiz, valor);
        No alvo;

        if (pai == null) {
            // O nó a ser removido é a raiz
            if (raiz != null && raiz.getValor() == valor) {
                return remover(raiz);
            } else {
                return raiz; // Nó não encontrado
            }
        } else if (pai.getEsquerda() != null && pai.getEsquerda().getValor() == valor) {
            alvo = pai.getEsquerda();
            pai.setEsquerda(remover(alvo));
            // se o nó a ser removido é o esquerdo
        } else if (pai.getDireita() != null && pai.getDireita().getValor() == valor) {
            alvo = pai.getDireita();
            // se o nó a ser removido é o direito
            pai.setDireita(remover(alvo));
        }

        return raiz;
    }

    public static Integer buscar(No raiz, int valor) {
        if(raiz == null){
            return null;
        }
        if (valor == raiz.valor) {
            System.out.println("valor encontrado na arvore: " + valor);
            return raiz.valor;
        }
        if (valor < raiz.valor) {
            return buscar(raiz.esquerda,valor);
        }
        return buscar(raiz.direita,valor);
    }
}
