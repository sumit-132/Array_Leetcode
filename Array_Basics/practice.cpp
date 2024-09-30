#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int>v;
    v.push_back(23);
    v.push_back(93);
    v.push_back(29);
    v.push_back(3);
    v.push_back(19);
    
    // v.erase(v.begin()+1);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;

    // for(int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";

    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;

    // for(auto i=v.begin();i != v.end();i++)
    // cout<<*i<<" ";

    // for(auto i : v)
    // cout<<i<<" ";

    // sort(v.begin(),v.end());
    // cout<<binary_search(v.begin(),v.end(),29)<<endl;
    // cout<<find(v.begin(),v.end(),29) - v.begin()<<endl;

    //cout<<count(v.begin(),v.end(),29);

    // cout<<*min_element(v.begin(),v.end())<<endl;
    // auto maximum = min_element(v.begin(),v.end());
    // int max_value = *maximum;
    // cout<<max_value;
    return 0;
}