#include<iostream.h>
#include<conio.h>
class one
{
public:
int a,b;
clrscr();
void set(int x,int y){
a=x;
b=y;
}
void display()
{
cout<<a<<b;
}
void main()
{
one obj1;
obj1.set(2,4);
obj1.display();

}
getch();
}
