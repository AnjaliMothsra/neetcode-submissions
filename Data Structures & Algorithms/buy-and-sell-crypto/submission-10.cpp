class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //   int buy = prices[0];
    //   int maxProfit =0;
    //   for(int i=0;i<prices.size();i++){
    //     if(buy > prices[i]){
    //         buy = prices[i];
    //     }else{
    //         int profit = prices[i] - buy;
    //         maxProfit = max(maxProfit,profit); 
    //     }
    //   }
    //   return maxProfit;
      /*
      different way of expressing the logic.
      - buy stores the minimum buying price encountered so far.
      - If today's price is lower than buy, update buy.
      - Otherwise, calculate today's selling profit.
      - Update maxProfit.
      */
      //  --------- >
      int minProfit = INT_MAX;
      int maxProfit = 0;
      for(int i=0;i<prices.size();i++){
        minProfit = min(minProfit,prices[i]);
        maxProfit = max(maxProfit, prices[i] - minProfit);
      }
      return maxProfit;
    }
};
