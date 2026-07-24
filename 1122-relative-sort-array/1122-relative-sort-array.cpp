class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int , int > frq ;
        vector<int> ans ;
        for(auto i : arr1){
            frq[i] ++ ;
        }
        for(auto i : arr2){
            while(frq[i] > 0){
                ans.push_back(i) ;
                frq[i] -- ;
            }
        }
        // time for leftovers   
        for(auto [i , j] : frq){
            while(j > 0){
                ans.push_back(i) ;
                j-- ;
            }
        }
        return ans ;
    }
};