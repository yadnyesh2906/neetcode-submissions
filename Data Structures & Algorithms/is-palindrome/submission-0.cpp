class Solution {
public:
    bool isAlpha(char ch){
        if((ch >= '0' && ch <='9') || (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ){
            return true;

        }
        return false;
    }
    bool isPalindrome(string s) {
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
        if(tolower(s[i]) != tolower(s[j])){
           return false;
        }
        i++;
        j--;
     }
     return true;
    }
    
};
