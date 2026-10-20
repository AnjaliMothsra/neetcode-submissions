class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      int count =1;
      int i=0, j= 1;
      while(i<n && j<n){
        if(nums[i] < nums[j]){
            nums[i+1] = nums[j];
            i++;
            count++;
        }
        j++;
      }
      return count;
    }     
};