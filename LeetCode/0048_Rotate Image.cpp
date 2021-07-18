class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int left=0,right=matrix.size()-1;
        while(left<right){
            for(int i=0;i<(right-left);i++){
                swap(matrix[left][left+i],matrix[left+i][right]);
                swap(matrix[left][left+i],matrix[right][right-i]);
                swap(matrix[left][left+i],matrix[right-i][left]);
            }
           left++;
           right--;
        }
    }
};
