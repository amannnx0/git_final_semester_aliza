// I have included comments on every steps. You can refer to that to see what is happening


//Including header files
#include<iostream>
#include<fstream>
#include<string>



//decalring the classes here. and we will name the class inside the main function.
class Account_Type_info{
  //making the class public;

  public:

  //defining function for account type
  //additional data can be added by creating new variable and providing data from the main
  std::string acc_info;
  std::string acc_no;
  std::string acc_holder; 
  std::string Cnic;
  float min_balance;
  float interest_rate_acc;
  std::string account_opening_dt;

  
};


int main(){

  //naming classes
  Account_Type_info Saving;
  Account_Type_info Current;


  //declaring required variables for the program
  std::string account_holder;
  std::string account_number;
  std::string CNIC;
  double deposit_amount;
  std::string account_opening_date;
  std::string account_type;
  float minimum_balance=25000;
  float interest_rate=9.6;
  char choice;
  int account_identify;

  //the code below are for Saving Class
  //These data are provided to the variables in the class declared avobr main
  //Additional data can be provided by creating new variable in the class and providing the data

  Saving.acc_info=account_type;
  Saving.acc_no=account_number;
  Saving.acc_holder=account_holder;
  Saving.Cnic=CNIC;
  Saving.min_balance=minimum_balance;
  Saving.account_opening_dt=account_opening_date;
  Saving.interest_rate_acc= interest_rate;

  //The code below are for Current class
  //These data are provided to the variables in the class declared avobr main
  //Additional data can be provided by creating new variable in the class and providing the data

  

  Current.acc_info=account_type;
  Current.acc_no=account_number;
  Current.acc_holder=account_holder;
  Current.Cnic=CNIC;
  Current.min_balance=minimum_balance;
  Current.account_opening_dt=account_opening_date;
  Current.interest_rate_acc=interest_rate;






  

// checking if text file is present or not
  std::fstream out_file{"demo.txt",std::ios::app};
//if text file is not present then the code below will give error statin Error in creating file
  if(!out_file){
    std::cerr<<"\nError in creating file";
    return 1;
  }
//Taking account holder's detail
  std::cout<<"\nEnter the account holder name: ";
  std::getline(std::cin,account_holder);
  out_file<<account_holder<<std::endl;

  std::cout<<"\nEnter your account number: ";
  std::getline(std::cin,account_number);
  out_file<<account_number<<std::endl;

  std::cout<<"Enter CNIC: ";
  std::getline(std::cin,CNIC);
  out_file<<CNIC<<std::endl;

  std::cout<<"\nEnter the amount you want to deposit Rs: ";
  std::cin>>deposit_amount;
  out_file<<deposit_amount<<std::endl;
  minimum_balance+=deposit_amount;

  std::cout<<"\nEnter the date of account Opening";
  std::getline(std::cin,account_opening_date);
  out_file<<account_opening_date<<std::endl;

  if(minimum_balance<=25000){
    account_type="Saving";
    account_identify=1;
  }else{
    account_type="Current";
    account_identify=0;
  }

  //asking the user if he/she want to see the data or not. This code will only work if the enterted text is small y
  std::cout<<"\nDo you want to get the details printed?[y/n]"<<std::endl;
  std::cin>>choice;

  if(choice=='y'){
  std::fstream in_file;

  if(account_identify=1){
  std::cout<<"\nThe details are as following:"<<std::endl;
  std::cout<<"\nAccount holder's name:";
  in_file>>account_holder;
  std::cout<<account_holder<<std::endl;

  std::cout<<"\nAccount number:";
  in_file>>account_number;
  std::cout<<account_number<<std::endl;

  std::cout<<"\nCNIC: ";
  in_file>>CNIC;
  std::cout<<CNIC<<std::endl;

  std::cout<<"\nAccount Opening Date:";
  in_file>>account_opening_date;
  std::cout<<account_opening_date<<std::endl;

  std::cout<<"\nAccount Type:";
  in_file>>account_type;
  std::cout<<account_type<<std::endl;

  std::cout<<"\nAccount Balance Rs:";
  in_file>>minimum_balance;
  std::cout<<minimum_balance<<std::endl;
  std::cout<<"\nThree month interest rate:9.6%";
  std::cout<<"\nOne year interest rate:9.6%";
  }else{
  std::cout<<"\nThe details are as following:"<<std::endl;
  std::cout<<"\nAccount holder's name:";
  in_file>>account_holder;
  std::cout<<account_holder<<std::endl;

  std::cout<<"\nAccount number:";
  in_file>>account_number;
  std::cout<<account_number<<std::endl;

  std::cout<<"\nCNIC: ";
  in_file>>CNIC;
  std::cout<<CNIC<<std::endl;

  std::cout<<"\nAccount Opening Date:";
  in_file>>account_opening_date;
  std::cout<<account_opening_date<<std::endl;

  std::cout<<"\nAccount Type:";
  in_file>>account_type;
  std::cout<<account_type<<std::endl;

  std::cout<<"\nAccount Balance Rs:";
  in_file>>minimum_balance;
  std::cout<<minimum_balance<<std::endl;
    
  }

  }else{
    std::cout<<"\nNo problem then. Please do visit later";
  }
  



  return 0;
}
