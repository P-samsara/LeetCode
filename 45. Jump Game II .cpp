class Solution {
public:
    int jump(vector<int>& nums) {
        int start = 0, end = 0;
		int result = 0;
		if(nums.size()==1)
		return 0;
		while(end <= nums.size()-1)
		{
		    int s = start, e = end;
			for(int i = s; i <= e; i++)
			{
				end = end>=i+nums[i]?end:i+nums[i];
				if(end >= nums.size()-1)
				    return result+1;
				
			}
			result ++;
			if(nums[start]!=0)
				    start = start+1;

		}
		return result;
    }
};