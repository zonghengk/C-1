//��װ
#include<iostream>
using namespace std;
//���һ��Բ�࣬�����ܳ�
//class����һ����,���������ŵľ���������
//#define PI 3.14
//class Circle {
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//���ԣ��뾶
//	int m_r;
//	//��Ϊ
//	//��ȡԪ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//	//����
//};
//int main() {
//	//ͨ��Բ�࣬���������Բ
//	Circle cl;
//	//��ԭ��������Խ��и�ֵ
//	cl.m_r = 10;
//	cout << "Ԫ���ܳ�Ϊ�� " << cl.calculateZC() << endl;
//	system("pause");
//	//���е����Ժ���Ϊ ����ͳһ�Ƴ�Ա
//	//���� ��Ա���ԣ���Ա����
//	//��Ϊ ��Ա��������Ա����
//
//}
//����Ȩ��
//����Ȩ�� public ��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� protected ��Ա ���ڿ��Է��� ���ⲻ���Է���
//˽��Ȩ�� private ��Ա ���ڿ��Է��� ���ⲻ���Է���
//class Person {
//	//����Ա
//	//����
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//public:
//	void func(){
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//
//	}
//};
//int main() {
//	Person p1;
//	p1.m_Name = "����";
//	//p1.m_Car = "����";//���ɷ���
//	//p1.m_Password = 123;
//	system("pause");
//	return 0;
//}

//struct��class������
//structĬ��Ȩ��Ϊ����
//classĬ��Ϊ˽��
class C1 {
	int m_A;
};//Ĭ��Ȩ����˽��
struct C2 {
	int m_B;//����
};
int main() {
	C1 c1;
	//c1.m_A = 100;
	C2 c2;
	c2.m_B = 100;//���Է���
	system("pause");
	return 0;
}