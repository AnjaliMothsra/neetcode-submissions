class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums){
            st.insert(num);
        }
        int smaller =1;
        for(int i=0;i<nums.size();i++){
            if(st.find(smaller) == st.end()){
              return smaller;
            }
            smaller++;
        }
        return smaller;
    }
};