class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int>ans;
        vector<int> num;
        for(int i = 0; i < nums.size(); i++) {
            ans[nums[i]]++;
        }
        for(auto a :  ans) {
            if(a.second > 1) {
                num.push_back(a.first);
            }
        }
        return num;
    }

    
};