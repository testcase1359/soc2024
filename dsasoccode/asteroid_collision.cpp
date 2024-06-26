#include<iostream>
#include<vector>
using namespace std;
vector<int>afcollision(vector<int>&asteroids){
        vector<int>v;
        for(int asteroid : asteroids){
            if(asteroid>0){
                v.push_back(asteroid);
            }
            else{
                while(!v.empty() && v.back()>0 && v.back()<-asteroid){
                    v.pop_back();
                }
                if(!v.empty() && v.back()==-asteroid){
                    v.pop_back();
                }
                else if(v.empty() || v.back()<0){
                    v.push_back(asteroid);
                }
            }
        }
        return v;
    
}
int main(){
    int n;
    cin>>n;
     vector<int> asteroids(n);
         for (int i = 0; i < n; ++i) {
        cin >> asteroids[i];
    }
    vector<int> result = afcollision(asteroids);
    for (int num : result) {
        cout << " " << num;
    }
    cout << endl;
}