class Solution {
public:
    int hIndex(vector<int>& citations) {
        int hindex = 0;
        int quantidade,candidato;
        if(citations.size() == 1){
            if(citations[0] == 0){
                return 0;
            }
            return 1;
        }
        sort(citations.begin(),citations.end());
        for(int i = 0; i < citations.size();i++){
            quantidade = citations.size()-i;
            candidato = min(quantidade, citations[i]);
            hindex = max(hindex,candidato);
        }
        return hindex;
    }
};
