#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int count=0;
        for(auto i:grid){
            for(auto j:i){
               
                if(j<0){
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    vector<vector<int>>grid={{1,2,3,4},{2,-5,-7},{3,5,-1,7}};
    Solution s;
    cout<<"number of negative numbers are "<<s.countNegatives(grid)<<endl;
}