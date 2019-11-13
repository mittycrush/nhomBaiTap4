#include <iostream> 

using namespace std;

void input(int& n, int intArray[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> intArray[i];
	}
}
int findSecondMax(int n, int intArray[]) {
	int max = -INT16_MAX;
	int preMax;
	for (int i = 0; i < n; i++) {
		if (intArray[i] > max) {
			preMax = max;
			max = intArray[i];
		}
	}
	return preMax;
}
int main() {
	int n;
	int intArray[1000];
	input(n, intArray);
	if (n < 2) {
		cout << " No second max";
	}
	else cout << findSecondMax(n, intArray);
}