class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int i = 0, j= n-k-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        int l = n-k,r = n-1;
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        int left =0, right = n-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};