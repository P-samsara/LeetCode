class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0)
            return 0;
        if(height.size()==1)
            return 0;
        int old = 0;
        for(int i = 0; i < height.size(); i++)
        {
            old += height[i];
        }
        for(int i = 0; i < height.size()-1; i++)
        {
            for(int j = i+1; j < height.size(); j++)
            {
                if(height[j] >= height[i])
                {
                    for(int k = i; k<j; k++)
                    {
                        height[k] = height[i];
                        cout << k << " " << height[k] << endl;
                    }
                    i = j-1;
                    break;
                }
            }
        }
        
        int ff = 0;
        for(int i = 0; i < height.size(); i++)
        {
            ff += height[i];
        }
        cout << ff;
        
        for(int i = height.size()-1; i > 0; i --)
        {
            for(int j = i-1; j >= 0; j --)
            {
                if(height[j] >= height[i])
                {
                    for(int k = i; k>j; k--)
                    {
                        height[k] = height[i];
                    }
                    i = j+1;
                    break;
                }
            }
        }
        int result = 0;
        for(int i = 0; i < height.size(); i++)
        {
            result += height[i];
        }
        return result-old;
    }
};