//DIFFICULTY : BASIC

//Given an array, arr of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.

//https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // x: element to be searched for
    int search(vector<int>& arr, int x) {
        // Loop through the array
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                return i;  // Return the index of first occurrence
            }
        }
        return -1;  // Return -1 if x is not found
    }
};