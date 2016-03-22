class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m.insert(pair<int,int>(nums[i],i));
        }
        map<int,int>::iterator itm;
        for(int i = 0; i < nums.size(); i++)
        {
            if((itm = m.find(target-nums[i]))!=m.end())
            {
                if(itm->second == i)
                continue;
                else
                {
                    result.push_back(i);
                    result.push_back(itm->second);
                    return result;
                }
            }
        }
    }
};