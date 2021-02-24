#include<iostream>
using namespace std;

int main(){
	int i, j;
	int n = 5;
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++)
			cout << " ";
		int k = i + 1;
		for(j = 0; j < i + 1; j++)
			cout << k - j << " ";
	cout << endl;
	}
	return 0;
}
