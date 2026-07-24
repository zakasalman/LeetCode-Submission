    class Solution {
    public:
        int rev(int n){
            int r = 0 ;
            while(n > 0){
                r *= 10 ;
                r += (n % 10) ; 
                n /= 10 ;
            }
            return r ;
        }
        int countNicePairs(vector<int>& nums) {
            int n = nums.size() ;
            long long count = 0 ;
            const int MOD = 1000000007 ;
            unordered_map<int , long long> m ;
            for(int i = 0 ; i < n ; i++){
                nums[i] = nums[i] - rev(nums[i]) ;
            }
            
            for(int i = 0 ; i < n ; i++){
                if(m.find(nums[i]) != m.end()){
                    count =  (count +  m[nums[i]]) % MOD ;
                    m[nums[i]] ++ ;
                }
                else{
                    m[nums[i]] ++ ;
                }
            }

            return (int)count;
        }
    };