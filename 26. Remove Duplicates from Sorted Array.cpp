class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int result = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i]!=nums[i-1])
                result ++;
        }
        unique(nums.begin(),nums.end());
        return result;
    }
};