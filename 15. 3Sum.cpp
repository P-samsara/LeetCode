class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        int n = nums.size();
        if (n < 3)
            return ret;

        sort(nums.begin(), nums.end());

        int i = 0, left = 0, right = 0, target = 0;

        for (i = 0; i < n-2; ++i)
        {
            //nums has been sorted in ascending order,if nums[i]>0, there are must not such triplets in the rear
            //thanks for lxyscls's advice
            if (nums[i] > 0)
                break;

            if (i != 0 && nums[i] == nums[i-1])
                continue;

            target = 0 - nums[i];
            left = i + 1;
            right = n - 1;

            while (left < right)
            {
                if (nums[right] < 0)
                    break;

                if ((nums[left] + nums[right]) == target)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    ret.push_back(temp);

                    while (left < right && nums[left+1] == nums[left])
                        ++left;
                    while (left < right && nums[right-1] == nums[right])
                        --right;

                    ++left;
                    --right;
                }
                else if ((nums[left] + nums[right]) < target)
                    ++left;
                else
                    --right;
            }
        }

        return ret;
    }
};