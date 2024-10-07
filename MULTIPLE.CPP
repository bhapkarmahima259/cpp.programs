#include<iostream.h>
#include<conio.h>
class student{
public:
int id,mbno[10];
char name[20];
char add[20];
void set()
{
id=1;
name="mahima";
add="rakhunde nagar nagpur";
mbno="7507450903";
}
void dis(){
cout<<id<<" "<<name<<" "<<mbno<<" "<<add<<endl;
}
};
class exam{
public:
int paper1,paper2;
void setexam(){
paper1=6;
paper2=6;
}
void disexam()
{
cout<<paper1<<" "<<paper2<<endl;
}
};
class sports{
public:
int sportsmarks;
void setsports()
{
sportsmarks=15;
}
void dissports()
{
cout<<sportsmarks<<endl;
}
};
class result:public exam,public sports,public student{
public:
int marks;
};

void main()
{
clrscr();
result obj;
obj.set();
obj.dis();
obj.setexam();
obj.disexam();
obj.setsports();
obj.dissports();
getch();
}
