
#include <iostream>
#include <vector>
#include <vector>
using namespace std;

void input(int& n, int* array) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
}
void output(vector <int> evenNumber) {
	int amount = evenNumber.size();
	if (amount < 1) {
		cout << "No element";
	}
	else {
		for (int i = 0; i < amount; i++) {
			cout << evenNumber[i]<<" ";
		}
	}
}
int getFirstNumber(int numeral) {
	
	if (numeral < 10) return numeral;
	else {
		int temp;
		while (numeral > 0) {
			temp = numeral % 10;
			numeral /= 10;
		}
		return temp;
	}
}
void getFirstEvenNumber(int n, int* array) {
	vector <int> evenNumber;
	for (int i = 0; i < n; i++) {
		bool check = getFirstNumber(array[i]) % 2 == 0;
		if (check) {
			evenNumber.push_back(array[i]);
		}
	}
	output(evenNumber);
}
int main()
{
	int n;
	int array[1000];
	input(n, array);
	getFirstEvenNumber(n, array);
}