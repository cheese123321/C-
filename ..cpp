#include <iostream>
#include <string>
using namespace std;
class Teacher//�������Teacher
{
public://Teacher���๫�ó�Ա 
	Teacher(string, int, char, string, int, string);//�������캯�� 
	void display();//����������� 
protected://Teacher���ౣ����Ա 
	string name;//���� 
	int age;//���� 
	char sex;//�Ա� 
	string addr;//��ַ 
	int tel;//�绰 
	string title;//ְ�� 
};
Teacher::Teacher(string na, int a, char s, string ad, int te, string ti)//���幹�캯�� 
{
	name=na; age=a; sex=s; addr=ad; tel=te; title=ti;
}
void Teacher::display()//����������� 
{
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"title: "<<title<<endl;
	cout<<"address: "<<addr<<endl;
	cout<<"tel: "<<tel<<endl;
}
class Cadre//�������Cadre
{
public://Cadre���๫�ó�Ա
	Cadre(string, int, char, string, int, string);//�������캯�� 
	void display1();//����������� 
protected://Cadre���ౣ����Ա 
	string name;//���� 
	int age;//���� 
	char sex;//�Ա� 
	string addr;//��ַ 
	int tel;//�绰 
	string post;//ְ�� 
};
Cadre::Cadre(string na, int a, char s, string ad, int te, string pos)//���幹�캯�� 
{
	name=na; age=a; sex=s; addr=ad; tel=te; post=pos;
}
void Cadre::display1()//�����������
{
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"address: "<<addr<<endl;
	cout<<"tel: "<<tel<<endl;
	cout<<"post: "<<post<<endl;
}
class Teacher_Cadre: public Teacher, public Cadre//���幫��������Teacher_Cadre
{
public://Teacher_Cadre�����๫�ó�Ա 
	Teacher_Cadre(string na, int a, char s, string ad, int te, string ti, string pos, double w):
	  Teacher(na, a, s, ad, te, ti), Cadre(na, a, s, ad, te, pos), wage(w){}
	void show();//����������� 
private:
	double wage;//���� 
};

void Teacher_Cadre::show()//�����������
{
	Teacher::display();
	cout<<"post: "<<Cadre::post<<endl;
	cout<<"wage: "<<wage<<endl;
};
int main()//������ 
{
	Teacher_Cadre person("LiHua", 35, 'M', "JiNan", 6454998, "professor", "assitant", 7500.5);
	person.show();
	system("pause");
	return 0;
}

