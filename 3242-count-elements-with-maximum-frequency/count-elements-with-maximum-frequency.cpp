class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans1 = 0, ans2 = 0;
        for(auto a : nums) {
            mp[a]++;
        }
        for(auto a : mp) {
            ans1 = max(a.second, ans1);
        }
        for(auto a : mp) {
            if(a.second == ans1) {
                ans2+= a.second;
            }
        }
        return ans2;
        
    }
};