#include <iostream>

using namespace std;

void input(int& n, int data[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
}
void quickSort(int* A, int low, int top) {
	if (low <= top) {
		int key = A[(top + low) / 2];
		int i = low;
		int j = top;
		while (i <= j) {
			while (A[i] < key)
				i++;
			while (A[j] > key)
				j--;
			if (i <= j) {
				swap(A[i], A[j]);
				i++;
				j--;
			}
			if (top < j)
				quickSort(A, top, j);
			if (low > i)
				quickSort(A, i, low);
		}
	}
}
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
