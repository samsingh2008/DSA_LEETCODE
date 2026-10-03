// LeetCode 118 - Pascal's Triangle
// Approach: Generate Each Row and then print the final array or arrays.
// Time: O(n²)
// Space: O(n²)

class Solution {
public:
    vector<int> getRow(int n){
        vector<int> genRow;
        genRow.push_back(1);
        long long result=1;
        for(int i=1;i<n;i++){
            result=result*(n-i);
            result=result/i;
            genRow.push_back(result);
        }
        return genRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>finalAns;
        for(int i=1;i<=numRows;i++){
            finalAns.push_back(getRow(i));
        }
        return finalAns;
    }
};