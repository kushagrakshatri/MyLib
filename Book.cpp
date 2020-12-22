#include <stdio.h>
#include <conio.h>

class Book{
	
    char bName;
    char bAuth;
    int bYear;
    char studentName;
    char searchName;

public:
	void createBook() {
		cout<<"Enter Book Name"<<endl;
        gets(bName);
        cout<<"Enter Author's name"<<endl;
        gets(bAuth);
        cout<<"Enter Book Year"<<endl;
        cin>>bYear;
	}

	void showBook() {

		cout<<"Book Name:";
		puts(bName);
		cout<<"Author's Name:";
		puts(bAuth);
		cout<<"Book Year:"<<bYear;

	}

	void modifyBook(bName,bAuth,bYear){
		this.bName = bName;
		this.bAuth = bAuth;
		this.bYear = bYear;
	}

	void bookIssue(){

		cout<<"Book Name:"<<endl;
		gets(bName);
		cout<<"Book Author:"<<endl;
		gets(bAuth);
		cout<<"Book Year:"<<endl;
		cin>>bYear;
		cout<<"Student Name:"<<endl;
		gets(studentName);
	}

	void bookDeposit(){
		cout<<"Book Name:"<<endl;
		gets(bName);
		cout<<"Book Author:"<<endl;
		gets(bAuth);
		cout<<"Book Year:"<<endl;
		cin>>bYear;
		cout<<"Student Name:"<<endl;
		gets(studentName);
	}

	void showIssue(){

		cout<<"Book Name:";
		puts(bName);
		cout<<"Author's Name:";
		puts(bAuth);
		cout<<"Book Year:"<<bYear;
		cout<<"Student Name:";
		puts(studentName);
	}

	void showDeposit(){

		cout<<"Book Name:";
		puts(bName);
		cout<<"Author's Name:";
		puts(bAuth);
		cout<<"Book Year:"<<bYear;
		cout<<"Student Name:";
		puts(studentName);

	}

	int bookSearch(searchName){
        
		    for(int i = 0; i<100; i++){
			if(strcmp(searchName,b[i].bName)==0){
				cout<<b[i].bName<<endl;
				cout<<b[i].bAuth<<endl;
				cout<<b[i].bYear<<endl;
				return i;
			}
			else{
				cout<<"No book found!"<<endl;
			}
		}
		
	}

	void removeBook(){
		char bookName;
		int loc = bookSearch(bookName);
        for(int i = loc; i<=100; i++){
        	 b[loc]=b[loc + 1];
        }
	}



}

class Admin{
	clrscr();
	void adminMenu(){
	int ch1;
	cout<<"ADMIN MENU"<<endl;
	cout<<"1. Issue History"<<endl;
	cout<<"2. Deposit History"<<endl;
	cout<<"3. Book Search"<<endl;
	cout<<"4. Add Book"<<endl;
	cout<<"5. Remove Book"<<endl;
	cout<<"Please enter your choice: "<<endl;
	cin>>ch1;

	switch(ch1){
		case '1': b.showIssue();
		break;
		case '2': b.showDeposit();
		break;
		case '3': b.bookSearch();
		break;
		case '4': b.createBook();
		break;
		case '5': b.removeBook();
	}
}
}

void main(){
	Book b[100];
	int ch2;
	cout<<"MAIN MENU"<<endl;
	cout<<"1. Books Available"<<endl;
	cout<<"2. Issue Book"<<endl;
	cout<<"3. Deposit Book"<<endl;
	cout<<"4. Admin Menu"<<endl;
	cout<<"5. EXIT"<<endl;
	cout<<"Please enter your choice"<<endl;
	cin>>ch2;

	switch(ch2){

		case '1': b.showBook();
		break;
		case '2': b.bookIssue();
		break;
		case '3': b.bookDeposit();
		break;
		case '4': adminMenu();
		break;
		case '5': exit(0);
		default: b.showBook();
	}
}