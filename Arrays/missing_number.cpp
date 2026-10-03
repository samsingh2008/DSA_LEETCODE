// LeetCode 268 - Missing Number
// Approach 1: Mathematical Sum
// Time: O(n)
// Space: O(1)

// Approach 2: XOR
// Time: O(n)
// Space: O(1)

class SolutionSum {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum= (n*n+n)/2;
        int count=0;
        for(int i=0;i<=n-1;i++){
            count+=nums[i];
        }
        int diff=sum-count;
        return diff;
    }
};

class SolutionXor {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int XOR1=0;
        int XOR2=0;
        for(int i=0;i<=n-1;i++){
            XOR2=XOR2^nums[i];
            XOR1=XOR1^i;
        }
        XOR1=XOR1^n;
        return XOR1^XOR2;
    }
};