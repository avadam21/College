#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[], int s, int l){
	int piviot = arr[l];
	int i = s;
	for(int j = s; j < l; j++){
		if(arr[j] < piviot){
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i],&arr[l]);
	return i;
}
int rPartition(int arr[], int s, int l){
	int n = l - s + 1;
	int r = rand()%n;
	swap(&arr[s+r], &arr[l]);
	return partition(arr, s, l);
}
void quickSort(int arr[], int s, int l){
	int piviot;
	if(s < l){
		piviot = rPartition(arr, s, l);
		quickSort(arr, s, piviot - 1);
		quickSort(arr, piviot + 1, l);
	}
}

int main(){
	int arr[] = {1, 2, 3, 5, 4, 6};
	quickSort(arr, 0, 5);
	for(int i = 0; i < 6; i++){
		cout << arr[i] << endl;
	}
	return 0;
}
