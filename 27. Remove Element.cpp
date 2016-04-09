class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it = nums.begin();
        int result = nums.size();
        if(result == 0)
            return 0;
        while(it != nums.end() )
        {
            if(*it == val)
            {
                result -- ;
                it = nums.erase(it);
            }
            else{
                it++;
            }
        }
        return result;
    }
};