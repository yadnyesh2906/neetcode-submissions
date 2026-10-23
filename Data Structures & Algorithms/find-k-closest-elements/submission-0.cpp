class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int i = 0; 
        int j = n - 1;
        while(j-i + 1 > k){
            if(abs(arr[i] - x) > abs(arr[j] - x)){
                i++;
            }
            else{
                j--;
            }
        }
        vector<int> ans;
        for(int p = i; p<j+1; p++){
            ans.push_back(arr[p]);
        }
        return ans;
    }
};