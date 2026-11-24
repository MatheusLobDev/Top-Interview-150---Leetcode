class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int it;
        int longest = 0;
        int act = 0;
        for(int num : s){
            it = num+1;
            act = 1;
            if(s.find(num-1) == s.end()){
                while(s.find(it) != s.end()){
                    it++;
                    act++;
                }
                if(act > longest){
                    longest = act;
                }

            }
            
        }
        return longest;
        
    }
};
