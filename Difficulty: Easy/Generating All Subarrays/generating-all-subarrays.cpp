// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        vector <int> temp;
        vector <vector <int>> ans;
        
        int N = arr.size();
        
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                temp.clear();
                for(int k=i;k<=j;k++){
                    temp.push_back(arr[k]);
                }
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};