#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,x;
    cout<<"enter how many close value you want (k value)"<<endl;
    cin>>k;
    cout<<"enter the number "<<endl;
    cin>>x;
    vector<int> v={5,6,7,8,9};
    unordered_multimap<int,int> m;
    int i=0;

    cout<<"displaying vector content"<<endl;
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
        m.insert(make_pair(abs(v[j]-x),v[j]));
    }
   
   priority_queue<pair<int,int>> p;

    cout<<"displaying the content of map"<<endl;

    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
        p.push(make_pair((*itr).first,(*itr).second));
    }

    while(p.size()>k)
    {
        p.pop();
    }

    cout<<"output is "<<endl;

    while(p.size()>0)
    {
        cout<<p.top().first<<" "<<p.top().second<<endl; 
        p.pop();
    }
    

    return 0;
}