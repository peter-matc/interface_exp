//
// Created by ma on 2023/5/4.
//
#include "iostream"
using namespace std;
class A{
protected:
    int width;
    int length;
public:
    int getWidth() const {
        return width;
    }

    void setWidth(int width) {
        A::width = width;
    }

    int getLength() const {
        return length;
    }

    void setLength(int length) {
        A::length = length;
    }

    A(int width, int length) : width(width), length(length) {}

};
class C{
protected:
    int width;
    int length;
public:

    C(int width01,int length01)
    {
        this->length = length01;
        this->width = width01;
    }
    virtual ~C() {


    }
    C(){}

    int getWidth() const {
        return width;
    }

    void setWidth(int width) {
        C::width = width;
    }

    int getLength() const {
        return length;
    }

    void setLength(int length) {
        C::length = length;
    }
};
class B: public A,C{
public:
    B(int width, int length) : A(width, length), C() {}

    B(int width, int length, int width1, int length1) : A(width, length), C(width1, length1) {}

    int returnAreaA()
    int returnAreaA()
    {
        return A::width*A::length;
    }
    int returnAreaC()
    {
        return C::width*C::length;
    }

};
int main()
{
    B *ss = new B(10,20);
    B *MM = new B(10,20,15,30);
    cout<<ss->returnAreaA()<<endl;
    cout<<MM->returnAreaC()<<endl;

    
}