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
	char type;
	int flag=1;
	int judge,judge1,judge2;
	point points[1000];
	fxy fxys[1000];
	int M,N;
	cin>>M>>N;
	for(int i=0;i<M;i++)
		cin>>points[i].x>>points[i].y>>points[i].type;
	for(int i=0;i<N;i++)
		cin>>fxys[i].a>>fxys[i].b>>fxys[i].c;
	
	for(int i=0;i<N;i++)
		{
			flag=1;
			for(int j=1;j<M;j++)
			{
				type=points[0].type;
				judge=fxys[i].a+fxys[i].b*points[0].x+fxys[i].c*points[0].y;
					if(type=='A'&&judge>0)
						if(points[j].type=='A')
							{
								if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)<0)  
								{
									cout<<"No"<<endl;
									flag=0;
									break;
								}
							}
						
						else if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)>0)
							{
								cout<<"No"<<endl;
								flag=0;
								break;
							}
							
					 if (type=='A'&&judge<0)
						if(points[j].type=='A')
						{
							if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)>0)  
								{
									cout<<"No"<<endl;
									flag=0;
									break;
								}
						}
						else if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)<0)
							{
								cout<<"No"<<endl;
								flag=0;
								break;
							}
							
					if(type=='B'&&judge>0)
						if(points[j].type=='A')
						{
							if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)>0)  
								{
									cout<<"No"<<endl;
									flag=0;
									break;
								}
						}
						else if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)<0)
							{
								cout<<"No"<<endl;
								flag=0;
								break;
							}
							
					if(type=='B'&&judge<0)
						if(points[j].type=='A')
						{
							{
							if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)<0)  
								{
									cout<<"No"<<endl;
									flag=0;
									break;
								}
							}
						}
						else if((fxys[i].a+fxys[i].b*points[j].x+fxys[i].c*points[j].y)>0)
							{
								cout<<"No"<<endl;
								flag=0;
								break;
							}
				
			}
			if(flag) cout<<"Yes"<<endl;
		}
}
