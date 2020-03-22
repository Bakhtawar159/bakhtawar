#include<iostream>
using namespace std;
int main()
{int size,a[30],i,j,temp;
int *P;
	cout<<"enter a array size"<<endl;
	cin>>size;
	cout<<"enter array elements"<<endl;
	
	
	for(i=0;i<size;i++)
{
		cin>>a[i];
		
}
//write an array for array index
	for(i=0;i<size;i++)
	{
	temp=a[i];
		*(P+j )=i-1;
	while (*(P+j)>=0&&a[*(P+j)>=temp])
	{a[*(P+j+1)]=a[ *(P+j)];
	j--;
	}
	
	a[*(P+j)]=temp;
}
//for showing array elements
cout<<"after arranging array are"<<endl;
	for(i=0;i<size;i++)
cout<<" "<<*P;
P++;
return 0;
}


