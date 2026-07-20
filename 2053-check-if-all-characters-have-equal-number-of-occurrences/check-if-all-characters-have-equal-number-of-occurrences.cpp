class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char ch : s) {
            mp[ch]++;
        } 
        int freq = mp.begin()->second;
        for(auto a : mp) {
            if(freq != a.second) {
                return false;
            }
        }
        return true;
        
            
        
        
        
    }
};