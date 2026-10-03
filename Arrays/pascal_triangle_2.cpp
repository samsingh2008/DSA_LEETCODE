// LeetCode 119 - Pascal's Triangle II
// Approach: Generate Rows.
// Time: O(n)
// Space: O(n)

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long result=1;
        vector<int>ans;
        ans.push_back(1);
        for(int i=1;i<rowIndex+1;i++){
            result=result*(rowIndex+1-i);
            result=result/i;
            ans.push_back(result);
        }
        return ans;
    }
};