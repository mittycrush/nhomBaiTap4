#include <iostream>

using namespace std;

void input(int& n, int metricArray[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> metricArray[i];
	}
}
void coutElement(int value) {
	cout << value << " ";
}
void process(int n, int* array) {
	for (int i = 1; i < n ; i++) {
		bool checkAfter = array[i] * array[i + 1] < 0;
		bool checkPrevious = array[i] * array[i - 1] < 0;
		if ( checkPrevious ) {
			if (i == 1) {
				coutElement(array[i - 1]);
				coutElement(array[i]);
			}
			else coutElement(array[i]);
		}
		else if (i + 1 != n && checkAfter ) {
				coutElement(array[i]);
			}
	}
}
int main()
{
	int n;
	int metricArray[1000];
	input(n, metricArray);
	process(n, metricArray);
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
