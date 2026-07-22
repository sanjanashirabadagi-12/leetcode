class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx = 0;
        for(int i = 0; i < sentences.size(); i++) {
            int space = 1;
            string s=sentences[i];
            for(int j = 0; j < s.size(); j++) {
                if(s[j] == ' ') {
                    space++;
                }
                
            }
            maxx = max(maxx, space);
        }
        return maxx;

        
    }
};