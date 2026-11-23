class Solution {
public:
    bool isHappy(int n) {
        string texto = to_string(n);
        set<int> vistos;

        while (true) {
            int sum = 0;
            for (int i = 0; i < texto.length(); i++) {
                sum = sum + ((texto[i] - '0') * (texto[i] - '0'));
            }

            texto = to_string(sum);
            if (sum == 1) {
                return true;
            } else if (!vistos.insert(sum).second) {
                return false;
            }
        }
    }
};
