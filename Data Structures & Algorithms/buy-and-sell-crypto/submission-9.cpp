class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy = prices[0];
      int maxProfit =0;
      for(int i=0;i<prices.size();i++){
        if(buy > prices[i]){
            buy = prices[i];
        }else{
            int profit = prices[i] - buy;
            maxProfit = max(maxProfit,profit); 
        }
      }
      return maxProfit;
    }
};
