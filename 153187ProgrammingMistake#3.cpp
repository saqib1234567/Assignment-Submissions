//1: Undeclared Variables:
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
cout<<x;
}

"Huh? Why do I get an error?"
 

2: Uninitialized variables:

int count;
while(count<100)
{
cout<<count;
}

"Why doesn't my program enter the while loop?"


3: Setting a variable to an uninitialized value:

int a, b;
int sum=a+b;
cout<<"Enter two numbers to add: ";
cin>>b;
cout<<"The sum is: "<<sum;
When Run:
Enter two numbers to add: 1 3
The sum is: -1393

"What's wrong with my program?"

4: Using a single equal sign to check equality:

char x='Y';
while(x='Y')
{
//...
cout<<"Continue? (Y/N)";
cin>>x;
}

"Why doesn't my loop ever end?"
 

5: Undeclared Functions:

int main()
{
menu();
}
void menu()
{
//...
}

"Why do I get an error about menu being unknown?"

6: Extra Semicolons:

for(int x=0; x<100; x++);
cout<<x;

"Why does it output 100?"

7: Overstepping array boundaries:

int array[10];
//...
for(int x=1; x<=10; x++)
cout<<array[x];

"Why doesn't it output the correct values?"


8: Integer division

For example:
double half = 1/2;

This code sets half to 0 not 0.5! Why? Because 1 and 2 are integer constants.


9: Variable Name Styles

Take a look at the below program. Can you see anything wrong?

#include <stdio.h>
#include <string.h>

main()
{
char CatName[20] = "fluffy";
char dogName[20] = "fido";
char rat_Name[20] = "fester";
int Catage = 3;
int dogs_age = 4;
int ratage = 1;
char myPet[20];
int itsAge;

strcpy(myPet,rat_Name);
itsAge = ratage;
printf("My pet is %s\n",myPet);
}

Besides the obviously bizarre choice of having a pet rat, do you notice anything? 


10 Misusing the && and || operators:

int value;
do
{
//...
value=10;
}while(!(value==10) || !(value==20))

"Huh? Even though value is 10 the program loops. Why?"

