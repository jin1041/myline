#include<iostream>
using namespace std;
typedef struct point
{
int x;
int y;
char type;
 }point;               //记录点的坐标（x,y），以及其点类型 
typedef struct
{
long long int a;
long long int b;
long long int c;
}fxy; 
int main()
{
	point points[1000];
	fxy fxys[1000];
	int M,N;
	cin>>M>>N;
	for(int i=0;i<N;i++)
		cin>>points[i].x>>points[i].y>>points[i].type;
	for(int i=0;i<N;i++)
		cin>>fxys[i].a>>fxys[i].b>>fxy[i].c;
	
	for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				type=points[j].type;
				judge=fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y;
				if(points[j].type==A)
					{
							judge1=fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y;
					}
				else if(points[j].type==A)
					{
							judge2=fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y;
					}
				cout<<"TRUE"<<endl;
			}
		}
	 
} 
