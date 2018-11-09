#include <iostream>
#include <cmath>
using namespace std;

bool judge(int x);

int main() {
	int iEvenNumber, iPrime1 = 2, iPrime2;
	for (;;) {
		cout << "Please input an even number which is bigger than 3:\n";
		cin >> iEvenNumber;

		if (iEvenNumber % 2 != 0 || iEvenNumber < 4)cout << "Input Error\n";
		else {
			for (iPrime1; iPrime1 <= iEvenNumber / 2; iPrime1++) {
				if (judge(iPrime1) == 1) {
					iPrime2 = iEvenNumber - iPrime1;
					if (judge(iPrime2) == 1) {
						cout << iEvenNumber << "=" << iPrime1 << "+" << iPrime2 << endl;
						break;
					}
				}
			}
		}

		//cout << judge(iEvenNumber);
	}
	return 0;
}

bool judge(int x) {
	if (x == 2) return 1;
	else if (x % 2 == 0) return 0;
	else {
		for (int i = 3; i <= sqrt(x); i += 2) {
			if (x % i == 0) return 0;
		}
		return 1;
	}
}