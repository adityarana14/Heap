class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        vector<int> answer;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
        
            pq.push(arr[i]);
            if(pq.size()==k)
            {
                answer.push_back(pq.top());
                
            }
             else if(pq.size()>k)
            {
                pq.pop();
                answer.push_back(pq.top());
                
            }
            else answer.push_back(-1);
        }
        
        return answer;
        
    }
};