class Solution {
public:
    int wucha (int a, int b)
    {
        int c = a - b;
        return c>0 ? c:0-c;
    }
    int threeSumClosest(vector<int>& nums, int target1) {
        int n = nums.size();
        //if (n < 3)
        //    return nums;
        int error = 1000;
        sort(nums.begin(), nums.end());
        int aa, bb, cc;
        int i = 0, left = 0, right = 0, target = 0;
if(nums[0]+nums[0+1]+nums[0+2] > target1)
                return nums[0]+nums[0+1]+nums[0+2];
        for (i = 0; i < n-2; ++i)
        {
            //nums has been sorted in ascending order,if nums[i]>0, there are must not such triplets in the rear
            //thanks for lxyscls's advice
            

            if (i != 0 && nums[i] == nums[i-1])
                continue;

            target = target1 - nums[i];
            cout << "target " << target << endl;
            left = i + 1;
            right = n - 1;

            while (left < right)
            {
                if ((nums[left] + nums[right]) < target )
                {
                    if(wucha(nums[left] + nums[right],target) <= error)
                    {error = wucha(nums[left] + nums[right],target);
                    aa = i; bb = left; cc = right;}
                    ++left;
                }
                else if ((nums[left] + nums[right]) > target )
                {
                    if(wucha(nums[left] + nums[right],target) <= error)
                    {error = wucha(nums[left] + nums[right],target);
                    aa = i; bb = left; cc = right;}
                    --right;
                }
                else if ((nums[left] + nums[right]) == target)
                    return target1;
                else
                    break;
            }
            
        }
        return nums[aa]+nums[bb]+nums[cc];
    }
    
};