class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> ultimoIndice;

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int numero = nums[i];
            auto anterior = ultimoIndice.find(numero);

            if (anterior != ultimoIndice.end() && i - anterior->second <= k) {
                return true;
            }

            ultimoIndice[numero] = i;
        }

        return false;
    }
};
