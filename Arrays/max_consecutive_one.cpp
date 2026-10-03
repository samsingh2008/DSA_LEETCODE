// LeetCode 485 - Max Consecutive Ones
// Approach: Linear Scan
// Time: O(n)
// Space: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxi=max(count,maxi);
            
            }
            else{
                count=0;
            }
        }
        return maxi;
    }
};