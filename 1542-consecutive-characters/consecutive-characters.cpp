class Solution {
public:
    int maxPower(string s) {
        int c = 1;
        int m = 1;
        int n = s.size();
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                c++;    
            }
            else {
                c = 1;
            }
            m = max(m, c);
        }
        return m;    
    }
};