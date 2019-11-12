class Solution {
public:
    int getMoneyAmount(int n) {
        int** DG = new int*[n+1];
        for (int i = 0; i < n+1; i++){
            DG[i] = new int[n+1];
        }
        for(int i = 0; i < n ; i++){
            DG[i][i] = 0;
            DG[i][i+1] = i;
        }
        DG[n][n] = 0;
        for(int gap = 2; gap <= n; gap ++){
            for(int i = 0; i+gap <=n; i++){
                int tmp = INT_MAX;
                for(int k = i+1; k < i+gap; k++){
                    tmp = tmp < (k + max(DG[i][k-1],DG[k+1][i+gap])) ? tmp : (k + max(DG[i][k-1],DG[k+1][i+gap]));
                }
                DG[i][i+gap] = tmp;
            }
        }
        int result = 0;
        for(int i = 0; i <= n; i++){
            for(int j = i; j <= n; j++){
                result = max(result,DG[i][j]);
            }
        }
        
        for (int i = 0; i < n+1; i++){
            delete[] DG[i];
        }
        delete[] DG;
        return result;
    }
};
//动态规划算法，k取i-j中间任意一个值，左右取最大，整体取最小；