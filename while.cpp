#include <iostream>
using namespace std;

int main() {
	int i = 4;
	while (i <= 20) {
		cout << " " << i << endl;
		i += 2;
	}
	i = 4;
	do {
		cout << " " << i << endl;
		i += 2;
	} while (i <= 20);

	int num = -20;
	int input;
	int sum = 0;
	cout << " enter a number" << endl;
	cin >> input;
	do {
	
		if (num%input==0) {
			cout << num << endl;
			sum += num;
		}

		num++;
	} while (num <= 40);
	cout << "total sum is " << sum << endl;
}	
