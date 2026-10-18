class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int n = nums.size();
     vector<int> ans;
     map <int, int> m;
     int count = n+1;
     for(int i = 0; i<n; i++){
        int currsum  = 0;
        int currcount = 0;
        for(int j = i; j<n; j++){
          currsum = currsum + nums[j];
          if(currsum >= target){
            currcount = j-i+1;
            count = min(count, currcount);
            break;
          }
        
        }
     }
     if(count == n+1){
        return 0;
     }
       
       return count;
    }
};