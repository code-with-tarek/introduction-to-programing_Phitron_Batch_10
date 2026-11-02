#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>num;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        num.push_back(val);
    }
    int fre;
    for(int i=0; i<n; i++)
    {
        fre[num[i]]++;
    }
}