class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowCount = matrix.size();
        int colCount = matrix[0].size();
        int topBoundary = 0;
        int bottomBoundary = rowCount - 1;
        int leftBoundary = 0;
        int rightBoundary = colCount - 1;
        vector<int> result;
        
        while (topBoundary <= bottomBoundary && leftBoundary <= rightBoundary) {
            for (int i = leftBoundary; i <= rightBoundary; i++) {
                result.push_back(matrix[topBoundary][i]);
            }
            topBoundary++;
            
            for (int i = topBoundary; i <= bottomBoundary; i++) {
                result.push_back(matrix[i][rightBoundary]);
            }
            rightBoundary--;
            
            if (topBoundary <= bottomBoundary) {
                for (int i = rightBoundary; i >= leftBoundary; i--) {
                    result.push_back(matrix[bottomBoundary][i]);
                }
                bottomBoundary--;
            }
            
            if (leftBoundary <= rightBoundary) {
                for (int i = bottomBoundary; i >= topBoundary; i--) {
                    result.push_back(matrix[i][leftBoundary]);
                }
                leftBoundary++;
            }
        }
        
        return result;
    }
};
