//
// Created by ma on 2023/5/9.
//
#include "iostream"

using namespace std;

class AA {
private:
    int id;
    string name;
public:
    AA(int id, const string &name) : id(id), name(name) {

    }

    AA() {
    }

    ~AA() {
        cout << "end" << endl;
    }

    int getId() const {
        return id;
    }

    void setId(int id) {
        AA::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        AA::name = name;
    }
};

const AA &returnAA(AA &a) {
    a.setId(a.getId() + 1);
    cout << "id = " << a.getId() << endl;
    return a;
}

void Test(int &a, int n = 1) {
    cout << a << endl;
    a = a + 10;
    cout << "n = " << n << endl;
    cout << "Test is used" << endl;
}

int main() {
    // new 一个新的对象和 直接 创建一个对象不同   new 的那个对象结束后不会使用析构函数  创建的对象会调用析构函数
    // new 的对象如果不delete 的话则 不会释放空间则不会调用析构函数， 直接创建对象的话会直接调用析构函数
    AA a;

    a.setId(20);
    a = returnAA(a);
    int *m = new int(20);
    cout << *m << endl;
    Test(*m, 5);
    cout << *m << endl;
    AA *s = new AA(18, "aaa");
    *s = returnAA(*s);
    *s = returnAA(*s);

}