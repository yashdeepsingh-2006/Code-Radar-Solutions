int trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]){
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; i++){
            if (i > j){
                result[i] = j;
            }else{
                result[i] = n;
            }
        }
    }
}