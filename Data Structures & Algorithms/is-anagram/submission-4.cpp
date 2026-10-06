class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        map <int,int> m1;
        if(n != m){
            return false;
        }
        for(int i = 0; i<n; i++){
           m1[s[i]]++;
           
        }

        for(int i = 0; i<m; i++){
            if(m1[t[i]] == 0){
                return false;
            }
            m1[t[i]]--;
        }
        return true;
    }
};
