//#include "iostream"
//using namespace std;
//// 引用的应用
//void aa(int x)
//{
//    x = x+10;
//    cout<<"x="<<x<<endl;
//}
//// 引用是将传入的x指向传入的那个变量 这俩相同 当其中一个改变时都将发生改变。
//void aass(int *x)
//{
//    *x = *x + 10;
//    cout<<"x="<<*x<<endl;
//}
//// 这是指针，引用是为了更加简单的使用 尽量少使用指针
//
//void aas(int &x)
//{
//    x = x+10;
//    cout<<"x="<<x<<endl;
//}
//int main()
//{
//    int time = 20;
//    aa(time);
//    cout<<"time = "<<time<<endl;
//    aas(time);
//    cout<<"time = "<<time<<endl;
//    aass(&time);
//    cout<<"time = "<<time<<endl;
//
//}