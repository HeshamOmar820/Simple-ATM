#include <iostream>
#include <string>
using namespace std;

int mainMenu();
int menu();
void Balance_menu();
void withdraw_menu();
void deposit_menu();
void mobile_menu();

double balance= 2500.00; //optional


int main()
{
    
    string ac_number= "12345"; //optional
    string pin= "6789"; //optional too


        //client login page where he asked to enter his account number and password to reach his account
        cout  <<"\t**********************************************************\n" << endl
			  <<" \t\t    \t ------- WELCOME -------\n" << endl 
              <<"\t**********************************************************\n\n"
              <<"\t\t\t\t client LOGIN" << endl
              << "\n\t\t\t Enter Account Number: ";
        cin  >> ac_number;
        cout << "\n\t\t\t Enter PIN: ";
        cin  >> pin;
        cout << "\n";



        //here we check if the entered data was correct or not, if it wasn't, then the client will be asked to enter it again
        while (ac_number != "12345" || pin != "6789") 
    {     
        system ("CLS");  //to clear the screen and new text will be shown
        cout<<"\t\t\t\t USER LOGIN\n" << endl
            <<"\t\t  INVALID ACCOUNT NUMBER OR PIN \n" << endl //that's the new line added which informes the client that his entered data wasn't correct
            << "\n\t\t\t Enter Account Number: ";
			cin  >> ac_number;
			cout << "\n\t\t\t Enter PIN: ";
			cin  >> pin;
			cout << "\n";
    }


            system ("CLS"); //to clear the screen and new text will be shown
            menu();  //calling function to be displayed
}

/*------------------------------------------------------------------------------------------------*/
  int menu(){

    //this selection statment helps us to guide the client to the route he asked for
    //it's better than if statment as we are dealing with limited choices
  switch(mainMenu()){
  	  case 1:
	system("cls");  //to clear the screen and new text will be shown
		Balance_menu(); //calling function to be displayed
		menu(); //also //calling function to be displayed
	  break;
          
	  case 2:
	system("cls");
		withdraw_menu();
		menu(); 
	  break;
	  
	  case 3:
	system("cls");
		deposit_menu();
		menu(); 
	  break;

	  case 4:
		system("cls");
		mobile_menu();
		menu(); 
	  break; 

	  case 5:
		exit(0);
	  break; 

    //if the client entered a number which is not displayed, this message will inform him and take him back to rechoose
	  default:    
		cout <<"\n INVALID ENTRY.... Please Select numbers 1 - 5\n" <<endl <<endl;
		system("pause");
		 menu(); 
	  break;      
          
} //end switch


system("pause");   
return 0;    


}

//functions definition
int mainMenu(){
  
    system("cls"); //to clear the screen and new text will be shown


    int input;

  cout <<"\t____________________________________________\n\n" << endl;
  cout <<"\t welcome Mahmoud Gaafar \n\n" << endl;
  cout <<"\t Please enter the process number \n" << endl
            << "\t\t Press 1. ----->> Balance Inquiry \n" << endl
            << "\t\t Press 2. ----->> Withdrawal \n" << endl
            << "\t\t Press 3. ----->> Deposit \n" << endl
            << "\t\t Press 4. ----->> mobile balance transfer \n" << endl
            << "\t\t Press 5. ----->> Exit \n" << endl;
  cout <<"\t _________________________________________ \n" << endl
            << "\t ENTER PROCESS NUMBER: ";            
  cin >> input;


  return input;
}


//functions definition
  void Balance_menu(){
            //it displays client's current balance
                cout << "\n Your Balance is " << balance <<" $ \n" << endl;
                system ("PAUSE");
                system ("CLS"); //to clear the screen
  }


//functions definition
  void withdraw_menu(){
	 double withdraw = 0.0;

        cout << "\t You have chosen to withdraw money\n" << endl            
              << " Please enter the amount you want to withdraw -- Type 0 to return to menu \n ";
        cin  >> withdraw;
        cout <<"\n";
        system ("cls");                 

            if (withdraw == 0){
			system("cls");
            menu(); //function call
             }  //end if
			else if (withdraw != 0){
        
            if ( withdraw > balance){          
			system ("CLS");  
	        cout << "This value is bigger than your current balance, Please enter a smaller value \n" << endl << "Please enter the amount you want to withdraw \n";
		    cin >> withdraw;
            system ("CLS");  


            if (withdraw == 0){
			system("cls");
			menu(); //function call
             } //end if


			cout << "\n You Have Withdrawn " << withdraw << " $ From your Accout" <<"\n"<< endl;
            balance = balance - withdraw;
			cout << "\n your new balance is " << balance <<" $\n" << endl;
			system ("PAUSE");
			system ("CLS");  
             } //end if

            else {
	        cout << "\n You Have Withdrawn " << withdraw << " $ From your Accout" << endl;
            balance = balance - withdraw;
			cout << "\n your new balance is " << balance <<" $ \n" << endl;
			system ("PAUSE");
			system ("CLS"); 
      } //end else
    }//end else if
  }
  

//functions definition
    void deposit_menu(){
        double deposit = 0.0; 
    //message to remind the client with his choice
        cout << "\t You Have chosen to Deposit Money \n" << endl 
        //asking him to enter the amount
             << " Please Enter Amount You want to Deposit -- Type 0 to return to Menu \n";
        cin  >> deposit;
        cout <<"\n";
        system ("cls");            
    //taking him back to the previous menu
        if (deposit == 0){
        system("cls");
        menu(); 
            }
        //adding the amount to the current blance
        else if (deposit != 0){
        balance= balance + deposit;
        cout << "You Have Successfully added " << deposit << " $ to your Account\n" << endl;
        cout << "your new balance is " << balance << "$ \n" <<endl;    
        system("pause");
        system ("cls");
        }//end else if
  }
//functions definition
	void mobile_menu(){
	double trans = 0.0;
	string phone_num;
        cout << "\t You have chosen to charge your phone \n";
		cout << " \t enter your phone number \n" ;
		cin >> phone_num;
		cout << " Please enter the amount you want to transfer to your phone -- Type 0 to return to menu \n";
		cin  >> trans;
        cout <<"\n";
        system ("cls");                 
            if (trans == 0){
			system("cls");
			menu(); //function call
             }  //end if
            else if (trans != 0){
            if ( trans > balance){          
			system ("CLS");  
	        cout << "This value is bigger than your current balance, Please enter a smaller value \n" << endl << "Please enter the amount you want to transfer to your phone \n";
		    cin >> trans;
            system ("CLS");  

            if (trans == 0){
			system("cls");
			menu(); //function call
             } //end if
			cout << "\n You Have transferred " << trans << " $ From your Accout to " << phone_num <<"\n"<< endl;
            balance = balance - trans;
			cout << "\n your new balance is " << balance <<" $ \n" << endl;
            system ("PAUSE");
            system ("CLS");  
             } //end if
            else {
	        cout << "\n You Have transferred " << trans << " $ From your Accout to " << phone_num << endl;
            balance = balance - trans;
		    cout << "\n your new balance is " << balance <<" $ \n" << endl;
            system ("PAUSE");
            system ("CLS"); 
      } //end else
    }//end else if
}