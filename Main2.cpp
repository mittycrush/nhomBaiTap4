

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void input(vector <int> &A, int n) {
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}
}
void output(vector <int> A, int n) {
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}
void quickSort(vector <int> &A, int low, int top) {
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
		}
		if (low > j)
			quickSort(A, low, j);
		if (top < i)
			quickSort(A, i, top);
	}
}
int main() {
	int nA, nB;
	cin >> nA>> nB;
	vector <int> A1 , A2;
	input(A1, nA);
	input(A2, nB);
	//chèn vector2 vào vector1
	A1.insert(A1.end(), A2.begin(), A2.end());
	// xuất vector khi đã chèn
	output(A1,A1.size()-1);
	//quickSort(A1, 0, A1.size()-1);
	//Sắp xếp vector 
	sort(A1.begin(), A1.end());
	output(A1, A1.size()-1);
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
