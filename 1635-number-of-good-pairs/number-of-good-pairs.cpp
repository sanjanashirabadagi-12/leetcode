class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto a : nums) {
            mp[a]++;
        }
        int ans = 0;
        for(auto a : mp) {
            int f = a.second - 1;
            ans += (f * (f + 1)/2);
        }
        return ans;
    }
        

};