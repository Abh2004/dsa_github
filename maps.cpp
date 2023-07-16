#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << "size = " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[2] = "cdc";
    m[5] = "def";
    m.insert({4, "fuck"});

    // to find element
    auto it = m.find(7);
    if (it == m.end())
    {
        cout << "No value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    //  m.erase(4);

    print(m);
}