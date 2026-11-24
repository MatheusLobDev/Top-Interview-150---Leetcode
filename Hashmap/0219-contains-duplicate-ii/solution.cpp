class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        unordered_map<int,int> volta;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) != map.end()){
                if(volta.find(nums[i]) != volta.end()){
                    map[nums[i]] = i;
                }else{
                    volta[nums[i]] = i;
                }
                if(abs(volta[nums[i]] - map[nums[i]])<= k){
                    return true;
                }
            }else{
                map[nums[i]] = i;
            }   
        }
       return false;
        
    }
};
