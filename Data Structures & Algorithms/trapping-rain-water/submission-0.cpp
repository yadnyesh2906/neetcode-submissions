class Solution {
public:
    int trap(vector<int>& nums) {
       int n = nums.size();
       vector<int> leftgreater(n);
       vector<int> rightgreater(n);
       int leftindex = nums[0];
       int rightindex = nums[n-1];
       for(int i = 0; i<n; i++){
        leftindex = max(leftindex, nums[i]);
        leftgreater[i] = leftindex;
       }
       for(int j = n-1; j>=0; j--){
        rightindex = max(rightindex, nums[j]);
        rightgreater[j] = rightindex;
       }
       int water = 0;
       for(int i = 0; i<n; i++){
        water += min(leftgreater[i], rightgreater[i]) - nums[i];
       }

        return water;
    }
};
