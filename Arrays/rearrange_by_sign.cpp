// LeetCode 2149 - Rearrange Array Elements by Sign
// Approach:Index Placement
// Time: O(n)
// Space: O(n)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int posId=0;
        int negId=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[posId]=nums[i];
                posId+=2;
            }else{
                ans[negId]=nums[i];
                negId+=2;
            }
        }
        return ans;
    }
};