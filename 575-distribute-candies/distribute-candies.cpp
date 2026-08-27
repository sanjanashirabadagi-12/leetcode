class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> mySet;
        for(int i = 0; i < candyType.size(); i++) {
            mySet.insert(candyType[i]);
        }
        return min(mySet.size(), candyType.size()/2);

        
    }
};