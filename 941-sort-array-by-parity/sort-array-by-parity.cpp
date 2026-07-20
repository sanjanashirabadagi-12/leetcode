class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1;
        vector<int> ans(n,0);
        for(int c = 0; c < n; c++) {
            if(nums[c] % 2 == 0) {
                ans[i] = nums[c];
                i++;
            }
            else {
                ans[j] = nums[c];
                j--;
            }
            
        }
        return ans;

        
        
            
        
            
        
        
    }
};