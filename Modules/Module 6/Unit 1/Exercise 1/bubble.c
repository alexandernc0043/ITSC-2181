void bubble_sort(int list[], int n){
	int i,j,t;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(list[j] > list[j+1]){
				t = list [j];
				list[j] = list[j+1];
				list[j+1] = t;
			}
		}
	}
}