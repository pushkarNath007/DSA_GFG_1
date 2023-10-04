//selection sort:
/*
void selection_sort(int array[], int n){
    for(int i = 0; i < n; i++){
        //minni stores the smallest value index.
        int minni = i;
        for(int j = i+1; j < n; j++){
            if(array[j] < array[minni]){
                minni = j;
            }
        }
        swap(array[i], array[minni]);
    }
}*/