//#include<iostream>
//using namespace std;
//////创建全局变量
//int g_c = 10;
//int g_d = 10;
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main() {
//	//全局区
//	int a = 10;//创建局部变量
//	int b = 10;
//	static int s_a = 10;
//	cout << "局部变量a的地址为： " << (int)&a << endl;
//	cout << "局部变量b的地址为： " << (int)&b << endl;
//	cout << "全局变量g_c的地址为： " << (int)&g_c << endl;
//	cout << "全局变量g_d的地址为： " << (int)&g_d << endl;
//	cout << "静态变量s_a的地址为： " << (int)&s_a << endl;
//	//常量
//	//字符串常量
//	cout << "字符串常量的地址为： " << (int)&"hello world" << endl;
//	//const修饰的变量
//	//const修饰的全局变量，局部变量
//	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//	//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
//	cout << "全局常量c_l_b地址为： " << (int)&c_l_b << endl;
//	//全局区存放全局变量，静态变量，常量
//	//常量区存放const修饰的全局常量和字符串常量
//	system("pause");
//	return 0;
//}