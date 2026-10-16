class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n-2; i++){
            int j = i + 1;
        int k = n-1;
           while(j<k){
            if(nums[i] + nums[j] + nums[k] < 0){
                j++;
            }
            else if(nums[i] + nums[j] + nums[k] > 0){
                k--;
            }
            else{
               vector<int> temp = {nums[i], nums[j], nums[k]};
               sort(temp.begin(), temp.end());
               s.insert(temp);
               j++;
            k--;
            }
            
        }
        }
        for(auto x : s){
            ans.push_back(x);
                    }
        
        return ans;
    }
};
