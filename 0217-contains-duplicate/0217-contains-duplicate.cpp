class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // using unordered set 
        unordered_set<int> s ;
        int n  = nums.size() ;
        for(int num : nums){
            if(s.count(num) > 0){
                return true ;
            }
            s.insert(num) ;
        }
        return false ;
    }
};