class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size() == 0)return 0;
     unordered_set<int> st;
     for(int num : nums){
        st.insert(num);
     }
     int maxCount = 0;
     for(int x : st){
        if(st.find(x-1) == st.end()){
            int first = x;
            int count =1;
            while(st.find(first+1) != st.end()){
                count++;
                first++;
            }
            maxCount = max(maxCount,count);
        }
     }
     return maxCount;
    }
};
