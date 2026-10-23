class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int i = 0, j= n-k-1;
        while(i<j){//reverse, first n-k element 
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        int l = n-k,r = n-1;
        while(l<r){//reverse, last k elements
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        int left =0, right = n-1;
        while(left<right){//final reversal
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};