// Pascal's Triangle I - Return Value at Given Row and Column
// Approach: Combination Formula
// Time: O(c)
// Space: O(1)

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int result=1;
        for(int i=0;i<c-1;i++){
            result=result*(r-1-i);
            result=result/(i+1);
        }
        return result;
    }
};