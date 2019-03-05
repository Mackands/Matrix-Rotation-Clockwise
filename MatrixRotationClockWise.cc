#include <bits/stdc++.h> 
using namespace std; 

#define N 4 

// Fungsi untuk merotasi matrix 90 derajat searah jarum jam
void rotasi(int a[N][N]) 
{ 

	// perputaran matrix(memindah matrix)
	for (int i = 0; i < N / 2; i++) { 
		for (int j = i; j < N - i - 1; j++) { 

			// memindahkan isi tiap matrix searah jarum jam
			int temp = a[i][j]; 
			a[i][j] = a[N - 1 - j][i]; 
			a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j]; 
			a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i]; 
			a[j][N - 1 - i] = temp; 
		} 
	} 
} 

// Fungsi mencetak matrix
void cetak(int arr[N][N]) 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			cout << arr[i][j] << " "; 
		cout << '\n'; 
	} 
} 

int main() 
{ 
	int arr[N][N] = { { 1, 2, 3, 4 }, 
					{ 5, 6, 7, 8 }, 
					{ 9, 10, 11, 12 }, 
					{ 13, 14, 15, 16 } }; 
	rotasi(arr); 
	cetak(arr); 
	return 0; 
} 

