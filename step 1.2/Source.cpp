#include <iostream>
using namespace std;

int main() {
	int a, b, o, v;
	cin >> a >> b >> o >> v;
	if ((a-o)*(a-o)==(b-v)*(b-v)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}