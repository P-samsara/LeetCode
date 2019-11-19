//以Nums[i]结尾的子序列

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int begin = 0;
        int pro = 1;
        int result = 0;
        if(k<=1) return result;
        for(int end = 0; end < n; end ++){
            pro *= nums[end];
            while(pro >= k){
                pro /= nums[begin];
                begin ++;
            }
            result += end - begin + 1;
        }

        return result;
    }
};
