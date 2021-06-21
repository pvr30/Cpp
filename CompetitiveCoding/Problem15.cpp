///Lower Bound
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n;
    cin>>n;
    v.resize(n);
    vector<int> :: iterator it;
    for(it=v.begin();it<v.end();it++)
    {
        cin>>*it;
    }
    int q,val;
    cin>>q;
    vector<int> :: iterator low;
    for(int i=0;i<q;i++)
    {
       cin>>val;
       low=std::lower_bound(v.begin(),v.end(),val);
    if (v[low - v.begin()] == val)
           cout << "Yes " << (low -v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
    }
    return 0;
}

