#include<iostream>
using namespace std;
//引用，给变量起别名
//语法：数据类型&别名=原名
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
//	//引用必须初始话 int&b no
//	//引用一旦初始化后，就不剋以更改了
//
//}

//引用做函数参数
//1.值传递
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
//	//mySwap01(a, b);//值传递形参不会修饰实参
//	//mySwap02(&a, &b);//地址传递形参会修饰实参
//	mySwap03(a, b);//引用传递形参也会修饰实参
//	cout << "01a= " << a << endl;
//	cout << "01b= " << b << endl;
//	system("pause");
//}
// 
//引用做返回值
//int& test01() {
//	//不要返回局部变量的引用
//	int a = 10;//局部变量在栈区
//	return a;
//}
////函数的调用可以作为左值
//int& test02() {
//	static int a = 10;//静态变量存放在全局区
//	return a;
//}
//int main() {
//	/*int& ref = test01();
//	cout << "ref= " << ref << endl;*/
//	int& ref2 = test02();
//	cout << "ref2= " << ref2 << endl;
//	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << "ref2= " << ref2 << endl;
//	system("pause");
//}

//常量引用
//void showValue(const int &val) {
//	//val = 1000;
//	cout << "val=" << val << endl;//打印数据
//}
//int main() {
//	//使用场景：修饰形参，防止误操作
//	//int a = 10;
//	//加上const后，编译器将代码修改，int temp=10; int &ref=temp;
//	//const int& ref = 10;//引用必须引进一份合法的内存空间
//
//	int a = 100;
//	showValue(a);
//	system("pause");
//	return 0;
//}

//函数提高
//函数默认参数
//int func(int a,int b=20,int c=30) {
//	return a + b + c;
//}
////注意事项
////1.如果某个位置已经有了默认参数，那么从这个位置往后，从做到有都必须有默认值
////2.如果函数声明有默认参数，函数实现就不能有默认参数
//int func2(int a = 10, int b = 10);//声明
//int func2(int a = 10, int b = 10) {
//	return a + b;
//}
//int main() {
//	//cout << func(10, 20, 30) << endl;
//	cout << func(10) << endl;
//	system("pause");
//	return 0;
//}

//函数重载
//同一个作用域下，函数名称相同，函数参数类型不同或者个数不同或者顺序不同,函数的返回值不可以作为函数重载的条件
//void func() {
//	cout << "func()的调用" << endl;
//}
//void func(int a) {
//	cout << "func(int a)的调用" << endl;
//}
//void func(double b) {
//	cout << "func(double b)的调用" << endl;
//}
//void func(int a,double b) {
//	cout << "func(int a)的调用" << endl;
//}
//int main() {
//	func();
//	func(10);
//	func(3.3);
//	func(10, 3.3);
//	system("pause");
//	return 0;
//}

//函数重载注意事项
void func(int&a) {
	cout << "func(int&a)的调用" << endl;
}
void func(const int& a) {//const只读不写
	cout << "func(const int &a)的调用" << endl;
}
void func2(int a,int b) {
	cout << "func2(int a,int b)的调用" << endl;
}
void func2(int a) {
	cout << "func2(int a)的调用" << endl;
}
//void func2(int a, int b=10) {
//	cout << "func2(int a,int b=10)的调用" << endl;
//}
int main() {
	int a = 10;
	func(a);
	func(10);
	func2(10);//二义性
	func2(10, 20);
	system("pause");
}