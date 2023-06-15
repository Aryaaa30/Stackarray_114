#include<iostream>
#include<string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//construkor
	StackArray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Number of data exeeds the limit." << endl;
			return "";
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;

		return element;


	}
};	


