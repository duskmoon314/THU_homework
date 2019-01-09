/*********************

This is a not finished prime list generator.
Now it can work with Esieve method.
But Miller_Rabin method can only use to check
whether a number is composite and can not tell
when the number is prime and too small   (?)
(I haven't debug yet)

Coded by duskmoon

*********************/



#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int modexp(int base, int exp, int n);
bool witness(int a, int n);
bool Esieve(long long int n);
bool Miller_Rabin(int n, int s);

int main()
{
	ofstream outfile;
	outfile.open("test.txt");
	int n = 100000000;
	//cin >> n;
	//time_t start, end;
	//start = clock();

	for (int i = 2; i <= n; ++i) {
		if (Esieve(i)) {
			outfile << i << endl;
		}
	}
	outfile.close();
	cout << "done";
	/*for (int i = 0; i < 100000; ++i) {
		Miller_Rabin(n, 50);
		Esieve(n);
	}*/
	/*end = clock();
	cout << ((double)(end - start)) / CLOCKS_PER_SEC << "s";*/
}

bool Esieve(long long int n) {
	if (n == 2)
		return true;
	else if (n % 2 == 0)
		return false;
	for (int i = 3; i*i <= n; i += 2) {
		if (n%i == 0)
			return false;
	}
	return true;
}

int modexp(int base, int exp, int m) {
	if (exp == 0)return 1;
	else if (exp % 2 == 0) {
		int result = modexp(base, exp / 2, m);
		result *= result;
		result %= m;
		return result;
	}
	else {
		return (modexp(base, exp - 1, m)*base) % m;
	}
}

bool witness(int a, int n) {
	n -= 1;
	int t = 0, u;
	while (n % 2 == 0) {
		n /= 2;
		t++;
	}
	u = n;
	int x = modexp(a, u, n + 1), x_ = (x % n * x % n) % n;
	
	for (int i = 0; i < t; ++i) {
		x_ = (x % n * x % n) % n;
		if (x_ == 1 && x != 1 && x != -1)
			return true;
		x = x_;
	}
	if (x_ != 1)
		return true;
	return false;
}

bool Miller_Rabin(int n, int s) {
	for (int j = 0; j < s; ++j) {
		int a = 1 + rand() % (n - 1);
		if (witness(a, n))
			return false;
	}
	return true;
}