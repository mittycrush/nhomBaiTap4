
#include <iostream>

using namespace std;

void input(int &n, int* array) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
}
void output(int amount) {
	cout << amount;
}
int findMax(int n, int* array) {
	int max = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > max) max = array[i];
	}
	return max;
}
int countMax(int* array, int n, int max) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] == max) {
			count += 1;
		}
	}
	return count;
}
void process(int n, int* array) {
	int max = findMax(n, array);
	int count = countMax(array, n, max);
	output(count);
}
int main()
{
	int n; 
	int array[1000];
	input(n, array);
	process(n, array);
}

