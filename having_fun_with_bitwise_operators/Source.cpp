#include <iostream>
#include <format>
using namespace std;

int main() {
	int a{ 0b101100101 }; //a=357
	int b{ 0b000001111 };

	//a&b=5
	cout << format("{:b}", (a & b)) << endl;
	cout << format("{}, {}", a, (a & b)) << endl;

	int c{ 0b10110 };
	cout << c << endl;
	cout << format("{:b}  ", (a & b) | (c << 4));  //c<<4 ==> c*2^4, c=22, 22*16=352
	cout << format("{}", (a & b) | (c << 4)); // 5+352=357

	return 0;
}