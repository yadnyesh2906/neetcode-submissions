class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n = nums.size();
      set<vector<int>> s;
      vector<vector<int>> ans;
      sort(nums.begin(), nums.end());
      for(int i = 0; i<n-3; i++){
        for(int j = i + 1; j<n-2; j++){
            int k = j + 1;
            int  p = n - 1;

            while(k<p){
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[p]; 
              if (sum < target){
                k++;
            }
            else if(sum> target){
                p--;
            }
            else{
               vector<int> temp = {nums[i], nums[j], nums[k], nums[p]};
               s.insert(temp);
               k++;
            p--;
            }
            
            }
            
        }
      }  
      for(auto x : s){
        ans.push_back(x);
      }
      return ans;
    }
};