class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        if(n==0) return 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            int cnt=1;
            if(st.find(it-1)==st.end()){
                int x=it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x=x+1;
                }
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};