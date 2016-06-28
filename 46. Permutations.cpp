class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		int cishu = 0; 
		vector<int> chushihua1;
		vector<vector<int>> result(1,chushihua1) ;
		//return result;
		while(cishu != nums.size()){
		    //cout << result.size() << endl;
			int r_s = result.size();
			for(int i = 0; i < r_s; i++)
			{
				for(int j = 0; j <= result[i].size();j++)
				{
					vector<int> tmp(result[i]);
					tmp.insert(tmp.begin()+j,nums[cishu]);
					result.push_back(tmp);
				}
			}
			//cout << "resultNum " << result.size() << endl;
			result.erase(result.begin(),result.begin()+r_s);
			//cout << "after_resultNum " << result.size() << endl;
			cishu ++;
		}
		return result;
	}
};
//每次给一个nums[i],在之前序列的间隔中插入。