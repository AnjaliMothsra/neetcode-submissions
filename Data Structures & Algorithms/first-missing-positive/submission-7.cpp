class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_set<int> st;
       for(int x : nums){
        st.insert(x);
       }
       int i =1;
       while(i<= nums.size()){
        if(st.find(i) == st.end()){
            return i;
        }
        i++;
       }
    }
};