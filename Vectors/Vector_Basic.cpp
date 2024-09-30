#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    //Declare vector
    // vector<int>v;
    // vector<int>v1(5,1);
    
    // //size and capacity of vector
    // cout<<"Size of v : "<<v.size()<<endl;
    // cout<<"Capacity of v : "<<v.capacity()<<endl;
    // v.push_back(12);
    // v.push_back(4);
    // v.push_back(56);
    // cout<<"Size of v : "<<v.size()<<endl;
    // cout<<"Capacity of v : "<<v.capacity()<<endl;

    
    // v1.push_back(53);
    // cout<<"Size of v1 : "<<v1.size()<<endl;
    // cout<<"Capacity of v1 : "<<v1.capacity()<<endl;

    //Deleting element from vector
    // vector<int>v3;
    // v3.push_back(67);
    // v3.push_back(4);
    // v3.push_back(98);
    // v3.push_back(12);
    // v3.push_back(77);
    // v3.pop_back();
    // cout<<"Size of v3 : "<<v3.size()<<endl;
    // cout<<"Capacity of v3 : "<<v3.capacity()<<endl;

    //Inserting element in vector
    // vector<int>v3;
    // v3.push_back(67);
    // v3.push_back(4);
    // v3.push_back(98);
    // v3.push_back(12);
    // v3.push_back(77);
    // v3[2] = 45; //changing value
    // v3.insert(v3.begin()+4,13);
    // for(int i=0;i<v3.size();i++)
    // cout<<v3[i]<<" ";

    
    // vector<int>v3;
    // v3.push_back(67);
    // v3.push_back(4);
    // v3.push_back(98);
    // v3.push_back(12);
    // v3.push_back(77);

    // //copy value of 1 vector to another
    // vector<int>arr;
    // arr = v3;

    // cout<<"Size of arr : "<<arr.size()<<endl;

    // //Another way of printing elements of vector
    // for(auto i : arr)
    // cout<<i<<endl;


    
    vector<int>v3;
    v3.push_back(67);
    v3.push_back(4);
    v3.push_back(4);
    v3.push_back(12);
    v3.push_back(77);

    //Sort in increasing order
    // sort(v3.begin(),v3.end());
    // // for(auto i : v3)
    // // cout<<i<<endl;

    // //Sort in decreasing order
    // // sort(v3.begin(),v3.end(),greater<int>());
    // // sort(v3.rbegin(),v3.rend());
    // // for(auto i : v3)
    // // cout<<i<<endl;

    // // search in binary search
    // cout<<binary_search(v3.begin(),v3.end(),77)<<endl;

    // //Find index
    // cout<<find(v3.begin(),v3.end(),77) - v3.begin()<<endl;

    // //count number of occurence of elements
    // cout<<count(v3.begin(),v3.end(),4)<<endl;
    
    // //Max value
    // cout<<*max_element(v3.begin(),v3.end())<<endl;

    // //Min value
    // auto minimum = min_element(v3.begin(),v3.end());
    // int min_value = *minimum;
     //  cout<<min_value<<endl;
    return 0;
}