////��д�������ܷ���ǰ5%���������������룩��ͬѧ��������ѧ�ź��ܳɼ�,����ǰ5%��ͬѧ����Ϣ���浽�������ļ�data.dat�С�
////ѧ�� ���� �༶ ��ѧ ���� Ӣ��
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//struct student
//{
//	char num[20];
//	char name[20];
//	char class1[20];
//	int math;
//	int chinese;
//	int english;
//	int sum;
//};
//int main() {
//	//��ȡ�ļ�
//	ifstream fin("student.txt");
//	student stu[100];
//	int i = 0;
//	while (!fin.eof()) {
//		fin >> stu[i].num >> stu[i].name >> stu[i].class1 >> stu[i].math >> stu[i].chinese >> stu[i].english;
//		stu[i].sum = stu[i].math + stu[i].chinese + stu[i].english;
//		i++;
//	}
//	int n = i;
//	//����
//	for (int i = 0; i < n - 1; i++) {
//		int max = i;
//		for (int j = i + 1; j < n; j++) {
//			if (stu[j].sum > stu[max].sum) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			student temp = stu[i];
//			stu[i] = stu[max];
//			stu[max] = temp;
//		}
//	}
//	//д���ļ�
//	ofstream fout("data.dat", ios::binary);
//	int num = n * 0.05;
//	for (int i = 0; i < num; i++) {
//		fout.write((char*)&stu[i], sizeof(stu[i]));
//	}
//	fout.close();
//	//��ȡ�ļ�
//	ifstream fin2("data.dat", ios::binary);
//	student stu2[100];
//	int j = 0;
//	while (!fin2.eof()) {
//		fin2.read((char*)&stu2[j], sizeof(stu2[j]));
//		j++;
//	}
//	int n2 = j;
//	for (int i = 0; i < n2; i++) {
//		cout << stu2[i].num << " " << stu2[i].name << " " << stu2[i].class1 << " " << stu2[i].sum << endl;
//	}
//	return 0;
//}