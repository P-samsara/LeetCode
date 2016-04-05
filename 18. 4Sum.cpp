class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int haha) {
        vector<vector<int>> ret;
        int n = nums.size();
        if (n < 4)
            return ret;

        sort(nums.begin(), nums.end());
		for(int k = 0; k < n-3; k++)
		{

        int i = k+1, left = 0, right = 0, target = 0;
		if(k!=0&&nums[k]==nums[k-1])
			continue;
        for (i = k+1; i < n-2; ++i)
        {
            //nums has been sorted in ascending order,if nums[i]>0, there are must not such triplets in the rear
            //thanks for lxyscls's advice
           

            if (i != k+1 && nums[i] == nums[i-1])
                continue;

            target = haha - nums[k] - nums[i];
            left = i + 1;
            right = n - 1;

            while (left < right)
            {
              

                if ((nums[left] + nums[right]) == target)
                {
                    vector<int> temp;
					temp.push_back(nums[k]);
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
		}

        return ret;
    }
	
};