#include<iostream>
#include<fstream>
#include<algorithm>
#include<map>
using namespace std;
class Account
{
private:
        long AccountNo;
        string first_name,last_name;
        long long Mo_number;
        float balance;
public:
      static  long next_ac_number;
      Account(){}
      Account(string firstname,string lastname,long long num,float bal)
      {
          next_ac_number++;
          AccountNo=next_ac_number;
          first_name=firstname;
          last_name=lastname;
          Mo_number=num;
          balance=bal;
      }
      void deposit(float amount)
      {
          balance+=amount;
      }
      void withdrawl(float amount)
      {
           balance-=amount;
      }
      void set_last_ac_number(long next_ac_number)
      {
          next_ac_number=AccountNo;
      }
      long get_Acc_no() {return AccountNo;}
      string get_first_name() { return first_name; }
      string get_last_name() { return last_name; }
      long long get_Mo_number()  { return Mo_number;}
      float get_balance()  { return balance; }
      int get_last_ac_number()  { return next_ac_number; }
      friend ofstream & operator<<(ofstream &of,Account &a);
      friend ifstream & operator>>(ifstream &iff,Account &a);
      friend ostream & operator<<(ostream &out,Account &a);
};
long Account:: next_ac_number=0;
ofstream & operator<<(ofstream &of,Account &a)
{
    of<<a.AccountNo<<endl;
    of<<a.first_name<<endl;
    of<<a.last_name<<endl;
    of<<a.Mo_number<<endl;
    of<<a.balance<<endl;
    return of;
}
ifstream & operator>>(ifstream &iff,Account &a)
{
    iff>>a.AccountNo;
    iff>>a.first_name;
    iff>>a.last_name;
    iff>>a.Mo_number;
    iff>>a.balance;
    return iff;
}
ostream & operator <<(ostream &out,Account &a)
{
    out<<"ACCOUNT NO.:-"<<a.get_Acc_no()<<endl;
    out<<"FIRST_NAME:-"<<a.get_first_name()<<endl;
    out<<"LAST_NAME:-"<<a.get_last_name()<<endl;
    out<<"MOBILE NO.:-"<<a.get_Mo_number()<<endl;
    out<<"BALANCE:-"<<a.get_balance()<<endl;
    return out;
}
class Bank : public Account
{
public:
      map<long,Account> accounts;
      Bank()
      {
          Account ac;
          ifstream infile;
          infile.open("Bank System.txt");
          while(!infile.is_open())
          {
              infile>>ac;
              accounts.insert( pair<long,Account>(ac.get_Acc_no(),ac) );
          }
          Account::set_last_ac_number(ac.get_Acc_no());
          infile.close();
      }
      Account openAccount(string fname,string lname,long long Monum,float bal)
      {
          ofstream outfile;
          Account account(fname,lname,Monum,bal);
          accounts.insert(pair<long,Account>(account.get_Acc_no(),account));
          outfile.open("Bank System.txt",ios::trunc);
          map<long,Account> :: iterator it;
          for(it=accounts.begin();it!=accounts.end();it++)
          {
                outfile<<it->second;
          }
          outfile.close();
          return account;
      }
      Account BalanceInquiry(long Account_no)
      {
          map<long,Account>:: iterator it=accounts.find(Account_no);
          return it->second;
      }
      Account Deposit(long Account_no,float amount)
      {
           map<long,Account>:: iterator it=accounts.find(Account_no);
           it->second.deposit(amount);
           return it->second;
      }
       Account Withdrawl(long Account_no,float amount)
      {
           map<long,Account>:: iterator it=accounts.find(Account_no);
           it->second.withdrawl(amount);
           return it->second;
      }
      void CloseAccount(long Account_no)
      {
           map<long,Account>:: iterator it=accounts.find(Account_no);
           cout<<"Account Deleted "<<endl;
           cout<<it->second<<endl;
           accounts.erase(Account_no);
      }
      void ShowAllAccounts()
      {
           map<long,Account>:: iterator it;
           for(it=accounts.begin();it!=accounts.end();it++)
           {
               cout<<"Account: "<<it->first<<endl;
               cout<<it->second<<endl;
           }
      }
      ~Bank()
      {
           ofstream outfile;
           outfile.open("Bank.data", ios::trunc);
           map<long,Account>:: iterator it;
           for(it=accounts.begin();it!=accounts.end();it++)
           {
               cout<<"Account: "<<it->first<<endl;
               cout<<it->second<<endl;
           }
           outfile.close();
      }
};
int main()
{
    Bank B;
    Account acc;
    int choice;
    string fn,ln;
    long long mn;
    float b;
    long accountno;
    float amount;
do
{
   cout<<"\t\t\t\t\tWELCOME TO THE BANK"<<endl;
   cout<<"\n\n";
   cout<<"\t\tSelect One Option From Below"<<endl;
   cout<<"\t\t1.Open Account"<<endl;
   cout<<"\t\t2.Balance Inquiry"<<endl;
   cout<<"\t\t3.Deposit Money"<<endl;
   cout<<"\t\t4.Withdrawal Money"<<endl;
   cout<<"\t\t5.Close An Account"<<endl;
   cout<<"\t\t6.Show All Accounts"<<endl;
   cout<<"\t\t7.Exit"<<endl;
   cout<<"\n";
   cout<<"Enter Your Choice: "<<endl;
   cin>>choice;
   switch(choice)
   {

    case 1:
        {
            cout<<"Enter Your First Name: ";
            cin>>fn;
            cout<<"Enter Your Last Name: ";
            cin>>ln;
            cout<<"Enter Your Mobile Number: ";
            cin>>mn;
            cout<<"Enter Amount:-";
            cin>>b;
            acc=B.openAccount(fn,ln,mn,b);
            cout<<"\nCongratulation Your Account Was Created"<<endl;
            cout<<acc;
            break;
        }
    case 2:
         {
            cout<<"Enter Your Account No:- ";
            cin>>accountno;
            acc=B.BalanceInquiry(accountno);
            cout<<"Your Account Details Are Below:-"<<endl;
            cout<<acc;
            break;
         }
    case 3:
        {
            cout<<"Enter Your Account No:- ";
            cin>>accountno;
            cout<<"Enter Amount You Want To Deposit:- ";
            cin>>amount;
            acc=B.Deposit(accountno,amount);
            cout<<"Amount Is Successfully  Deposited"<<endl;
            cout<<acc;
            break;
        }
     case 4:
        {
            cout<<"Enter Your Account No:- ";
            cin>>accountno;
            cout<<"Enter Amount You Want To Withdrawn:- ";
            cin>>amount;
            acc=B.Withdrawl(accountno,amount);
            cout<<"Amount Is Successfully  WithDrawn"<<endl;
            cout<<acc;
            break;
        }
     case 5:
        {
            cout<<"Enter Your Account No:- ";
            cin>>accountno;
            B.CloseAccount(accountno);
            cout<<"Your Account Was Closed"<<endl;
            break;
        }
     case 6:
        {
            B.ShowAllAccounts();
            break;
        }
     case 7:
        {
            break;
        }
     default:
        {
            cout<<"Enter Correct Choice"<<endl;
            exit(0);
        }
   }

}while(choice!=7);

  return 0;
}
