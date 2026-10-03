// Approach: Sorting + Two Pointers
// Time: O(n log n + n^2)
// Space: O(k), where k = number of unique triplets

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i]) continue; // transfers control to the next iteration ensuring i is not the same.
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j])j++;
                    while(j<k && nums[k+1]==nums[k])k--;
                }
            }
        }
        return ans;
    }
};