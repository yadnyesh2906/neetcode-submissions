class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        vector<int> ans;
        for(int i = 0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            if(x.second > n/3){
               ans.push_back(x.first);
            }
        }
        return ans;
    }
};