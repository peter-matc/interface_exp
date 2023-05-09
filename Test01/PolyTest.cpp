////
//// Created by ma on 2023/5/4.
//#include "iostream"
//using namespace std;
//
//class Animals{
//private:
//    string name;
//    int age;
//public:
//    virtual void speak() = 0;
//    void Test()
//    {
//        cout<<"name is "<<name<<" age is "<<age<<endl;
//        cout<<"这是父类的Test"<<endl;
//    }
//
//    Animals(const string &name, int age) : name(name), age(age) {
//    }
//    Animals(){
//        this->name = "xiaobai";
//        this->age = 7;
//    }
//
//    const string &getName() const {
//        return name;
//    }
//
//    void setName(const string &name) {
//        Animals::name = name;
//    }
//
//    int getAge() const {
//        return age;
//    }
//
//    void setAge(int age) {
//        Animals::age = age;
//    }
//};
//class dog: public Animals{
//public:
//    void speak() override {
//        cout<< getName()<<" is brake"<<endl;
//    }
//    void Test()
//    {
//        cout<<"这是子类的Test"<<endl;
//    }
//};
//int main()
//{
//    Animals *sss = new dog();
//    sss->speak();
//    sss->Test();
//}
//
//
