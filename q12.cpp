#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	int a,b,c,max;
	cout<<"Enter values of a, b and c repectively\n";
	cin>>a>>b>>c;
	max=a>b?a>c?a:c:b>c?b:c;
	cout<<"The maximum of three no's is : "<<max;	
}

