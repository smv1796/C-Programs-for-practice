#include<iostream>
#include<bits/stdc++.h>
#include<hashtable.h>
#include<initializer_list>

using namespace std;

int main()
{
    unordered_map<char, string> day={{'M',"Monday"},{'S', "Sunday"}};

    auto a=day.begin();
     cout<<day['S'];
     cout<<"\n"<<day['M'];
    day.clear();

   cout<<"\n"<<day['S'];
    cout<<"\n"<<day['M'];
    day['S']="Sunday";
    day['T']="Tuesday";
    day['W']="Wednesday";
    day['M']="Monday";

    for(auto a=day.begin();a!=day.end();++a)
        cout<<a->first<<" "<<a->second<<"\n";

     for(auto a=day.begin();a!=day.end();++a)
        cout<<a->first<<" "<<a->second<<"\n";

         for(auto a=day.begin();a!=day.end();++a)
        cout<<a->first<<" "<<a->second<<"\n";
}

