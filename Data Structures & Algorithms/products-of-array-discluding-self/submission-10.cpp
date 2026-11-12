class Solution {
public: 
    vector<int> productExceptSelf(vector<int>& nums) {
        // in - place :
        int n = nums.size();
       vector<int> ans(n);
       ans[0] = 1;
       for(int i=1;i<n;i++){
        ans[i] = ans[i-1]*nums[i-1];
       }
       int rPro = 1;
       for(int i = n-2;i >= 0;i--){ 
        rPro *= nums[i+1];
        ans[i] = ans[i]*rPro;;
       }
        // int n = nums.size();
        // int pro =1,count=0;
        // for(int i=0;i<n;i++){
        //     pro *= nums[i];
        // }
        // int pro_w_z =1;
        // for(int i=0;i<n;i++){
        //     if(nums[i] == 0){
        //         count++;
        //         continue;
        //     }else{
        //         pro_w_z *= nums[i];
        //     }
        // }
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     if(nums[i] == 0){
        //         if(count > 1){
        //             ans.push_back(0);
        //         }else{
        //             ans.push_back(pro_w_z);
        //         }
        //     }else{
        //         int temp = pro / nums[i];
        //         ans.push_back(temp);
        //     }
        // }

    //    int n= nums.size();
    //    vector<int> prefix(n);
    //    vector<int> suffix(n);
    //    prefix[0] = 1;
    //    suffix[n-1] = 1;

    //    for(int i=1;i<n;i++){
    //     prefix[i] = prefix[i-1]* nums[i-1];
    //    }
    //    for(int i= n-2;i>=0;i--){
    //     suffix[i] = suffix[i+1]* nums[i+1];
    //    }
    //    vector<int> ans;
    //    for(int i=0;i<n;i++){
    //     ans.push_back(prefix[i]* suffix[i]);
    //    }
    return ans;
    }
};