#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     //we have to make min heap 
     vector<int> v={1,2,3,4,5};
     //in this question vlaue in the vector represent the length of the rope 
     // respective lengths represents similar price for eg, length of 3 units costs 3 unit only.
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int i=0;i<v.size();i++)
        {
            pq.push(v[i]);
        }
int cost=0;
        while(pq.size()!=0)
        {
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            int sum=first+second;
            
            cost=cost+sum;
            if(pq.size()!=0)
            pq.push(sum);
        }


        cout<<"minimum cost is "<<cost<<endl;



     return 0;
 }