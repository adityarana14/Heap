#include<bits/stdc++.h>
using namespace std;

int main()
{
    //take input of 2d matrix;
    
    vector<vector<int>> v;
    int coordinate;
    int x , y, k;

    cout<<"enter the value of k (number of closest point you need from origin)"<<endl;
    cin>>k;
    cout<<"enter how many cordinate you want to enter"<<endl;
    cin>>coordinate;
    for(int i=0;i<coordinate;i++)
    {
        cout<<"enter the x and y cordinate by giving space"<<endl;
        cin>>x>>y;
        v.push_back({x,y});
    }
cout<<"entered data"<<endl;
    for(int i=0;i<coordinate;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    //now distance should be minimum
    //So will be making max heap.
    priority_queue<pair<int,pair<int,int>>> pq;



    for(int i=0;i<coordinate;i++)
    {
        pq.push(make_pair(pow(v[i][0],2)+pow(v[i][1],2),make_pair(v[i][0],v[i][1])));
        if(pq.size()>k)
        pq.pop();

    }

    cout<<"displaying the coordinate which are close to the origin.";

    while(pq.size()!=0)
    {
        cout<<pq.top().second.first<<" "<<pq.top().second.second<<" and the distance is "<<pq.top().first<<endl;
        pq.pop();
    }

return 0;
}