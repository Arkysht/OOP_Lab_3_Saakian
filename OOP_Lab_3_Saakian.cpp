#include <iostream>

using namespace std;


class MyClass {
private:
	double first;
	int second;
public:
	void Init(double _first, double _second) {
		first = _first;
		second = _second;
	};
	void Display() {
		cout << "Answer: " << Cost() << "\n";
	};
	void Read() {
		cout << "Enter the first num: ";
		cin >> first;
		cout << "Enter the second num: ";
		cin >> second;
	};
	double Cost() {
		double t;
		t = first;
		for (int i = 1; i < second; i++)
		    first *= t;
		return first;
	};
};
int main(int argc, char* argv[])
{
	MyClass A;
	MyClass* B = new MyClass();
	A.Read();
	A.Display();
	B->Read();
	B->Display();
	delete B;
	system("PAUSE");
	return 0;
}
