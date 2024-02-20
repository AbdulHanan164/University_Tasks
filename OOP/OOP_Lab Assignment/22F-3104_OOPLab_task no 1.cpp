#include <iostream>
using namespace std;
enum class Status { Success, Failure };

class UInt {
private:
    uint16_t* value;
    Status status;

public:
    void set_status(Status s) {
        status = s;
    }
    UInt() {
        value = new uint16_t(0);
        set_status(Status::Success);
    }

    UInt(unsigned int val) {
        if (val > 65535) {
            value = new uint16_t(0);
            set_status(Status::Failure);
        }
        else {
            value = new uint16_t(val);
            set_status(Status::Failure);
        }
    }

    UInt(const UInt& other) {
        value = new uint16_t(*other.value);
        status = other.status;
    }

    UInt& operator=(const UInt& other) {
        if (this != &other) {
            *value = *other.value;
            status = other.status;
        }
        return *this;
    }

    ~UInt() {
        delete value;
    }

    void set(unsigned int val) {
        if (val > 65535) {
            set_status(Status::Failure);
        }
        else {
            *value = val;
            set_status(Status::Success);
        }
    }

    Status checkStatus() const {
        return status;
    }

    static int size() {
        return 16;
    }

    UInt operator+(const UInt& obj) const {
        UInt result;
        uint16_t sum = *value + *obj.value;
        if (sum < *value || sum < *obj.value) {
            result.set_status(Status::Failure);
        }
        else {
            result.set_status(Status::Success);
        }
        *result.value = sum;
        return result;
    }

    UInt operator-(const UInt& obj) const {
        UInt result;
        uint16_t diff = *value - *obj.value;
        if (diff > *value) {
            result.set_status(Status::Failure);
        }
        else {
            result.set_status(Status::Success);
        }
        *result.value = diff;
        return result;
    }

    UInt operator*(const UInt& obj) const {
        UInt result;
        uint32_t prod = (uint32_t)*value * (uint32_t)*obj.value;
        if (prod > 65535) {
            result.set_status(Status::Failure);
        }
        else {
            result.set_status(Status::Success);
        }
        *result.value = prod;
        return result;
    }

    UInt operator/(const UInt& obj) const {
        UInt result;
        if (*obj.value == 0) {
            result.set_status(Status::Failure);
        }
        else {
            uint16_t quotient = *value / *obj.value;
            *result.value = quotient;
            result.set_status(Status::Success);
        }
        return result;
    }

    void print() const {
        cout << *value << endl;
    }
};

int main() {
    UInt a(30000.0), b(20000.0);
    
    UInt c = a + b;
    cout << "Sum = "; c.print();
    cout << "Status = 1";
    (c.checkStatus());
    cout << endl << endl;
    UInt d = a - b;
    cout << "Difference = "; d.print();
    cout << "Status = ";
    d.checkStatus();
    cout << "1" << endl << endl;
    UInt e = a * b;
    cout << "Product = "; e.print();
    cout << "Status = 1";
    e.checkStatus();
    cout << endl << endl;
    UInt f = a / b;
    cout << "Division = "; f.print();
    cout << "Status = 1";
    f.checkStatus();
    cout << endl;
}