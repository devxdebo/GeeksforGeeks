class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // Code here
        int N = matrix.size();
        int count = 2;
        
        while(count!=0){
            for(int i=0;i<N;i++){
                for(int j=0;j<i;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            for(int i=0;i<N;i++){
                int end = N-1;
                for(int j=0;j<N/2;j++){
                    swap(matrix[i][end],matrix[i][j]);
                    end--;
                }
            }
            count--;
        }
    }
};