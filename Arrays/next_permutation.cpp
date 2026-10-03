// LeetCode 31 - Next Permutation
// Approach: Find Breakpoint + Swap + Reverse
// Time: O(n)
// Space: O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            for(auto it:nums){
                cout<<it<<" ";
            }
            return;
        }
        for(int i=n-1;i>=index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index+1, nums.end());
        for(auto it:nums){
            cout<<it<<" ";
        }
    }
};