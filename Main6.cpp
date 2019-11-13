#include <iostream>
#include <vector>
using namespace std;
void input(int& n, int* data) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
}
void output(int result) {
	cout << result << " ";
}
bool findIndex(int* A, int n, int element) {
	for (int i = 0; i < n; i++) {
		if (A[i] == element) return true;
	}
	return 0;
}
void deleteElement(int* data, int n, int index) {
	for (int i = index; i < n - 1; i++) {
		data[i] = data[i + 1];
	}
}
void coutOnly(int* dataA, int* dataB, int indexA, int indexB) {

	for (int i = 0; i < indexA; i++) {
		if (!findIndex(dataB, indexB, dataA[i])) {
			output(dataA[i]);
		}
	}
}
/*void coutSameValue(int* dataA, int* dataB, int indexA, int indexB) {

}*/
int main() {
	int nA, nB;
	int dataA[1000], dataB[1000];
	input(nA, dataA);
	input(nB, dataB);
	coutOnly(dataA, dataB, nA, nB);
}
