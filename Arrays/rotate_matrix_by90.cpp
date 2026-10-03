// LeetCode 48 - Rotate Image

// Brute Force:
// Time: O(n²)
// Space: O(n²)

// Optimal:
// Time: O(n²)
// Space: O(1)

// ==================== BRUTE FORCE ====================

class SolutionBrute {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>ans(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=ans;
    }
};

// ==================== OPTIMAL ====================

class SolutionOptimal {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};