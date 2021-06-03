#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    s1 = "a";
    s2 = "b";

    set<char> st;

    int vis[26] = {0};
    map<char, char> mp;


    if(s1.size() == s2.size())
    {
        int flag = 0;
        for(int i = 0; i < s2.size(); i++)
        {
            if(mp.find(s2[i]) == mp.end())
            {
                if(vis[s1[i] - 'a'] == 0)
                {
                    mp[s2[i]] = s1[i];
                    vis[s1[i] - 'a'] = 1;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if(s1[i] != mp[s2[i]])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            cout<<"False";
        }
        else
        {
            cout<<"True";
        }

    }
    else
    {
        cout<<"No";
    }
    
   return 0;
}