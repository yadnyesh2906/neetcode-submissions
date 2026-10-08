class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map <int, int> m;
    
        int maxi = 0;
        int ans;
        for(int i = 0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto x : m){
           if(maxi < x.second){
            maxi = x.second;
            ans = x.first;
           }
        }
        return ans;
    }
};