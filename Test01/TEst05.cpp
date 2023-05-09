////编程将用户输入的若干支股票信息（股票名称、股票代码及股票价格）先保存到文件中，再将写进去的各支股票信息读出来显示
//#include <iostream>
//#include <fstream>
//using namespace std;
//struct stock
//{
//	char name[20];
//	char code[20];
//	double price;
//};
//int main() {
//	stock s[100];
//	int i = 0;
//	while (1) {
//		cout << "请输入股票名称、股票代码及股票价格：";
//		cin >> s[i].name >> s[i].code >> s[i].price;
//		if (s[i].price == 0) {
//			break;
//		}
//		i++;
//	}
//	int n = i;
//	ofstream fout("stock.dat", ios::binary);
//	for (int i = 0; i < n; i++) {
//		fout.write((char*)&s[i], sizeof(s[i]));
//	}
//	fout.close();
//	ifstream fin("stock.dat", ios::binary);
//	stock s2[100];
//	int j = 0;
//	while (!fin.eof()) {
//		fin.read((char*)&s2[j], sizeof(s2[j]));
//		j++;
//	}
//	int n2 = j;
//	for (int i = 0; i < n2; i++) {
//		cout << s2[i].name << " " << s2[i].code << " " << s2[i].price << endl;
//	}
//	return 0;
//}