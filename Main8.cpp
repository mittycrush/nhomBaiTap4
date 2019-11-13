#include <iostream>
#include <vector>

using namespace std;

void input(int& n, int* data, int& x, int& y) {
	cout << "Nhap khoang : ";
	cin >> x;
	cin >> y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
}
void output(vector <int> result) {
	if (result.size() < 1) {
		cout << "No element in there! ";
	}
	else {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << " ";
		}
	}
}
void processArray(int n, int* data, int x, int y) {
	vector <int> positive;
	for (int i = 0; i < n; i++) {
		if (data[i] % 2 == 0 && x <= data[i] && data[i] <= y) {
			positive.push_back(data[i]);
		}
	}
	output(positive);
}
int main() {
	int n, x, y;
	int data[1000];
	input(n, data, x, y);
	processArray(n, data, x, y);

}

