#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, k;
    cin>>n>>q;
    vector <int> a[n];
    for(int i=0; i<n; i++)
    {
        cin>>k;
        int nn;
        for(int j=0; j<k; j++)
        {
            cin>>nn;
            a[i].push_back(nn);
        }
    }
    for(int p=0; p<q; p++)
    {
        int i;
        int j;
        cin>>i>>j;
        int counter = 0;
        for (auto it = a[i].begin(); it != a[i].end(); it++)
        { 
            if(counter == j)
            { 
                cout << *it <<endl;
            }
            counter++;
        }
    }
    
    return 0;
}
