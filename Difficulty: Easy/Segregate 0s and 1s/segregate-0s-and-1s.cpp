// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        // O
        int N = arr.size();
        int count = 0;
        for(int i=0;i<N;i++){
            if(arr[i]==1){
                count++;
                arr[i]=0;
            }
        }
        for(int i=N-1;i>N-1-count;i--){
            arr[i] = 1;
        }
    }
};