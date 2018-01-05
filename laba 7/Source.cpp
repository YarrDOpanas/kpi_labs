#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include<ctime>

using namespace std;

list<int> input(const char *text) {
	cout << "Input amount of elements: ";
	unsigned n;
	cin >> n;
	cout << text;
	list<int> L1(n);
	generate(L1.begin(), L1.end(), []() {return rand() % 101 - 50; });
	copy(L1.begin(), L1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return L1;
}


int main() {
	srand(time(nullptr));
	cout << "Yaroslav Opanasenko, IP-6322, Variant A\n\n";
	list<int> L1 = input("First list: ");
	list<int> L2 = input("Second list: ");
	L1.sort();
	L2.sort();
	list<int> L;
	merge(L1.begin(), L1.end(), L2.begin(), L2.end(), back_inserter(L));
	cout << "Merged and sorted list: ";
	copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}