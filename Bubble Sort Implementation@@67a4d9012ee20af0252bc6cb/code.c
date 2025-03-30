int bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; i++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = temp;
                arr[j] = arr[i];
            }
        }
    }

    return arr;
}

