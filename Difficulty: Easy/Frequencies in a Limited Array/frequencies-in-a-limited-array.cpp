class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int N = arr.size();
        vector <int> hash(N,0);
        
        for(int i=0;i<N;i++){
            hash[arr[i]-1]++;
        }
        
        return hash;
    }
};
