class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int i = 0;
        int j = 0;
        int N = arr.size();
        
        
        int sum = arr[j];
        int count = 0;
        int mincount = INT_MAX;
        
        while(i<=j && j!=N){
            
            if(sum<=x){
                j++;
                if(j==N){
                    break;
                }
                sum += arr[j];
            }else{
                count = j-i+1;
                if(count<mincount){
                    mincount = count;
                }
                sum -= arr[i];
                i++;
                if(i==N){
                    break;
                }
                if(i>j && i<N){
                    j++;
                    if(j==N){
                        break;
                    }
                    sum += arr[j];
                }
            }
            
        }
        if(mincount== INT_MAX){
            return 0;
        }
        return mincount;
    }
};