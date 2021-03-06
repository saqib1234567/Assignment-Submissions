//1: Undeclared Variables:
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
cout<<x;
}

//"Huh? Why do I get an error?"
//Ans: you didn't inintialize the variable x 

2:// Uninitialized variables:
#include<iostream>
using namespace std;
int main ()
{
int count=40<<endl;
while(count<100)
{

cout<<count;
count++;
}
return 0;
}

//"Why doesn't my program enter the while loop?"
//Ans: you didnot initialise the count so that is why it was not entering the while loop.

//3: Setting a variable to an uninitialized value:
#include<iostream>
using namespace std;
int main()
{
int a, b;
int sum=0;
cout<<"Enter two numbers to add: ";
cin>>a>>b;
sum=a+b;
cout<<"The sum is: "<<sum;
}
//When Run:
//Enter two numbers to add: 1 3
//The sum is: -1393

//"What's wrong with my program?"
//Ans: the sum were used early now it will produce the write answer.
//4: Using a single equal sign to check equality:
#include<iostream>
using namespace std;
int main()
{
char x='Y';
while(x=='Y' || x=='y')
{
//...
cout<<"Continue? (Y/N)";
cin>>x;
}
return 0;
}

//"Why doesn't my loop ever end?"
//Ans: because the operatoe used was not correct you used assignment operator instead of equal sign 

//5: Undeclared Functions:
#include<iostream>
using namespace std;
void menu();
int main()
{
menu();
  return 0;
}
void menu()
{
cout<<"hello";
}

//"Why do I get an error about menu being unknown?"
//Ans: you were getting the error because you didn't declare the function before main
//6: Extra Semicolons:
#include<iostream>
using namespace std;
int main()
{
for(int x=0; x<100; x++)
cout<<x<<endl;
}
//"Why does it output 100?"
//Ans: No need for the semi colon after the for loop
//7: Overstepping array boundaries
#include <iostream>
using namespace std;
int main()
{
int array[10];
//...
for(int x=0; x<=9; x++)
cout<<array[x]<<endl;
}
//"Why doesn't it output the correct values?"
//Ans: array index always start with zero 

//8: Integer division
#include <iostream>
using namespace std;
int main()
{
//For example:
double half = 1/2;
cout<<half;
float half1 = 1.0/2.0;
cout<<half1;
}
//This code sets half to 0 not 0.5! Why? 
//Ans:Because 1 and 2 are integer constants.


//9: Variable Name Styles

//Take a look at the below program. Can you see anything wrong?

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

//Besides the obviously bizarre choice of having a pet rat, do you notice anything? 
//Ans it will print rat_Name because of strcpy

//10 Misusing the && and || operators:
#include <iostream>
using namespace std;
int main()
{
int value;
do
{
//...
value=10;
  cout<<"hello";
}while(!(value==10) && !(value==20))
}

//"Huh? Even though value is 10 the program loops. Why?"
//Ans: for checking both the conditions we have to use && operator.
