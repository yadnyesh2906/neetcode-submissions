class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int minlen = strs[0].size();
        string ans = "";
        for(int i = 1; i<n; i++){
            minlen = min(minlen, (int)strs[i].size());
        }
        for(int i = 0; i<minlen; i++){
            for(int j = 1; j<n; j++){
               if(strs[j][i] != strs[0][i]){
                return ans;
               }
            }
            ans = ans + strs[0][i];
        }
        return ans;
    }
};