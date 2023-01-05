bool cmp(vector<int>&a , vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:
    //points = [[10,16],[2,8],[1,6],[7,12]]
  
//     sorting based on the last point in decreasing order using comp
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin() , p.end(), cmp);
    }
