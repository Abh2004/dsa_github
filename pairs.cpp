#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p ;
    // p = make_pair(2 , "abc");
    p = {2,"abhishek"};
    pair<int,string> &p1 = p;

    p1.first = 420 ;


    cout<<p.first<<" "<<p.second<<endl;

    pair<int , int> p_array[3];

    for(int i = 0 ; i< 3 ; i++)
    {
        cin>>p_array[i].first >> p_array[i].second;
    }

    for(int i = 0 ; i<3 ; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}