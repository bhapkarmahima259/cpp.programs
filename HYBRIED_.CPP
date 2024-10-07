#include<iostream.h>
#include<conio.h>
#include<string.h>
class student{
public:
int id;
char mbno[10];
char name[10];
char add[20];
void set(){
id=1;
strcpy(name,"mahima");
strcpy(add,"rakhunde nagar nagpur");
strcpy(mbno,"7507450903");
}
void dis(){
cout<<"id:"<<id<<" "<<"name:"<<name<<endl<<"add:"<<add<<endl<<"mbno:"<<mbno<<endl;
}
};
class exam:public student{
public:
int paper1,paper2;
void setexam(){
paper1=6;
paper2=8;
}
void disexam()
{
cout<<"paper1:"<<paper1<<" "<<"paper2:"<<paper2<<endl;
}
};
class sports:public student{
public:
int sportsmarks;
void setsports()
{
sportsmarks=15;
}
void dissports()
{
cout<<"sportsmarks:"<<sportsmarks<<endl;
}
};
class result:public sports,public exam{
public:
int totalmarks;
};
void main()
{
clrscr();
result obj;
obj.student::set();
obj.dis();
obj.setexam();
obj.disexam();
obj.setsports();
obj.dissports();
obj.totalmarks=obj.sportsmarks+obj.paper1+obj.paper2;
cout<<"totalmarks:"<<obj.totalmarks;
getch();
}
