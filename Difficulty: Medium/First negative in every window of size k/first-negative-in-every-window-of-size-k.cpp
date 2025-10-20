class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        
        int ptr1 = 0;
        int ptr2 = 0;
        
        int N = arr.size();
        
        deque <int> dq;
        vector <int> ans;
        
        while(ptr1<=ptr2 && ptr2!=N){
            
             if (arr[ptr2] < 0)
                dq.push_back(arr[ptr2]);

            if(ptr2-ptr1+1<k){
                 ptr2++;
            }else{
                if(dq.empty()==1){
                    ans.push_back(0);
                }else{
                    ans.push_back(dq.front());
                    if(dq.front()==arr[ptr1]){
                        dq.pop_front();
                    }
                }
                ptr1++;
                ptr2++;
                
            }
          
        }
        return ans;
    }
};