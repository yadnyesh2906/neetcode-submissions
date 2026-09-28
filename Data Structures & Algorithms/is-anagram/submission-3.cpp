class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        map <int, int> m1;
        map <int,int> m2;
        if(m != n){
            return false;
        }
        for(int i = 0; i<n; i++){
            m1[s[i]]++;
        }
        for(int i = 0; i<m; i++){
            m2[t[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(m1[s[i]] != m2[s[i]]){
                return false;
            }
        }
        return true;
    }
};
