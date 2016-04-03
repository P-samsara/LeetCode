class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
		int result = 0;
		int tmp = 0;
		while(i < j)
		{
			tmp = (j-i)*((height[i]<height[j])?height[i++]:height[j--]);
			if (tmp > result)
				result = tmp;
		}
		return result;
    }
};