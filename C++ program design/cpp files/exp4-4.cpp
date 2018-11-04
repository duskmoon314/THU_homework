#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int iChicken, iHen, iRooster, max = 1;
	cout << "所求购买方案为：\n";
	for (iRooster = 1; iRooster < 99; iRooster++) {
		for (iChicken = 1; iChicken < 99; iChicken++) {
			for (iHen = 97; iHen > 1; iHen--) {
				if ((iChicken + iHen + iRooster == 100) && (5 * iChicken + 15 * iHen + 10 * iRooster < 1001) && iHen >= max) {
					max = iHen;
					cout << "母鸡：" << iHen << "只\n公鸡：" << iRooster << "只\n小鸡：" << iChicken << "只\n剩余金额：" << 1000- (5 * iChicken + 15 * iHen + 10 * iRooster) << "\n\n";
				}
			}
		}
	}

	return 0;
}
