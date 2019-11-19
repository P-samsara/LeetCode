class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        return A[A.size()-1] - A[0] - 2*K > 0 ? A[A.size()-1] - A[0] - 2*K : 0;
    }
};