class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> m;
        int difference;
        for(int i = 0; i<n; i++){
            difference = target - nums[i];
            if(m.find(difference) != m.end()){
                return {m[difference], i};
            }
            m[nums[i]] = i;
        }
    }    
};
