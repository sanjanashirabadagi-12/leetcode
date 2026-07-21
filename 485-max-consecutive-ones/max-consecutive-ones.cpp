class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int ans = 0;
        for(int num : nums) {
            if(num == 1) {
                c++;
                ans = max(ans, c);
            }
            else {
                c = 0;
            }
    
        }
        return ans;
        
        
        
    }
};