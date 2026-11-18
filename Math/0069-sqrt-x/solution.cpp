class Solution {
public:
    int mySqrt(int x) {
        int ini = 1, fim = 46340, meio;

        if (!x) return 0;
        if (x == 2147483647) return 46340;

        while (ini <= fim) {
            meio = (ini + fim) / 2;

            // Se achei o número, retorno o valor de meio.
            if (meio * meio == x) return meio;

            // Se o número está na frente, olho para a metade depois de meio.
            if (meio * meio < x) ini = meio + 1;

            // Se o número está atrás, olho para a metade antes de meio.
            if (meio * meio > x) fim = meio - 1;

            if (meio * meio > x && (meio - 1) * (meio - 1) < x) {
                return meio - 1;
            }
        }

        // Ao terminar a busca, fim contém a raiz inteira arredondada para baixo.
        return fim;
    }
};
