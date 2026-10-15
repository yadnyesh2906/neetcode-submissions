class Solution {
public:
bool isAlpha(char ch){
    if((ch >= '0' && ch<=9) || (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        return true;
}
return false;
}
bool check(string &s, int i, int j){
    while(i<j){
     if(s[i]!=s[j]){
return false;
}
i++;
j--;
    }

return true;
}
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n -1;
        while(i<j){
            if(!isAlpha(s[i])){
                i++;
                continue;
            }
            if(!isAlpha(s[j])){
                j--;
                continue;
            }
            if(s[i] != s[j]){
                return check(s, i+1, j) || check(s,i,j-1);
            }

            i++;
            j--;
        }
        return true;
    }
};