#include<iostream.h>
#include<conio.h>
class sub{
public:
int num1,num2,res;
void set()
{
cout<<"enter the num1 and num2:";
cin>>num1>>num2;
}
void cal(){
res=num1-num2;
}
void disres()
{
cout<<"result:"<<res;
}
};
void main(){
clrscr();
sub obj1;
obj1.set();
obj1.cal();
obj1.disres();
getch();
}
