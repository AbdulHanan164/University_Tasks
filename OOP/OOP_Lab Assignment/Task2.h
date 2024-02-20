#pragma once
#include <iostream>
using namespace std;
enum class Status { Success, Failure };

class UInt {
private:
    uint16_t* value;
    Status status;

public:
    void set_status(Status s);
    UInt();

    UInt(unsigned int val);

    UInt(const UInt& other);

    UInt& operator=(const UInt& other);

    ~UInt();

    void set(unsigned int val);

    Status checkStatus();

    static int size();

    UInt operator+(const UInt& obj);

    UInt operator-(const UInt& obj);

    UInt operator*(const UInt& obj);

    UInt operator/(const UInt& obj);

    void print();
};

class UInt132 : public UInt {
public:
    void set_status(Status s);
    UInt132();

    UInt132(unsigned int val);

    UInt132(const UInt& other);

    UInt& operator=(const UInt& other);

    ~UInt132();

    void set(unsigned int val);

    Status checkStatus();

    static int size();

    UInt operator+(const UInt& obj);

    UInt operator-(const UInt& obj);

    UInt operator*(const UInt& obj);

    UInt operator/(const UInt& obj);
};


class UInt24 : public UInt {
public:
    void set_status(Status s);
    UInt24();

    UInt24(unsigned int val);

    UInt24(const UInt& other);

    UInt& operator=(const UInt& other);

    ~UInt24();

    void set(unsigned int val);

    Status checkStatus();

    static int size();

    UInt operator+(const UInt& obj);

    UInt operator-(const UInt& obj);

    UInt operator*(const UInt& obj);

    UInt operator/(const UInt& obj);
};
class UInt24 : public UInt {
public:
    void set_status(Status s);
    UInt24();

    UInt24(unsigned int val);

    UInt24(const UInt& other);

    UInt& operator=(const UInt& other);

    ~UInt24();

    void set(unsigned int val);

    Status checkStatus();

    static int size();

    UInt operator+(const UInt& obj);

    UInt operator-(const UInt& obj);

    UInt operator*(const UInt& obj);

    UInt operator/(const UInt& obj);
};
class UInt32 : public UInt {
public:
    void set_status(Status s);
    UInt32();

    UInt32(unsigned int val);

    UInt32(const UInt& other);

    UInt& operator=(const UInt& other);

    ~UInt32();

    void set(unsigned int val);

    Status checkStatus();

    static int size();

    UInt operator+(const UInt& obj);

    UInt operator-(const UInt& obj);

    UInt operator*(const UInt& obj);

    UInt operator/(const UInt& obj);
};