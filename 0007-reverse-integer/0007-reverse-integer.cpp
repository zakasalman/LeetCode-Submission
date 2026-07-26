class Solution {
public:
    int reverse(int x) {
    // using long long to handle overflow during calculation
        long long res = 0 ;
        while(x != 0){
            int digit = x % 10 ;
            res  = res * 10 +  digit ;
            x = x / 10 ;
        }
    //  check 32 bit signed integer
        if(res > INT_MAX || res < INT_MIN) return 0 ; 
        return (int)res ;
    }
};