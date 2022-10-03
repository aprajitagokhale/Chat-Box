//Chat-box Project
#include<Windows.h>
#include<String>
#include <iostream>

using namespace std;

int main()
{    
	int age,choice;
	char feedback;
	string name, inp;
	cout << "Welcome to Chat_box" << endl << endl;
	cout << "Continue/Exit (Y/N)" << endl;
	cin >> feedback;
	system("cls");       //clear screen
	if (feedback == 'Y')   //if user will input Y -continue the program
	{
		cout << "System: "<< "Hii I am Alexa...What's your name?" << endl;
		cin>>name;
		cout << "System: " << "Welcome " << name << endl;
		cout << "System: " << "Please confirm your age." << endl;
		cin >> age;
		cout << "System: " << "Ohkk...So, you are " << age << endl;
		cout << "System: " << "How can I help you " << name << "?" << endl;
		cout << "(Search for topic you want)" << endl;
		cin >> inp;
		cout << "System: " << "you search for " <<"'"<< inp <<"'"<< endl << endl;
		while (1>0)
		{
			cout << "System: " << "Hey, I have some intresting things for you!!" << endl;
			cout << "1.Jokes" << endl;
			cout << "2.News" << endl;
			cout << "3.Play Songs" << endl;
			cout << "4.Watch Funny Videos" << endl;
			cout << "5.Play Games" << endl;
			cout << "6.Exit this Chat-box" << endl << endl;
			cout << "Enter Your Choice" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "What you will call a rose which is going to moon??" << endl;
				cout << "Well it's....Gulabjamun" << endl<<endl;
				break;

			case 2:
				cout << "Top News" << endl;
				cout << "Covid is decreasing throgh out the world" << endl << endl;
				cout << "Stock Market rises upto 10%" << endl << endl;
				cout << "India defeats Srilanka by 3-0 in Test Series" << endl << endl;
				break;

			case 3:
				cout << "Here are some Top-picked Songs for you" << endl;
				cout << "Kun-Faya Kun" << endl << "Daru party" << endl << "Romeo Julliet" << endl<<endl;
				break;

			case 4:
				cout << "Here are some Top-picked Videos for you" << endl;
				cout << "Kapil Sharma funniest episode with SRK" << endl;
				cout << "Sara Ali Khan funn Interview with Karan Johar" << endl<<endl;
				break;

			case 5:
				cout << "Some of the Best Mobile Games are here" << endl;
				cout << "Rummy" << endl << "Pool" << endl << "PUBG" << endl; 
				cout << "Free-Fire" << endl <<"Playing Cards" << endl << endl;
				break;

			case 6:
				cout << "System: " << "Ok Byee " << name <<" See you next time!!"<< endl<<endl;
				exit(0);

			default:
				cout << "Invalid Option" << endl << endl;
				break;
			}
		}
	}
	else        //program will exit
	{
	 cout << "       Thanks For Coming" << endl;
	 cout << "-----------------------------------" << endl;
	 exit(0);                               //if user will input anything other than Y it will exit
	}
	return 0;
}
