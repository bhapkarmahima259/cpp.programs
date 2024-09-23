#include<iostream.h>
#include<conio.h>
class one
{
public:
int a,b;

void set()
{
a=2;
b=3;
clrscr();
cout<<a<<b;
cin>>a>>b;
}
void dis(){
cout<<a<<" "<<b;
}
};
void main()
{
clrscr();
one obj1;
obj1.a=4;
obj1.b=8;
obj1.dis();
getch();
}