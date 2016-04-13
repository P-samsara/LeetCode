class Solution {
public:
    int candy(vector<int>& ratings) {
        int result = 0;
        vector<int> results;
        results.push_back(1);
        for(int i = 1; i < ratings.size(); i++)
        {
            if(ratings[i]>ratings[i-1])
                results.push_back(results[i-1]+1);
            else
                results.push_back(1);
        }
        for(int i = results.size()-2; i >= 0; i--)
        {
            if(ratings[i]>ratings[i+1] && (!(results[i]>results[i+1])))
                results[i] = results[i+1]+1;
        }
        for(int i = 0; i< results.size(); i++)
            result += results[i];
        return result;
        
    }
};