class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mySet;
        for(auto a : nums) {
            mySet.insert(a);
        }
        if(nums.size() == mySet.size()) {
            return false;
        }
        else {
            return true;
        }
        
    }
};