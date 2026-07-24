class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> frq ;
        for(int i : nums) frq[i] ++ ;
        for(auto &p : frq){
            if(p.second != 1) return true ;
        }
        return false ;
    }
};