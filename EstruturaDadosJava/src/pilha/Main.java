package pilha;

public class Main {
    public static void main(String[] args) {

        Letra topo = new Letra();

        add(topo,"5");
        add(topo,"4");
        add(topo,"3");
        add(topo,"2");
        add(topo,"1");

        String removidos = "0";

        removidos = remover(topo);
        System.out.println("valores removidos: " + removidos);
        removidos = remover(topo);
        System.out.println("valores removidos: " + removidos);

        imprimir(topo.getProx());
    }

    public static void add(Letra topo, String v){
        //cria alocação memoria NOVO
        Letra novo = new Letra();
        // NOVO recebe variavel v valor da string passada na Main
        novo.setValor(v);
        // NOVO aponta para a referencia prox do TOPO
        novo.setProx(topo.getProx());
        // referencia prox do TOPO aponta para NOVO
        topo.setProx(novo);
    }

    public static String remover(Letra topo){
        // verifica se o prox(pilha) de TOPO é diferente e null
        if(topo.getProx()!=null){
            //cria variavel lixo e faz ela apontar para o topo da pilha pegando pela referencia
            Letra lixo = topo.getProx();
            // aponta prox de topo para o item abaixo do primeiro(PROX PROX)
            topo.setProx(topo.getProx().getProx());
            // aponta variavel lixo para null = se livrando
            lixo.setProx(null);
            //retorna o lixo
            return lixo.getValor();
        }
        return null;
    }

    public static void imprimir(Letra i){
        // verifica se a pilha não é vazia
        if (i == null)  return ;
        // imprime na tela os valores da pilha
        System.out.println(i.getValor());
        // chama a função novamente, trabalhando com recursão
        imprimir(i.getProx());
    }
}