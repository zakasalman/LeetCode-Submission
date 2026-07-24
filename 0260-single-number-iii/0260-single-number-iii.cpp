class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = 0 ; 
        // xor of all a->b ;
        for(int num : nums) diff ^= num ;
        
        // find the rightmost bit ;
        long long mask = (long long)diff & -(long long) diff ;
        int a = 0 , b = 0 ;

        for(int num : nums){
            if(num & mask) a ^= num ;
            else b ^= num ;
        }

        return {a , b } ;
    }
};