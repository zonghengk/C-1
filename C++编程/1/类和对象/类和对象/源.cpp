//��װ
#include<iostream>
using namespace std;
#include<iostream>
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
//class C1 {
//	int m_A;
//};//Ĭ��Ȩ����˽��
//struct C2 {
//	int m_B;//����
//};
//int main() {
//	C1 c1;
//	//c1.m_A = 100;
//	C2 c2;
//	c2.m_B = 100;//���Է���
//	system("pause");
//	return 0;
//}

//��Ա������Ϊ˽��
//1.�����Լ�����дȨ��
//2.����д���Լ��������Ч��
//class Person {
//public:
//	void setName(string name) {
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName() {
//		return m_Name;
//	}
//	//��ȡ����
//	int getAge() {
//		return m_Age;
//	}
//	//��������
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			cout << "�����д���" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	void setIdol(string idol) {
//		m_Idol = idol;
//	}
//private:
//	string m_Name;//���� �ɶ���д
//
//	int m_Age=18;//���� ֻ�� Ҳ����д��0��150��
//	string m_Idol;//ż�� ֻд
//};
//int main() {
//	Person p;//��������
//	p.setName("��ɽ");
//	cout << "���� �� " << p.getName()<< endl;
//	//����
//	p.setAge(100);
//	cout << "���� �� " << p.getAge() << endl;
//	//ż������
//	p.setIdol("С��");
//	//cout << "ż�� �� " << p.setIdol() << endl;
//	system("pause");
//	return 0;
//}

//����
//1.������������
//2.�������
//3.�����Ϊ����ȡ��������������
//4.�ֱ�������ȫ�ֺ����ͳ�Ա�������ж������������Ƿ����

class cube {
public:
	//�������úͻ�ȡ��
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	//�����úͻ�ȡ��
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	//�ߣ����úͻ�ȡ��
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	//��ȡ���������
	int caculateS() {
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//��ȡ���������
	int caculateV() {
		return m_L * m_W * m_H;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(cube&c) {
		if (m_L == c.getL() && m_W == c.getL()&& m_H == c.getL()) {
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;
};
//����ȫ�ֺ������ж������������Ƿ����
bool isSame(cube &c1, cube &c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}
int main() {
	cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "c1�����Ϊ�� " << c1.caculateS() << endl;
	cout << "c1�����Ϊ�� " << c1.caculateV() << endl;
	cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(111);
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1��c2����ȵ� " << endl;
	}
	else {
		cout << "c1��c2�ǲ���ȵ� " << endl;
	}
	//���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "��Ա����c1��c2����ȵ� " << endl;
	}
	else {
		cout << "��Ա����c1��c2�ǲ���ȵ� " << endl;
	}
	ret = c1.isSameByClass(c2);
	system("pause");
	return 0;
}