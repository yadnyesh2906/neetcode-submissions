class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        set<char> ans;
        int count = 0;
        while(i<n && j<n){
            if(ans.find(s[j]) != ans.end()){
                ans.erase(s[i]);
                i++;
                
            }
            else{
               ans.insert(s[j]);
               count = max(count, (int)ans.size());
            j++;
            
            }
           
        }
        
        return count;
    }
};
