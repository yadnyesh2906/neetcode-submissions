class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        vector<int>ans;
        for(int i = 0; i<n; i++){
            int count = 1;
            for(int j = i + 1; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > n/3){
               s.insert(nums[i]);
            }
        }
        for(auto x : s){
            ans.push_back(x);
        }
        return ans;
    }
};