
#include <iostream>

using namespace std;

void input(int arr[], int& n) {
	cout << "Nhap n: "; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
int deleteElement(int* arr,int n, int position) {
	for (int i = position - 1; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	return n - 1;
}
int insertElement(int* arr, int n, int position, int value) {
	for (int i = n; i >= position; i--) {
		arr[i] = arr[i - 1];
	}
	arr[position] = value;
	//n++;
	return n+1;
}
int main()
{
	int n;
	int arr[1000];
	input(arr, n);
	int pos = insertElement(arr, n, 3,14);
	output(arr, pos);
}


