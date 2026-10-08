class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map <int, int> m;
        vector<pair<int, int>> freq;
        for(int i = 0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto x : m){
           freq.push_back({x.first, x.second});
        }
        sort(freq.begin(), freq.end(), [](auto &a, auto&b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(freq[i].first);
        }
    return ans;
        }

};
