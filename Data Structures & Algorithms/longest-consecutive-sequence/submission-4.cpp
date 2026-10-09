class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int maxi = 1;
        sort(nums.begin(), nums.end());
        if(n==0){
            return 0;
        }
        for(int i = 1; i<n; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] - nums[i-1] == 1){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(count, maxi);
        }
        return maxi;
    }
};
