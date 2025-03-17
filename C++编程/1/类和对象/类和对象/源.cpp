//封装
#include<iostream>
using namespace std;
//设计一个圆类，求他周长
//class代表一个类,类后面紧跟着的就是类名称
//#define PI 3.14
//class Circle {
//	//访问权限
//	//公共权限
//public:
//	//属性，半径
//	int m_r;
//	//行为
//	//获取元的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//	//属性
//};
//int main() {
//	//通过圆类，创建具体的圆
//	Circle cl;
//	//给原对象的属性进行赋值
//	cl.m_r = 10;
//	cout << "元的周长为： " << cl.calculateZC() << endl;
//	system("pause");
//	//类中的属性和行为 我们统一称成员
//	//属性 成员属性，成员变量
//	//行为 成员函数，成员方法
//
//}
//访问权限
//公共权限 public 成员 类内可以访问 类外可以访问
//保护权限 protected 成员 类内可以访问 类外不可以访问
//私有权限 private 成员 类内可以访问 类外不可以访问
//class Person {
//	//三成员
//	//公共
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//public:
//	void func(){
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//
//	}
//};
//int main() {
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰";//不可访问
//	//p1.m_Password = 123;
//	system("pause");
//	return 0;
//}

//struct和class的区别
//struct默认权限为公共
//class默认为私有
class C1 {
	int m_A;
};//默认权限是私有
struct C2 {
	int m_B;//公共
};
int main() {
	C1 c1;
	//c1.m_A = 100;
	C2 c2;
	c2.m_B = 100;//可以访问
	system("pause");
	return 0;
}