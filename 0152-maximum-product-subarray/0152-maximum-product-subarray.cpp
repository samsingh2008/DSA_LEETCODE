class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int res=1;
            for(int j=i;j<n;j++){
                res=res*nums[j];
                if(res>maxi){
                    maxi=max(res,maxi);
                }
            }
        }
        return maxi;
    }
};