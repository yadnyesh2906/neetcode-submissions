class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i<j){
            int height = min(heights[i], heights[j]);
                int width = j - i;
                int volume = height * width;
                ans = max(ans, volume);
                if(heights[i] < heights[j]){
                  i++;
                }
                else{
                  j--;
                }
                
        }

        return ans;
    }
};
