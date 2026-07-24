class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        // using unordered_set ;
        unordered_set<string> s ;
        int count = 0 ;
        int n = words.size() ;

       for(int i = 0 ; i < n ; i++){
        string rev = words[i] ;
        reverse(rev.begin() , rev.end()) ;
        if(s.find(rev) != s.end()) {
            count ++  ; 
        }
        else{
            s.insert(words[i]) ;
        }
       }
       return count ;
    }
};