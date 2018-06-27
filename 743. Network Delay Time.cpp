class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        int ** graph = new int *[N];
        for(int i = 0; i < N; i++){
        	graph[i] = new int[N];
        }
        for(int i = 0; i < N; i++){
        	for(int j = 0; j < N; j++){
        		graph[i][j] = i == j ? 0 : 600000;
        	}
        }
        // for(int i = 0; i < N; i++){
        //     for(int j = 0; j < N; j++){
        //         cout << graph[i][j] << " " ;
        //     }
        //     cout << endl;
        // }
        // cout << "fuc" << endl;
        for(int i = 0; i < times.size(); i++){
        	graph[times[i][0]-1][times[i][1]-1] = times[i][2];
        }	
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << graph[i][j] << " " ;
            }
            cout << endl;
        }
cout << "----------------------" << endl;
        bool flag = 1;
        while(flag){
            flag = 0;
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(j == i) continue;
                    for(int k = 0; k < N; k++){
                        if((k==i)||(k==j)) continue; 
                        if((graph[i][j] > (graph[i][k] + graph[k][j])) ){
                            graph[i][j] = (graph[i][k] + graph[k][j]);
                           
                            flag = 1;
                        }
                    }
                }
            }
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << graph[i][j] << " " ;
            }
            cout << endl;
        }
        cout << "----------------------" << endl;
        int result = 0;
        for(int i = 0; i < N; i++){
                result = result > graph[K-1][i] ? result : graph[K-1][i];
                cout << graph[K-1][i] ;
        }

        for(int i = 0; i < N; i++){
        	delete[] graph[i];
        }                
        delete[] graph;
   		return result == 600000 ? -1 : result;
    }
};