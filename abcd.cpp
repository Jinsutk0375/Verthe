// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    // Write C++ code here
    vector<int> vec={2,5,8,7,2};
    vec[2]=12;
    vec.push_back(100);
    sort(vec.begin(),vec.end());
    int n=vec.size();
    for(int i=0 ; i<n;i++){
        cout<<" "<<vec[i];
    }
    reverse(vec.begin(),vec.end());
    for(int i=0 ; i<n;i++){
        cout<<" "<<vec[i];
    }
    
    return 0;
}