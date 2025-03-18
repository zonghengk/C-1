//封装
#include<iostream>
using namespace std;
#include<iostream>
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
//class C1 {
//	int m_A;
//};//默认权限是私有
//struct C2 {
//	int m_B;//公共
//};
//int main() {
//	C1 c1;
//	//c1.m_A = 100;
//	C2 c2;
//	c2.m_B = 100;//可以访问
//	system("pause");
//	return 0;
//}

//成员属性设为私有
//1.可以自己控制写权限
//2.对于写可以检测数据有效性
//class Person {
//public:
//	void setName(string name) {
//		m_Name = name;
//	}
//	//获取姓名
//	string getName() {
//		return m_Name;
//	}
//	//获取年龄
//	int getAge() {
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			cout << "年龄有错误" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	void setIdol(string idol) {
//		m_Idol = idol;
//	}
//private:
//	string m_Name;//姓名 可读可写
//
//	int m_Age=18;//年龄 只读 也可以写（0到150）
//	string m_Idol;//偶像 只写
//};
//int main() {
//	Person p;//姓名设置
//	p.setName("大山");
//	cout << "姓名 ： " << p.getName()<< endl;
//	//年龄
//	p.setAge(100);
//	cout << "年龄 ： " << p.getAge() << endl;
//	//偶像设置
//	p.setIdol("小明");
//	//cout << "偶像 ： " << p.setIdol() << endl;
//	system("pause");
//	return 0;
//}

//例子
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体面积和体积
//4.分比如利用全局函数和成员函数，判断两个立方体是否相等

class cube {
public:
	//长（设置和获取）
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	//宽（设置和获取）
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	//高（设置和获取）
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	//获取立方体面积
	int caculateS() {
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//获取立方体体积
	int caculateV() {
		return m_L * m_W * m_H;
	}
	//利用成员函数判断两个立方体是否相等
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
//利用全局函数来判断两个立方体是否相等
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
	cout << "c1的面积为： " << c1.caculateS() << endl;
	cout << "c1的体积为： " << c1.caculateV() << endl;
	cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(111);
	//利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1和c2是相等的 " << endl;
	}
	else {
		cout << "c1和c2是不相等的 " << endl;
	}
	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "成员函数c1和c2是相等的 " << endl;
	}
	else {
		cout << "成员函数c1和c2是不相等的 " << endl;
	}
	ret = c1.isSameByClass(c2);
	system("pause");
	return 0;
}