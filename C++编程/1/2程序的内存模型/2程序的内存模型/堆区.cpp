//#include<iostream>
//using namespace std;
////int* func() {
////	//����new���Խ����ݿ��ٵ�����
////	//ָ�뱾���Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ���ջ��
////	int* p = new int(10);
////	return p;
////}
////int main() {
////	int* p = func();
////	cout << *p << endl;
////	system("pause");
////}
////new�Ļ����﷨
////�ڶ�������new��������
//int* func() {
//	int* p = new int(10);//new����ָ��
//	return p;
//}
//void test01() {
//	int* p = func();
//	cout << *p << endl;//���������ɳ���Ա�������ͷ�
//	//�ͷ��������ùؼ���delete
//	delete p;
//}
////�ڶ�������һ������
//void test02() {
//	//����10������int
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] =i + 100;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//	delete[]arr;
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//}
