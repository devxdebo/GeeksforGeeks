class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // code here
        int N = matrix.size();
        
        for(int i=0;i<N;i++){
            int end = N-1;
            for(int j=0;j<N/2;j++){
                swap(matrix[i][end],matrix[i][j]);
                end--;
            }
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};
