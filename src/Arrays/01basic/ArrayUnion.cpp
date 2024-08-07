#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

//using set
vector<int> unSet(vector<int> &v1,vector<int> &v2)
{
    vector<int> res;
    int i = 0 ,j = 0;
    while(j<=v1.size() && i<= v2.size())
    {

    }
    return res;
}
vector<int> unOptimised(vector<int> &v1,vector<int> &v2){
    int n = v1.size();
    int m = v2.size();
    int i=0,j=0;
    vector<int> res;
    while(i<n&&j<m){
        if(v1[i] <= v2[j])
        {
            res.push_back(v1[i]);
            i++;
        } else if(v1[i]>= v2[j]){
            res.push_back(v2[j]);
            j++;
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    cout << "Enter the elements of first set : " << endl;
    for (int i = 0; i < n; i++) {
        cin>>v1[i];
    }
    cout << "Enter the elements of second set : " << endl;
    for (int i = 0; i < n; i++) {
        cin>>v2[i];
    }
    //result array
    vector<int> res;
    res = unSet(v1,v2);
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout << endl;
    return 0;
}