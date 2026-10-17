class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0; 
        int maxprofit = 0;
        int i = 0;
        int j = i + 1;
        while(i<n && j<n){
           int buy = prices[i];
           if(prices[i]>prices[j]){
            i = j;
           }
           else if(prices[i] < prices[j]){
            profit = prices[j] - prices[i];
            maxprofit = max(profit, maxprofit); 
           }
           j++;
           
        }
        return maxprofit;
    }
};
