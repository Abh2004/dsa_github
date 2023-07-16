#include<bits/stdc++.h>
using namespace std;
//range based

int main(){
vector<pair<int,int>> vp= {{1,2},{2,3}};
for(auto &value : vp)
{
    cout<<value.first << " "<<value.second << endl;
}
cout<<"using auto "<<endl;

//auto automatically identify data type
for(auto it = vp.begin() ; it!= vp.end() ; ++it)
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
}