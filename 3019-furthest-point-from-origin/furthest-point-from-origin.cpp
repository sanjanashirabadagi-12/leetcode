class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count = 0;
        int left = 0; 
        int right = 0;
        for(int i = 0; i < moves.size(); i++) {
            if(moves[i] == 'L') {
                left++;
            }
            else if(moves[i] == 'R') {
                right++;

            }
            else {
                count++;
            }
        }
        return abs(left - right) + count;
       


        
    }
};