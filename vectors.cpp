#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    for(int i = 0 ; i<v.size() ; i++ )
    {
        cout<<v[i]<< " " ;
    }
}
int main(){
    vector <int> v;
    for (int i = 0 ; i<5 ; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    printvec(v);
      
}