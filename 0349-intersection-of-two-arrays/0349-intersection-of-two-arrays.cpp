class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]==nums2[j]){
                st.insert(nums1[i]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};