#include <iostream>
using namespace std;

int main() {
	int iStandBuffalo, iLieBuffalo, iOldBuffalo, count = 0;
	for (iOldBuffalo = 96; iOldBuffalo > 2; iOldBuffalo -= 3) {
		for (iStandBuffalo = 1; iStandBuffalo < 100 - iOldBuffalo; iStandBuffalo++) {
			iLieBuffalo = 100 - iOldBuffalo - iStandBuffalo;
			if (5 * iStandBuffalo + 3 * iLieBuffalo + iOldBuffalo / 3 == 100) {
				count++;
				cout << "վ�ŵ�Сˮţ�У� " << iStandBuffalo;
				cout << "ͷ\n���ŵ�Сˮţ�У� " << iLieBuffalo;
				cout << "ͷ\n��ˮţ�У� " << iOldBuffalo << "ͷ\n\n";
			}
		}
	}
	cout << "����" << count << "�����";

	return 0;
}
