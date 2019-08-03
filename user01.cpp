#include <iostream>
#include <string>
using namespace std;
int main()
{
	char a1;
	int password1,password2;
	string user01,user02;
	 cout<<"================menu================\n";

	 do{
		 cout<<"1.Register\n";
		 cout<<"2.Login\n";
		 cout<<"Q.Exit Program\n";
		 cout<<"Enter Menu :";
		 cin>>a1;
		 if (a1 == '1') {
	 cout<<"==============Register==============\n";
     cout<<"User :";
	 cin>> user01;

	 cout<<"Password :";
	 cin>> password1;
	 cout << endl;
		 }
		 else if (a1 == '2')
		 {
			 cout<<"===============Login================\n";
			 cout<<"Username : ";
			 cin>>user02;
			 cout<<"Password :";
			 cin>>password2;
			 cout << endl;
         if (user02==user01 && password2==password1){
					cout << "Username or password correct ^___^ \n\n";
		 }
		 else {
		 
		  do{
			  cout<<"!!!!Username or password incorrect Please try again!!!!\n\n";
			 cout<<"Username : ";
			 cin>>user02;
			 cout<<"Password :";
			 cin>>password2;
		 }while (user02 != user01 , password2 != password1);
		  cout << "Username or password correct ^___^ \n\n";}
		 }
	 }while (a1 != 'q' );
	  cout<<"=============EndProgram=============\n";
	  cout<<"Exit program.........."<<endl;

	  return(0);}
