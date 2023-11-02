// inputing, outputing ,new ways to output vectors, pop_back, swap, sort, prefix-sum, 2d vector, sum  ofvectors
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#define It vector<int>::iterator

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1); // adding element in vector
    v.push_back(2); // adding element in vector
    v.push_back(3); // adding element in vector

    //simple way printing
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;

    //New way(iterator) method
    It it; // pointer
    for(it = v.begin(); it != v.end(); it++) cout << *it << endl;


    // pop_back function
    v.pop_back(); // remove last element form vector

    // accumulate function
    int sum = accumulate(v.begin(), v.end(),0); // v.begin() first element, .end -> last elememt. use <numeric>

    //max/min function
    int mx = *max_element(v.begin(),v.end()); // max element
    int mn = *min_element(v.begin(),v.end()); // min element

    // prefix sum (commulative frequency)
    partial_sum(v.begin(),v.end(), v.begin());

    //itreator for 2d vector
    vector<vector<int> >::iterator it2;

    // 2d vector
    int m = 2,s=5;
    vector< vector<int> > vec(m,vector<int>(s,0));
    //swap,sort -> use <alogrithm>

    //Matrix
    vector<vector<int> > matrix;
    int ncol,nrow;
    cin >> nrow >> ncol;
    // Inputing matrix
    for(int i=0; i<nrow; i++) {
        vector<int> row;
        for(int j=0; j<ncol; j++) {
            int ele;
            cin >> ele;
            row.push_back(ele);
        }
        matrix.push_back(row);
    }
    // displaying matrix
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}