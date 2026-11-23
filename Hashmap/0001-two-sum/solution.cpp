class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int complemento = target - nums[i];
            auto encontrado = indices.find(complemento);

            if (encontrado != indices.end()) {
                return {encontrado->second, i};
            }

            indices.emplace(nums[i], i);
        }

        return {};
    }
};
