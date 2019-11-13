#include <iostream>
#include <vector>
using namespace std;

void input(int& n, int* data, int &x, int &y) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	cout << "Nhap khoang [x, y] "; cin >> x; cin >> y;
}
void output(vector <int> area) {
	if (area.size() < 1) {
		cout << "no element in here ";
	}
	else {
		for (int i = 0; i < area.size(); i++) {
			cout << area[i] << " ";
		}
	}
}
void getInArray(int n, int* data, int x, int y) {
	vector <int> area;
	for (int i = 0; i < n; i++) {
		if (data[i] >= x && data[i] <= y) {
			area.push_back(data[i]);
		}
	}
	output(area);
}

int main() {
	int n,x,y;
	int data[1000];
	input(n, data, x, y);
	getInArray(n, data, x, y);
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
