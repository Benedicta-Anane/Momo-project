#include <iostream>
using namespace std;

int main(){
	const string defaultpin="0000";
	int attempts = 0;
	int select;
	char option, Y, N;
	string reference, pin, c_pin, new_pin, number;
	float balance, amount;
	balance = 1000;
	
		cout<<"Welcome to our Mobile Money service"<<endl;
	 	cout<<"1. Authenticate"<<endl;
		cout<<"2. Reset pin"<<endl;
		cout<<"3. Check balance"<<endl;
		cout<<"4. Send money"<<endl;
		cout<<"5. Exit"<<endl;
		cin>>select;
		
		if(select==1){
			do{
				cout<<"Please enter your Pin";
				cin>>pin;
				attempts++;
				if(pin !=defaultpin){
					cout<<"Incorrect pin. Please try again"<<endl;}		
					if(attempts==3){
					cout<<"Maximum attempts reached. Exiting program"<<endl;
					}
				}while(pin!=defaultpin && attempts==3);
			}
		
		else if(select==2){
			cout<<"Are you sure you want to change your pin?"<<endl;
			cout<<" Choose Y/N"<<endl;
			cin>>option;
			if(option=='Y'){
				cout<<"Enter your current pin"<<endl;
				cin>>c_pin;
				if(c_pin==defaultpin){
					cout<<"Enter New Pin"<<endl;
					cin>>new_pin;
					pin==new_pin;
					cout<<"Your New pin is "<<new_pin;	
				}}
			else if (c_pin!=defaultpin){
				cout<<"Incorrect Pin"<<endl;
			}
			else if(option=='N'){
				cout<<"Pin reset cancelled!!"<<endl;
				switch(option){
					break;
				}
			}
			else{
				cout<<"Incorrect choice"<<endl;
			}		
		}
	
	else if(select==3){
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<" "<<endl;
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
	cout<<" "<<endl;
	cout<<"Enter Reference "<<endl;
	cin>>reference;
	cout<<" "<<endl;
	cout<<"Please enter your MM PIN if you wish to transfer GHS"<<amount<<" to "<<number<<endl;
	cin>>pin;
		
	if(pin == defaultpin && amount <= balance){
			cout<<" "<<endl;
			cout<<"Payment made for GHS"<<amount<<" to "<<number<<"."<<endl;
			cout<<"Current balance: GHS "<<balance-amount<<endl;
			cout<<"Available balance: GHS "<<balance-amount<<endl;
			cout<<"Reference: "<<reference<<endl;
			cout<<"Thank you for using MTN Mobile Money";
	}
	else if(amount > balance ){
			cout<<" Insuficient balance "<<endl;
			cout<<"You would require GHS "<<amount-balance<<" in addition to make this transaction successful."<<endl;
	}
	else if( pin!= defaultpin){
			cout<<"Incorrect pin."<<endl; 
			cout<<"Please try again!!"<<endl;
	}}

else if(select==4){
	cout<<"Thank you for using Mobile Money. "<<endl;
	switch(attempts){
		break;
	}}}
					
	

