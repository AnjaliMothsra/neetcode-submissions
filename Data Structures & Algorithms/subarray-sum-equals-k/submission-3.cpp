class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        //mpp[0] = 1 represents the empty prefix before the array starts. It allows us to count subarrays that begin at index 0.
        mpp[0] =1;
        int currPrefixSum =0,count =0;
        for(int i=0;i<nums.size();i++){
            currPrefixSum += nums[i];
            int remove = currPrefixSum - k;
            if(mpp.find(remove) != mpp.end()){
                count += mpp[remove];
            }
            mpp[currPrefixSum] += 1;
        }
        return count;
    }
};
/*
At every index, if the current prefix sum is S, we need to check how many previous prefix sums equal S-k.
Every occurrence represents one valid subarray ending at the current index.
That's why we use a frequency map rather than a normal set.
*/