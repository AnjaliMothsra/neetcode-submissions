class Solution {
public:
    void sortColors(vector<int>& nums) {
//Optimal: Dutch National Flag Algo(imp.)
        int low=0,mid=0,high = nums.size() -1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                low++;                                // ~1 traversal
                mid++;                               //TC: O(n), SC: O(1)
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

    }
};
//Counting Approach:
/*
 takes 2 passes
TC: O(2n)-> O(n), SC: O(1) 
. Traverse the array:
      Count how many time each occurs: 
      Cnt0, cnt1,cnt2;
. Fill the array:
      Write 0 from index 0 to cnt0 - 1
      Write 1 from index cnt0 to cnt0 + cnt1 - 1
      Write 2 in all remaining positions
*/