////��̽��û����������֧��Ʊ��Ϣ����Ʊ���ơ���Ʊ���뼰��Ʊ�۸��ȱ��浽�ļ��У��ٽ�д��ȥ�ĸ�֧��Ʊ��Ϣ��������ʾ
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
//		cout << "�������Ʊ���ơ���Ʊ���뼰��Ʊ�۸�";
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