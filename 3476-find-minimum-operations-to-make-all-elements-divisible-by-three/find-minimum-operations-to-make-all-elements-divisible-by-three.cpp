class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int Operations=0;
        for(int a:nums){
            if(a%3!=0){
                Operations+=1;
            }
        }
        return Operations;

        
    }
};