class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x: nums){
            st.insert(x);
        }
        int maxCount =0;
        for(int i=0;i<nums.size();i++){
            int count =1;
            int x = nums[i];
            if(st.find(x-1) == st.end()){
                while(st.find(x+1) != st.end()){
                    count++;
                    x++;
                }
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
