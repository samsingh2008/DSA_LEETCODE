class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>temp;
        int n=nums.size();
        int c1=0,c2=0;
        int el1,el2;
        for(int i=0;i<n;i++){
            if(c1==0 && nums[i]!=el2){
                el1=nums[i];
                c1++;
            }else if(c2==0 && nums[i]!=el1){
                el2=nums[i];
                c2++;
            }else if(nums[i]==el1){
                c1++;
            }else if(nums[i]==el2){
                c2++;
            }else{
                c1--,c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1){
                c1++;
            }else if(nums[i]==el2){
                c2++;
            }
        }
        if(c1>n/3) temp.push_back(el1);
        if(c2>n/3) temp.push_back(el2);
        return temp;
        
    }
};