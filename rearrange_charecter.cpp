 
 
 class Solution
 {
    public:
    string rearrangeString(string str)
    {
        //code here
        map<char,int> m;
        for(int i=0;i<str.size();i++)
        {
            m[str[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            pq.push(make_pair((*itr).second,(*itr).first));
        }
        
        string answer="";
        if(pq.size()==1)
        {
            if(pq.top().first>1)
            return "-1";
            else 
            {
                answer=pq.top().second;
                return answer;
                
            } 
        }
 
 
 
 while(pq.size()>1)
        {
            int first=pq.top().first;
            char val1=pq.top().second;
            
            pq.pop();
            
            int second=pq.top().first;
            char val2=pq.top().second;
            
            pq.pop();
            
            answer=answer+val1+val2;
            
            if(first>1)
            {
                first=first-1;
                pq.push(make_pair(first,val1));
            }
            
            if(second>1)
            {
                second=second-1;
                pq.push(make_pair(second,val2));
            }
            
            if(pq.size()==1)
            {
                if(pq.top().first==1)
                {
                    answer=answer+pq.top().second;
                    pq.pop();
                }
                else answer="-1";
            }
        }
        
        return answer;
        
    }
    
};