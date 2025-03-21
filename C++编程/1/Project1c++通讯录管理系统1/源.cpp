#include<iostream>
#include<string>
#define Max 1000
using namespace std;
void showmenu() {
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
}
struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
struct Addressbooks {
	struct Person personArray[Max];
	int m_Size;
};
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == Max) {
		cout << "已满 ，无法添加 " << endl;
		return;
	}
	else {
		string name;
		cout << "请输入姓名:  " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "请输入性别：" << endl;
		cout << "1---男：" << endl;
		cout << "2---女：" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入 " << endl;
		}
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "请输入电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "请输入家庭住址： " << endl;
		string Addr;
		cin >> Addr;
		abs->personArray[abs->m_Size].m_Addr = Addr;
		abs->m_Size++;
		cout << "添加成功 "<<endl;
		system("pause");
		system("cls");//清屏
	}
}
//显示所有的联系人
void showPerson(Addressbooks* abs) {
	if (abs->m_Size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名： " << abs->personArray[i].m_Name << "\t";
			cout << "性别： " << (abs->personArray[i].m_Sex == 1?"男":"女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "住址： " << abs->personArray[i].m_Addr << endl;
		}
	}
}
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;//找到
		}
	}
	return -1;
}
void deletePerson(Addressbooks* abs) {
	cout << "请输入要删除的联系人 " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs) {
	cout << "请输入您要查找的联系人 " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别： " << abs->personArray[ret].m_Sex <<"\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* abs) {
	cout << "请输入您要修改的联系人 " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name); 
	if (ret != -1) {
		string name;
		cout << "请输入姓名 " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "请输入性别 " << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		
		while(true){
			cin >> sex;
			if (sex == 1 || sex == 2) {//输入正确，推出循环
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		cout << "请输入联系电话 " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "请输入家庭住址 " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功 " << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

	
}
void clearPerson(Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "通讯录已清空 " << endl;
	system("pause");
	system("cls");
}
int main() {
	
	//创建通讯录初始变量
	Addressbooks abs;
	//初始化通讯录当前人物数
	abs.m_Size = 0;
	int select = 0;
	
	while (true) {
		showmenu();
		cin >> select;
		switch (select) {
		case 1://添加联系人
			addPerson(&abs);//利用地址传递
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			deletePerson(&abs);
			break;
		case 4://查找联系人
			/*{
				cout << "请输入删除联系人姓名； " << endl;
				string name;
				cin >> name;
				if (isExist(&abs, name) == -1) {
					cout << "查无此人 " << endl;
				}
				else {
					cout << "查到此人 " << endl;
				}
			}*/
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6:
			clearPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用 " << endl;
			system("pause");
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}