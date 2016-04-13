class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0, j = nums.size(), k;
        bool find = 0;
        while(i < j)
        {
            k = (i + j) / 2;
            if(nums[k] == target)
            {
                find = 1;
                break;
            }
            else if(nums[k] < target)
            {
                i = k + 1;
            }
            else
            {
                j = k;
            }
        }
        cout << "here" << k << endl;
        if(find == 0)
        {
            vector<int> result{-1,-1};
            return result;
        }
        else{
            int left = k, right = k;
            while(nums[left] == target)
            {
                left --;
                if (left == -1)
                    break;
            }
            while(nums[right] == target)
            {
                right ++;
                if (right == nums.size())
                    break;
            }
            vector<int> result{left+1,right-1};
            return result;
        }
    }
};