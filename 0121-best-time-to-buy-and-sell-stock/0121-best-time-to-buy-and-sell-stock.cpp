class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size() ;
        int max_profit = 0 ;
        int i = 0 ; 
        for(int j=1;j<n;j++){
            if(nums[j] < nums[i]){
                i = j ;
            }
            else{
         max_profit = max(max_profit , nums[j] - nums[i]) ;
            }
        }

        return max_profit ;
    }
};