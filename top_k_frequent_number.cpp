#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,1,1,3,2,2,4};
    map<int,int> m;
    int k;
    cout<<"how many k frequent number you want from the list of array"<<endl;
    cin>>k;

    //this problem could be solved using map only also, but here we will use both heap and map. 
    //we will be using max heap.

    priority_queue<pair<int,int>> pq;

    for(int i=0;i<v.size();i++)
    {
        m.insert(make_pair(v[i],m[v[i]]++));
    } 

    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
        pq.push(make_pair((*itr).first,(*itr).second));
        if(pq.size()>k)
        {
            pq.pop();
        }

    }

    cout<<"printing the top k frequent "<<endl;

    while(pq.size()!=0)
    {
        cout<<"element: "<<pq.top().first<<"with frequent number: "<<pq.top().second<<endl;
        pq.pop();
    }

    return 0;
}