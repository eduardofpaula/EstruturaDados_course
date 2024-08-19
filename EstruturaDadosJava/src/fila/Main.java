package fila;

public class Main {
    public static void main(String[] args) {



        Fila fila = add(null, "Eduardo");
        fila = add(fila, "beatriz");
        fila = add(fila, "salve");
        fila = add(fila, "nai");
        fila = add(fila, "ana");
        fila = add(fila, "jao");

        String chamado;

        chamado = remover(fila);
        System.out.println("pessoa chamada: " + chamado);
        chamado = remover(fila);
        System.out.println("pessoa chamada: " + chamado);
        chamado = remover(fila);
        System.out.println("pessoa chamada: " + chamado);

        imprimir(fila.getInicio());
    }

    public static Fila add(Fila fila, String v){

        Pessoa novo = new Pessoa();
        novo.setValor(v);
        novo.setProx(null);

        //condição para ver se os ponteiros início e fim são nulos
        if(fila == null) {
            fila = new Fila();
            fila.setInicio(novo);
            fila.setFim(novo);
            return fila;
        }
        fila.getFim().setProx(novo);
        fila.setFim(novo);
        return fila;
    }

    public static String remover(Fila fila) {

        if (fila.getInicio() == null && fila.getFim() == null) {
            return null;
        }

        Pessoa lixo = fila.getFim();

        if (fila.getInicio() == fila.getFim()) {
            fila.getInicio().setProx(null);
            fila.getFim().setProx(null);
            return lixo.getValor();
        }

        lixo = fila.getInicio();
        fila.setInicio(lixo.getProx());
        return lixo.getValor();
    }

    public static void imprimir(Pessoa i){

        if(i == null) return;

        System.out.println(i.getValor());

        imprimir(i.getProx());
    }
}
