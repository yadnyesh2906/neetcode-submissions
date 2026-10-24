class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> result;
        int ans = 0;
        for(int i = 0; i<n; i++){
           
           if(operations[i] == "+"){
            int n = result.size();
              int score = result[n-1] + result[n-2];
              result.push_back(score);
           }
           else if(operations[i] == "D"){
            int n  = result.size();
            int D = 2 * result[n-1];
            result.push_back(D); 
           }
           else if(operations[i] == "C"){
            result.pop_back();
           }
           else{
            result.push_back(stoi(operations[i]));
           }
           
        }
        for(auto x : result){
            ans = ans + x;
        }
        return ans;
    }
};