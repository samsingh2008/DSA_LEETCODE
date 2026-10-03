// LeetCode 169 - Majority Element
// Approach: Boyer-Moore Voting Algorithm + Verification
// Time: O(n)
// Space: O(1)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                element=nums[i];
                count++;
            }
            else if(nums[i]==element){
                count++;
            }else{
                count--;
            }
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element){
                c++;
            }
        }
        if(c>nums.size()/2){
            return element;
        }
        return -1; 
    }
};