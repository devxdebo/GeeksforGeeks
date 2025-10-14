class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // code here
        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        for(int i=0;i<rowsize;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
    }
};