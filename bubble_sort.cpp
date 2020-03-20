#include <iostream>

using namespace std;

void bubble(int *ptr,int  b )

{

int i,j;

int temp;

for(i=1;i<b;i++)

{

for(j=0;j<b-i;j++)

{

if(*(ptr+j)>*(ptr+j+1))

{

temp=*(ptr+j);

*(ptr+j)=*(ptr+j+1);

*(ptr+j+1)=temp;

}

}

}

}

int main()

{

int array[10];

int i;

int size;

cout << "\nEnter the size of array :";

cin >>size;

cout << "\nEnter the element\n";

for(i=0;i<size;i++)

cin >> array[i];

cout << "\nBefore sorting\n";

for(i=0;i<size;i++)

cout << array[i] << " ";

bubble(array,size);

cout << "\nAfter sorting\n";

for(i=0;i<size;i++)

cout << array[i] << " ";

}
