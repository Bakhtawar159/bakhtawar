#include<iostream>
using namespace std;
void getdata(double B[5][7],char A[10]);
double average(double B[5][7],char A[10]);
int main(){

	char n[10];
    double m[5][7];
	getdata(m,n);
    average(m,n);
	return 0;

}

  void getdata(double B[5][7],char A[10])

{

	for(int i=0;i<=9;i++){

		cout<<"Enter the name of runner"<<endl;

		cin>>A[i];

		for(int j=0;j<=6;j++){

	    cout<<"Enter no of miles :"<<endl;

	    cin>>B[i][j];

	}

}}

double average(double B[5][7],char A[10]){

	double sum=0;

	double avg=0;

	int i=0;

	    while(i<=9){

		for(int j=0;j<=6;j++){

	   sum +=B[i][j];

	   avg=sum/7;

}  

	   cout<<"total no of miles by "<<A[i] <<" is:"<<sum<<endl;

	   cout<<"average miles by "<<A[i] <<" is:"<<avg<<endl;

	   cout<<endl;

	   sum=0;

	   i++;

}}
