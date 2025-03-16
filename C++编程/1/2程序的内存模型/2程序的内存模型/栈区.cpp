//#include<iostream>
//using namespace std;
////栈区数据注意事项--不要返回局部变量地址
////栈区的数据由编译器管理开辟和释放
//int* func(int b) {//形参也会放在栈区
//	b = 100;
//	int a = 10;//局部变量存放在栈区
//	return &a;
//}
//int main() {
//	int* p = func(1);
//	cout << *p << endl;//编译器保留
//	cout << *p << endl;//数据不再保留x86
//	system("pause");
//	return 0;
//}

