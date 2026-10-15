class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        int k = 0;
        for(int i = 0; i<n; i++){
            s.insert(nums[i]);
        }
        for(auto x : s){
            nums[k] = x;
            k++;
        }
    return k;
    }
};