class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int maxJump = 0;
        int j = 0;
        int position = 0;

        for (int i = 0; i < nums.size(); i++) {
            i = position;
            j = i;

            if (i == nums.size() - 1) {
                return jumps;
            } else if (i + nums[i] >= nums.size() - 1) {
                return jumps + 1;
            }

            maxJump = 0;

            while (j <= nums[i] + i) {
                if (nums[j] + j > maxJump) {
                    maxJump = nums[j] + j;
                    position = j;
                }
                j++;
            }

            jumps++;
        }

        return jumps;
    }
};
