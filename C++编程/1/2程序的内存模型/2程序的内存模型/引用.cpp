#include<iostream>
using namespace std;
//���ã������������
//�﷨����������&����=ԭ��
//int &b=a;
//int main() {
//	int a = 10;
//	int& b = a;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	b = 100;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	system("pause");
//	//���ñ����ʼ�� int&b no
//	//����һ����ʼ���󣬾Ͳ��w�Ը�����
//
//}

//��������������
//1.ֵ����
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "01a= " << a << endl;
//	cout << "01b= " << b << endl;
//}
//void mySwap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void mySwap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);//ֵ�����ββ�������ʵ��
//	//mySwap02(&a, &b);//��ַ�����βλ�����ʵ��
//	mySwap03(a, b);//���ô����β�Ҳ������ʵ��
//	cout << "01a= " << a << endl;
//	cout << "01b= " << b << endl;
//	system("pause");
//}
// 
//����������ֵ
//int& test01() {
//	//��Ҫ���ؾֲ�����������
//	int a = 10;//�ֲ�������ջ��
//	return a;
//}
////�����ĵ��ÿ�����Ϊ��ֵ
//int& test02() {
//	static int a = 10;//��̬���������ȫ����
//	return a;
//}
//int main() {
//	/*int& ref = test01();
//	cout << "ref= " << ref << endl;*/
//	int& ref2 = test02();
//	cout << "ref2= " << ref2 << endl;
//	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ref2= " << ref2 << endl;
//	system("pause");
//}

//��������
//void showValue(const int &val) {
//	//val = 1000;
//	cout << "val=" << val << endl;//��ӡ����
//}
//int main() {
//	//ʹ�ó����������βΣ���ֹ�����
//	//int a = 10;
//	//����const�󣬱������������޸ģ�int temp=10; int &ref=temp;
//	//const int& ref = 10;//���ñ�������һ�ݺϷ����ڴ�ռ�
//
//	int a = 100;
//	showValue(a);
//	system("pause");
//	return 0;
//}

//�������
//����Ĭ�ϲ���
//int func(int a,int b=20,int c=30) {
//	return a + b + c;
//}
////ע������
////1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴������ж�������Ĭ��ֵ
////2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//int func2(int a = 10, int b = 10);//����
//int func2(int a = 10, int b = 10) {
//	return a + b;
//}
//int main() {
//	//cout << func(10, 20, 30) << endl;
//	cout << func(10) << endl;
//	system("pause");
//	return 0;
//}

//��������
//ͬһ���������£�����������ͬ�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ,�����ķ���ֵ��������Ϊ�������ص�����
//void func() {
//	cout << "func()�ĵ���" << endl;
//}
//void func(int a) {
//	cout << "func(int a)�ĵ���" << endl;
//}
//void func(double b) {
//	cout << "func(double b)�ĵ���" << endl;
//}
//void func(int a,double b) {
//	cout << "func(int a)�ĵ���" << endl;
//}
//int main() {
//	func();
//	func(10);
//	func(3.3);
//	func(10, 3.3);
//	system("pause");
//	return 0;
//}

//��������ע������
void func(int&a) {
	cout << "func(int&a)�ĵ���" << endl;
}
void func(const int& a) {//constֻ����д
	cout << "func(const int &a)�ĵ���" << endl;
}
void func2(int a,int b) {
	cout << "func2(int a,int b)�ĵ���" << endl;
}
void func2(int a) {
	cout << "func2(int a)�ĵ���" << endl;
}
//void func2(int a, int b=10) {
//	cout << "func2(int a,int b=10)�ĵ���" << endl;
//}
int main() {
	int a = 10;
	func(a);
	func(10);
	func2(10);//������
	func2(10, 20);
	system("pause");
}