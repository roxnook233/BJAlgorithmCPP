#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void roomMake(vector<vector<int>> &vec, int k, int lastR){
    //비어 있으면 채우기
    for(int i = vec.size(); i < k+1; i++){
            vector<int> v;
            v.push_back(1);
            vec.push_back(v);
        }
    
    if(vec[0].size() < lastR){
        for(int i = vec[0].size()-1; i < lastR; i++){
            vec[0].push_back(vec[0][i] + 1);
            // cout << (vec[0][i] + 1) << endl;
        }
    }
    
    if(k > 0 && vec[k-1].size() < lastR){
        roomMake(vec, k-1, lastR);
        for(int i = vec[k].size(); i < lastR; i++){
            vec[k].push_back(vec[k][i-1] + vec[k-1][i]);
            // cout << k  << "층 옆:" <<  vec[k][i]  << "아래:" << vec[k-1][i+1] <<endl;
        }
    }
    else if(k > 0){
        //이전 항 + 아래층
        for(int i = vec[k].size(); i < lastR; i++){
            vec[k].push_back(vec[k][i-1] + vec[k-1][i]);
            // cout << k << "옆:" << vec[k][i-1] <<" 아래: "<< vec[k-1][i] << endl;
        }
            
    }
}
int main(void){
    int t, k, n;
    cin >> t;
    vector<vector<int>> v;
    vector<int> vec;
    v.push_back(vec);
    v[0].push_back(1);
    v[0].push_back(2);

    //0: 1 2 3 4 5 
    //1: 1 3 6 10 15 
    //2: 1 4 10 20 35 

    for(int i=0; i<t; i++){
        cin >> k >> n;
        roomMake(v, k, n);
        
        cout << v[k][n-1] << endl;
    }
    return 0;
}
