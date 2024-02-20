#include <iostream>
using namespace std;
enum check{complete,overrange,inrange};
class UInt16 {
private:
	unsigned int* ptr;
public:
	UInt16() {//default constructor	
		ptr = new unsigned int(0);
	}
	UInt16(unsigned int num) {//parmeterized
		if(num>65535)
		ptr = new unsigned int;
		*ptr = num;
	}
	UInt16(UInt16 &obj) {//copy constructor
		ptr = new unsigned int;
		
		*ptr = *obj.ptr;
	}
	UInt16 operator=(UInt16& check) {//= assignment operator
		if (this != &check) {
			*ptr = *check.ptr;
		}
		return *this;
	}
	void set(unsigned int num) {//setter
		check obj;
		if (num > 65535) {
			obj = overrange;
			num = 0;
		}
		*ptr = num;
	}
	check checkstatus() {
		check obj;
		return obj;
	}
	int size()
	{
		return 16;
	}
	void get() {
		cout << "Value is :" << *ptr;
	}
	// Addition operator
	UInt16 operator+(const UInt16& obj) const {
		unsigned int checks;
		check obj_lim;
		if (checks > 65535) {  // Check for overflow
			checks = *ptr + *(obj.ptr);
			obj_lim = overrange;
			checks = checks % 65536;
		}
		else {
			checks = complete;
		}
		return(checks);
	}

};
int main() {


	return 0;
}