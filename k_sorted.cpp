#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;//this is min heap;
    vector<int> v={6,5,3,2,8,10,9};
    vector<int> answer;
    for(int i=0;i<v.size();i++)
    {
        pq.push(v[i]);
        if(pq.size()<=3)
        {}
        else 
        {answer.push_back(pq.top());
            pq.pop();
        }
    }

    while(pq.size()!=0)
    {
        answer.push_back(pq.top());
        pq.pop();
    }

    cout<<"final sorted array is "<<endl;
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }


return 0;

}