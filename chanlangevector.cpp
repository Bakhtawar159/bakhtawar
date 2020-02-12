#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vector1;
	vector<int>vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	cout<<"display vector1"<<endl;
	cout<<vector1.at(0)<<endl;
	cout<<vector1.at(1)<<endl;
   cout<<vector1.size()<<endl;
vector2.push_back(10);
	vector2.push_back(20);
	cout<<"display vector2"<<endl;
cout<<vector2.at(0)<<endl;
	cout<<vector2.at(1)<<endl;
cout<<vector2.size()<<endl;
cout<<"display 2d vector2"<<endl;
vector<vector<int> >vector_2d;
vector1.at(0)=1000;
vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
cout<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(1)<<endl;
	cout<<vector_2d.at(0).at(0)<<endl;
	cout<<vector_2d.at(0).at(1)<<endl;
		cout<<"display vector1"<<endl;
	cout<<vector1.at(0)<<endl;
	cout<<vector1.at(1)<<endl;
   cout<<vector1.size()<<endl;





	
}
