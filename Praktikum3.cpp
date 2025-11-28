#include <iostream>

using namespace std;

int main() {
	int p = 5;

	for (int t = 0; t < p; t++) {
		for (int m = 0; m < p - t; m++) {
			cout << " ";
		}
		int	val = 1;
		for (int v = 0; v <= t; v++) {
			cout << val << " ";
			val = val * (t - v) / (v + 1);
		}
		cout << endl;
	}
	cout << "\n=============================================";
	cout << "\n\nNAMA : MOCHAMAD NAZAR SIROT";
	cout << "\n\nNIM : 25104410051";
	cout << "\n\nPRODI : 1B TEKNIK INFORMATIKA";
	cout << "\n\n=============================================";

	return 0;
}