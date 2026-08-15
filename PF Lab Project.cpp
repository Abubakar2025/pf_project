#include<iostream>
//#include<cmath>
#include<string>
#include<windows.h>
#include<ctime>

using namespace std;

void creat_account(void);
void view_account_details(void);
void delete_account(void);
void deposit(void);
void withdraw(void);
void transfer(void);
void check_balance();
void apply_loan();
void loan_repayment(void);
int change_password();
void feedback(void);
void timer();  // Declaration of all functions...


long long pin=12345678;
int OTP=1122;


int main()
{
		//	system("color B4");
	int choise;

	do
	{
	cout<<"<--------- Main Menu --------->"<<endl
	<<"Enter 1 to creat new account "<<endl
	<<"Enter 2 to view your account details"<<endl	
	<<"Enter 3 to delete the account "<<endl
	<<"Enter 4 for deposit money"<<endl
	<<"Enter 5 for withdraw money "<<endl
	<<"Enter 6 for money transaction "<<endl
	<<"Enter 7 to check your current balance "<<endl
	<<"Enter 8 for application of loan  "<<endl
	<<"Enter 9 to return the loan "<<endl
	<<"Enter 10 change the password "<<endl
	<<"Enter 11 to give us feedback "<<endl;
	
	cin>>choise;
	
	
	switch(choise)
	{
	case 1:
	creat_account();
	break;
	case 2:
	view_account_details();
	break;
	case 3:
	delete_account();
	break;
	case 4:
	deposit();
	break;
	case 5:
	withdraw();
	break;
	case 6:
	transfer();
	break;
	case 7:
	check_balance();
	break;
	case 8:
	apply_loan();
	break;
	case 9:
	loan_repayment();
	break;
	case 10:
	change_password();
	break;
	case 11:
	feedback();
	break;
	
	default:
		cout<<"Invalid Choise------!";	
	}
	
	}while(choise!=0);
	
	cout<<"\nThanks for using this bank. Good bye...";
	return 0;
    }
    
    
void timer()
{
	for(int count=9;count>=0;count--)
	{
		cout<<"\b"<<count;
		Sleep(1000);
	}
}



void creat_account()
{
	string first,last,cnic,phone;
	int otp;
	cout<<"\n\nEnter your ";
	getline(cin,first);
	cout<<"name : ";
	getline(cin,last);
	cout<<"\nEnter your CNIC No : ";
	getline(cin,cnic);
	cout<<"\nEnter your phone number : ";
	getline(cin,phone);
	a:
	cout<<"\nEnter the OTP code after the given time :    ";
	timer();
	cout<<endl<<"Enter : ";
	cin>>otp;
	if(otp==OTP)
	{
	cout<<"Congratulation you creat a new account Successfully...!\n"<<endl;
	}
	else
	{
		cout<<"Incorect OTP , try again..."<<endl;
		goto a;
	}
	Sleep(1000);
}



void view_account_details()
{
	a:
	int p;
	cout<<"\n\nEnter your Password : ";
	cin>>p;
	if(p==pin)
	{
		cout<<"Your current balance : 165375 "<<endl;
		cout<<"Tax deduction : 1243\n\n"<<endl;
	}
	else
	{
		cout<<"Incorrect password....!"<<endl<<"Try again..."<<endl;
		goto a;
	}
	Sleep(1000);
}


void delete_account()
{
	int cnic,phone,otp;
	cout<<"\n\nEnter your CNIC No : ";
	cin>>cnic;
	cout<<"Enter your phone number : ";
	cin>>phone;
	a:
	cout<<"Enter the OTP code after the given time : ";
	timer();
	cout<<endl<<"Enter : ";
	cin>>otp;
	if(otp==OTP)
	{
	cout<<"Account deactivate successfully...!\n\n"<<endl;
	}
	else
	{
		cout<<"Incorect OTP , try again...\n";
		goto a;
	}
	Sleep(1000);
}



void deposit()
{
		int amount,p;
	a:
	cout<<"\n\nEnter you Password : ";
	cin>>p;
	if(p==pin)
	{
	cout<<"Enter the amount you want to add : ";
	cin>>amount;
	cout<<amount<<" add to your account successfully...!\n\n"<<endl;
	}
	else
	{
		cout<<"Incorrect password....!"<<endl<<"Try again..."<<endl;
		goto a;
	}
	Sleep(1000);
}



void withdraw()
{
	a:
	int p,amount;
	cout<<"\n\nEnter your Pin : ";
	cin>>p;
	if(p==pin)
	{
		cout<<"Please enter the amount you want to withdraw : ";
		cin>>amount;
		cout<<amount<<" Withdaw successfully...!\n\n"<<endl;
	}
	else
	{
		cout<<"Incorect password...!  try again..."<<endl;
		goto a;
	}
	Sleep(1000);
}



void transfer()
{
	string bank;
	int iban,p,amount;
	cout<<"\n\nEnter the bank name in which you want to send money : ";
	cin>>bank;
	cout<<"Enter reciever's IBAN number ";
	cin>>iban;
	cout<<"Enter the amount : ";
	cin>>amount;
	a:
	cout<<"Enter your pin : ";
	cin>>p;
	if(p==pin)
	{
		cout<<amount<<" trnsfered to the "<<iban<<" successfully...!\n\n";
	}
	else
	{
		cout<<"Incorect password...!  try again..."<<endl;
		goto a;
	}
	Sleep(1000);
}



void check_balance()
{
	srand(time(0));
	int a = rand() % 1000001;
	cout<<"Your remaning balance is "<<a<<endl;
	Sleep(1000);
}


void apply_loan()
{
	string name,phone,gname,gphone;
	int cnic,otp,gcnic,gotp;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your CNIC number : ";
	cin>>cnic;
	cout<<"Enter Your phone number : ";
	cin>>phone;
	cout<<"\nEnter the OTP code after the give time : ";
	timer();
	a:
	cout<<"\nEnter Now : ";
	cin>>otp;
	if(otp==OTP)
	{
		cout<<"Enter your guarantor's name : ";
		cin>>gname;
		cout<<"Enter guarantor's CNIC number : ";
		cin>>gcnic;
		cout<<"Enter guarantor's phone number : ";
		cin>>gphone;
		b:
		cout<<"Enter the OTP code after the give time : ";
		timer();
		cout<<"\nEnter Now : ";
		cin>>gotp;
		if(gotp==OTP)
		{
			long int amount ;
			cout<<"Enter the your required amount between 10,000 to 100,000 : ";
	c:		cin>>amount;
			if(amount<10000)
			{
				cout<<"\nPlease increase the amount : ";
				goto c;
			}
			else if(amount>100000)
			{
				cout<<"\nPlease decrease the amount : ";
				goto c;
			}
			else
			{
				cout<<"\nYour request is in progress... Please wait for  ";
				timer();
				cout<<" second ";
				cout<<"\nCongratulations... you recieve "<<amount<<" Rs successfully...\n\n";
			}
		}
			else
			{
				cout<<"Incorect OTP...! try again .";
				goto b;
			}
		}
	else
	{
		cout<<"\nIncorect OTP...! try again .\n";
		goto a;
	}
}





void loan_repayment()
{
	string name,cnic,retrn;
	int p;
	cout<<"Enter your user name :";
	cin>>name;
	cout<<"Enter you cnic number : ";
	cin>>cnic;
	cout<<"Enter amount you return : ";
	cin>>retrn;
	a:
	cout<<"Now enter your password : ";
	cin>>p;
	if(p==pin)
	{
		cout<<"\nThanks for using our loan system .\n";
	}
	else
	{
		cout<<"\nIncorect passord...! please try again...\n";
		goto a;
	}
}




int change_password()
{
	int pass;
	cout<<"Enter new password : ";
	cin>>pass;
	pin=pass;
	return pin;
}




void feedback()
{
	string feed;
	cout<<"Enter your feedback on using this bank : ";
	getline(cin,feed);
	getline(cin,feed);
	cout<<"\nThank you for give us you precoius feedback .\n";
}
