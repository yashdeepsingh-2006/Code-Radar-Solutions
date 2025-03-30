int isPrime(int num){
    int n = num/2;
    for (int i = 0; i<n; i++){
        if (i % num == 0){
            return 1;
        }else{
            return 0;
        }
    }
}