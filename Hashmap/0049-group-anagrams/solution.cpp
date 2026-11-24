class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string s : strs){
            string a = s;
            sort(a.begin(),a.end());
            map[a].push_back(s);
        }
        vector<vector<string>> resultado;
        for(auto grupo : map){
            resultado.push_back(grupo.second);
        }
        return resultado;
    }
};
