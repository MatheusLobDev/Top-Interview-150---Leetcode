class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int x = 0;
        int y = 0;
        vector<string> s;
        if(nums.size() == 1){
            s.push_back(to_string(nums[0]));
            return s;
        }
        while(y < nums.size()){
            if(y+1 == nums.size()){
                if(x != y){
                    s.push_back(to_string(nums[x])+"->"+to_string(nums[y]));
                    return s;
                }else{
                    s.push_back(to_string(nums[x]));
                    return s;
                }
            }

            if(nums[y+1] == nums[y]+1){
                y++;
            }else if(x != y){
                s.push_back(to_string(nums[x])+"->"+to_string(nums[y]));
                x = y+1;
                y = x;
            }else if(x == y){
                s.push_back(to_string(nums[x]));
                x++;
                y++;
            }
        }
        return s;
    }
};
