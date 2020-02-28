/*只显示步骤，如：
请输入磁盘数量:3
移动3个磁盘的步骤为:
A-->C
A-->B
C-->B
A-->C
B-->A
B-->C
A-->C
*/

#include <iostream>
using namespace std ;

void move(char f,char l)
{cout<<f<<"-->"<<l<<endl;}

void hanoi(int n,char a,char b,char c)
{if (n==1)
	move(a,c);
else 
	{hanoi(n-1,a,c,b);
	move(a,c);
	hanoi(n-1,b,a,c);}
}

 
int main()
{
	int m;
	cout<<"请输入磁盘数量:";
	cin>>m;
	cout<<"移动"<<m<<"个磁盘的步骤为:"<<endl;
	hanoi(m,'A','B','C');
	return 0;
}