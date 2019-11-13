

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void input(int& n, int* metricArray) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> metricArray[i];
	}
}
void output(vector <int> biggerAbs) {
	int amount = biggerAbs.size();
	if (amount < 1) {
		cout << "No have element !";
	} 
	else {
		for (int i = 0; i < amount; i++) {
			cout << biggerAbs[i]<<" ";
		}
	}
}
void processElement(int n, int* metricArray) {
	vector <int> biggerAbs;
	if (n < 2) output(biggerAbs);
	else {
		for (int i = 1; i < n; i++) {
			if (metricArray[i] > abs(metricArray[i - 1])) {
				biggerAbs.push_back(metricArray[i]);
			}
		}
		output(biggerAbs);
	}
 }
int main() {
	int n;
	int metricArray[1000];
	input(n, metricArray);
	processElement(n, metricArray);
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
