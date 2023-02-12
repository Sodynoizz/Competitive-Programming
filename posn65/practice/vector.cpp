#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for (int i=0; i<5; i++) v.emplace_back(i);
    for (auto i=v.begin(); i!=v.end(); i++) cout<<*i<<endl;
    return 0;

}