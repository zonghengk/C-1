//#include<iostream>
//using namespace std;
////int* func() {
////	//利用new可以讲数据开辟到堆区
////	//指针本质是局部变量，放在栈上，指针保存的数据是放在栈区
////	int* p = new int(10);
////	return p;
////}
////int main() {
////	int* p = func();
////	cout << *p << endl;
////	system("pause");
////}
////new的基本语法
////在堆区利用new开辟数组
//int* func() {
//	int* p = new int(10);//new返回指针
//	return p;
//}
//void test01() {
//	int* p = func();
//	cout << *p << endl;//堆区数据由程序员管理开辟释放
//	//释放数据利用关键字delete
//	delete p;
//}
////在堆区开辟一个数组
//void test02() {
//	//创建10个数组int
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
