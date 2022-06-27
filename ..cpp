#include <iostream>
#include <string>
using namespace std;
class Teacher//定义基类Teacher
{
public://Teacher基类公用成员 
	Teacher(string, int, char, string, int, string);//声明构造函数 
	void display();//声明输出函数 
protected://Teacher基类保护成员 
	string name;//姓名 
	int age;//年龄 
	char sex;//性别 
	string addr;//地址 
	int tel;//电话 
	string title;//职称 
};
Teacher::Teacher(string na, int a, char s, string ad, int te, string ti)//定义构造函数 
{
	name=na; age=a; sex=s; addr=ad; tel=te; title=ti;
}
void Teacher::display()//定义输出函数 
{
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"title: "<<title<<endl;
	cout<<"address: "<<addr<<endl;
	cout<<"tel: "<<tel<<endl;
}
class Cadre//定义基类Cadre
{
public://Cadre基类公用成员
	Cadre(string, int, char, string, int, string);//声明构造函数 
	void display1();//声明输出函数 
protected://Cadre基类保护成员 
	string name;//姓名 
	int age;//年龄 
	char sex;//性别 
	string addr;//地址 
	int tel;//电话 
	string post;//职务 
};
Cadre::Cadre(string na, int a, char s, string ad, int te, string pos)//定义构造函数 
{
	name=na; age=a; sex=s; addr=ad; tel=te; post=pos;
}
void Cadre::display1()//定义输出函数
{
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"address: "<<addr<<endl;
	cout<<"tel: "<<tel<<endl;
	cout<<"post: "<<post<<endl;
}
class Teacher_Cadre: public Teacher, public Cadre//定义公用派生类Teacher_Cadre
{
public://Teacher_Cadre派生类公用成员 
	Teacher_Cadre(string na, int a, char s, string ad, int te, string ti, string pos, double w):
	  Teacher(na, a, s, ad, te, ti), Cadre(na, a, s, ad, te, pos), wage(w){}
	void show();//声明输出函数 
private:
	double wage;//工资 
};

void Teacher_Cadre::show()//定义输出函数
{
	Teacher::display();
	cout<<"post: "<<Cadre::post<<endl;
	cout<<"wage: "<<wage<<endl;
};
int main()//主函数 
{
	Teacher_Cadre person("LiHua", 35, 'M', "JiNan", 6454998, "professor", "assitant", 7500.5);
	person.show();
	system("pause");
	return 0;
}

