class Solution {
public:
    bool checkIfPangram(string sentence) {
       bool freq[26] = {false};
       for(int i =0; i < sentence.size(); i++) {
        freq[sentence[i] - 'a'] = true;
       }
       bool isTrue = true;
       for(int i = 0; i < 26; i++) {
        if(freq[i] == false) {
            isTrue = false;
            break;
        }

       }
       if(isTrue) return true;
       else return false;



        
    }
};