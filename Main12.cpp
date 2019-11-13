
#include <iostream>

using namespace std;

void input(int& n, int* array) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
}
void output(int result) {
	cout << result;
}
void findMax(int n, int* array) {
	int tempSum = 0;
	for (int i = 0; i < n; i++) {
		bool checkAfter = array[i] > array[i + 1] ;
		bool checkPrevious = array[i] > array[i - 1] ;
		if (checkAfter && checkPrevious) {
			tempSum += array[i];
		}
	}
	output(tempSum);
}
int main()
{
	int n; 
	int array[1000];
	input(n, array);
	findMax(n, array);
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
