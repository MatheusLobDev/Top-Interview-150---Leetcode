class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int numA,numB;
        int res;
        int vaiUm = 0;
        string saida;

        for(int i = 0; i < max(a.length(),b.length()); i++){
            if(i < a.length()){
                numA = a[i] - '0';
            }else{
                numA = 0;
            }

            if(i < b.length()){
                numB = b[i] - '0';
            }else{
                numB = 0;
            }
            res = numA+numB+vaiUm;
            saida.push_back('0'+(res%2));
            vaiUm = res/2;
        }


        if(vaiUm > 0){
            saida.push_back('1');
        }
        reverse(saida.begin(),saida.end());
        return saida;
    }
};
