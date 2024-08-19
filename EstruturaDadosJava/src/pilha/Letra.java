package pilha;

public class Letra {
    private String valor;
    private Letra prox;

    public String getValor() {
        return valor;
    }

    public void setValor(String valor) {
        this.valor = valor;
    }

    public Letra getProx() {
        return prox;
    }

    public void setProx(Letra prox) {
        this.prox = prox;
    }
}
