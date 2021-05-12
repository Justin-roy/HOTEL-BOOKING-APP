#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Range();
class Hotel
{
public:
    string Name;
    string Password;
    void Login()
    {
    string n,p;
    if(Name.empty())
    {
      cout<<"\n\n\t\tAccount Not Created\n"<<endl;
    }
    else{
    cin.ignore();
    cout<<"Enter Your Full Name: ";
    getline(cin,n);
    cout<<"Enter Your Password: ";
    cin>>p;
    if(p==Password)
    {
       string state,city;
       cout<<"\n\t\tEnter Your Location\n\n";
       cout<<"Enter Your State: ";
       cin>>state;
       cout<<"Enter Your City: ";
       cin>>city;
       Range();

    }
    else
        cout<<"\n\tWrong Password";
    }
    }
protected:
private:
};
void Select_Hotel_Price(int c,int Price)
{
   string s[10] = {"OYO HOTEL",
          "MAURYA HOTEL",
              "PATLIPUTRA HOTEL",
              "CHANAKYA HOTEL",
            "REPUBLIC HOTEL",
               "SAMRAT INTERNATIONAL HOTEL",
              "NIRANJANA HOTEL",
               "SHASHI INTERNATIONAL HOTEL",
             "SATKAR INTERNATIONAL HOTEL",
              "TATHAGAT INTERNATIONAL HOTEL"};
   int range;
   string pr[4] = {"(8k to 10k)","(6k to 8k)","(2k to 5k)","(500 to 1k)"};
   cout<<"\nEnter Your Price Between This Range "<<pr[Price-1]<<": ";
   cin>>range;
   int R,op;
   if(range<=10000 && range>=8200)
   {
       int ch;
       cout<<"\nSelect Rating"<<endl;
       cout<<"1. 6 Star"<<endl;
       cout<<"2. 5 Star"<<endl;
       cout<<"3. 4 Star"<<endl;
       cout<<"Enter Your Choice: ";
       cin>>ch;
       system("cls");
       switch (ch)
       {
       case 1:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 315 + 100;//100 For Ac
                else
                Gst = range + 315 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5420"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 205;
                else
                Gst = range + 205;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #1420"<<endl;
               system("Pause>0");
            }
           break;
       case 2:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 235 + 100;//100 For Ac
                else
                Gst = range + 235 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5910"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 195;
                else
                Gst = range + 195;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #1328"<<endl;
               system("Pause>0");
            }
           break;
       case 3:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 203 + 100;//100 For Ac
                else
                Gst = range + 203 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5020"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 175;
                else
                Gst = range + 175;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #1400"<<endl;
               system("Pause>0");
            }
           break;
       default:cout<<"Invalid Input";
           break;
       }

   }
   else if(range<=8000 && range>=6000)
   {
       int ch;
       cout<<"\nSelect Rating"<<endl;
       cout<<"1. 5 Star"<<endl;
       cout<<"2. 4 Star"<<endl;
       cout<<"3. 3 Star"<<endl;
       cout<<"Enter Your Choice: ";
       cin>>ch;
       system("cls");
       switch (ch)
       {
       case 1:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 195 + 100;//100 For Ac
                else
                Gst = range + 195 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #4430"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 125;
                else
                Gst = range + 125;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #6420"<<endl;
               system("Pause>0");
            }
           break;
       case 2:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 150 + 100;//100 For Ac
                else
                Gst = range + 150 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #8429"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 112;
                else
                Gst = range + 112;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #1129"<<endl;
               system("Pause>0");
            }
           break;
       case 3:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 125 + 100;//100 For Ac
                else
                Gst = range + 125 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #0420"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 95;
                else
                Gst = range + 95;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #9490"<<endl;
               system("Pause>0");
            }
           break;
       default:cout<<"Invalid Input";
           break;
       }
   }
   else if(range<=5000 && range>=2000)
   {
       int ch;
       cout<<"\nSelect Rating"<<endl;
       cout<<"1. 4 Star"<<endl;
       cout<<"2. 3 Star"<<endl;
       cout<<"3. 2 Star"<<endl;
       cout<<"Enter Your Choice: ";
       cin>>ch;
       system("cls");
       switch (ch)
       {
       case 1:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 105 + 100;//100 For Ac
                else
                Gst = range + 105 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #0710"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 75;
                else
                Gst = range + 75;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #1819"<<endl;
               system("Pause>0");
            }
           break;
       case 2:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 85 + 100;//100 For Ac
                else
                Gst = range + 85 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5810"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 55;
                else
                Gst = range + 55;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #0190"<<endl;
               system("Pause>0");
            }
           break;
       case 3:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 65 + 100;//100 For Ac
                else
                Gst = range + 65 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #9329"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 45;
                else
                Gst = range + 45;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #0820"<<endl;
               system("Pause>0");
            }
           break;
       default:cout<<"Invalid Input";
           break;
       }
   }
   else{
    int ch;
       cout<<"\nSelect Rating"<<endl;
       cout<<"1. 3 Star"<<endl;
       cout<<"2. 2 Star"<<endl;
       cout<<"3. 1 Star"<<endl;
       cout<<"Enter Your Choice: ";
       cin>>ch;
       system("cls");
       switch (ch)
       {
       case 1:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 48 + 100;//100 For Ac
                else
                Gst = range + 48 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #3990"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 28;
                else
                Gst = range + 28;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5523"<<endl;
               system("Pause>0");
            }
           break;
       case 2:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 30 + 100;//100 For Ac
                else
                Gst = range + 30 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5355"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 20;
                else
                Gst = range + 20;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #5622"<<endl;
               system("Pause>0");
            }
           break;
       case 3:
            cout<<"How Many Room You Want: ";
            cin>>R;
            cout<<"Press 1 For AC And Press 2 For NON-AC: ";
            cin>>op;
            if(op==1)
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 25 + 100;//100 For Ac
                else
                Gst = range + 25 + 100;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #6030"<<endl;
               system("Pause>0");
            }
            else
            {
                int Gst;
                if(R>=2)
                Gst = (R*range) + 15;
                else
                Gst = range + 15;
               cout<<"\n\n\t\tPress Enter To View Bill\n\n";
               system("pause>0");
               cout<<"\nHotel Name is: "<<s[c-1]<<endl;
               cout<<"Booked Room: "<<R<<endl;
               cout<<"NON-AC Room"<<endl;
               cout<<"Total Amount (Include Gst+Tax) = Rs."<<Gst<<endl;
               cout<<"Room Id is: #1120"<<endl;
               system("Pause>0");
            }
           break;
       default:cout<<"Invalid Input";
           break;
       }
   }
}
void Range()
{
       int opt,c;
       cout<<"\n\t\tSelect Your Range\n\n";
       cout<<"1. (8k to 10k)"<<endl;
       cout<<"2. (6k to 8k)"<<endl;
       cout<<"3. (2k to 5k)"<<endl;
       cout<<"4. (500 to 1k)"<<endl;
       cout<<"Choose Your Option: ";
       cin>>opt;
       system("cls");
       switch (opt)
       {
       case 1:cout<<"\n\t\tHotel Showing Below\n\n";
              cout<<"1. OYO HOTEL"<<endl;
              cout<<"2. MAURYA HOTEL"<<endl;
              cout<<"3. PATLIPUTRA HOTEL"<<endl;
              cout<<"4. CHANAKYA HOTEL"<<endl;
              cout<<"5. REPUBLIC HOTEL"<<endl;
              cout<<"6. SAMRAT INTERNATIONAL HOTEL"<<endl;
              cout<<"7. NIRANJANA HOTEL"<<endl;
              cout<<"8. SHASHI INTERNATIONAL HOTEL"<<endl;
              cout<<"9. SATKAR INTERNATIONAL HOTEL"<<endl;
              cout<<"10. TATHAGAT INTERNATIONAL HOTEL"<<endl;
              cout<<"Enter Your Choice: ";
              cin>>c;
              Select_Hotel_Price(c,opt);
           break;
       case 2:cout<<"\n\t\tHotel Showing Below\n\n";
              cout<<"1. OYO HOTEL"<<endl;
              cout<<"2. MAURYA HOTEL"<<endl;
              cout<<"3. PATLIPUTRA HOTEL"<<endl;
              cout<<"4. CHANAKYA HOTEL"<<endl;
              cout<<"5. REPUBLIC HOTEL"<<endl;
              cout<<"6. SAMRAT INTERNATIONAL HOTEL"<<endl;
              cout<<"7. NIRANJANA HOTEL"<<endl;
              cout<<"8. SHASHI INTERNATIONAL HOTEL"<<endl;
              cout<<"Enter Your Choice: ";
              cin>>c;
              Select_Hotel_Price(c,opt);
           break;
       case 3:cout<<"\n\t\tHotel Showing Below\n\n";
              cout<<"1. OYO HOTEL"<<endl;
              cout<<"2. MAURYA HOTEL"<<endl;
              cout<<"3. PATLIPUTRA HOTEL"<<endl;
              cout<<"4. CHANAKYA HOTEL"<<endl;
              cout<<"5. REPUBLIC HOTEL"<<endl;
              cout<<"Enter Your Choice: ";
              cin>>c;
              Select_Hotel_Price(c,opt);
           break;
       case 4:cout<<"\n\t\tHotel Showing Below\n\n";
              cout<<"1. OYO HOTEL"<<endl;
              cout<<"2. MAURYA HOTEL"<<endl;
              cout<<"3. PATLIPUTRA HOTEL"<<endl;
              cout<<"Enter Your Choice: ";
              cin>>c;
              Select_Hotel_Price(c,opt);
           break;
       default:cout<<"Wrong Input";
           break;
       }
}
int main()
{
    Hotel st;
    int ch;
    do{
    cout<<"\n\n\t\tWelcome To Our Dream Hotel\n\n";
    cout<<"1. Create Account"<<endl;
    cout<<"2. Login"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"\nChoose Your Option: ";
    cin>>ch;
    system("cls");
    switch (ch)
    {
    case 1:long long int Mob;
    cout<<"\n\t\tEnter Your Detail...\n\n";
    cin.ignore();
    cout<<"Enter Your Full Name: ";
    getline(cin,st.Name);
    cout<<"\nEnter Your Mobile Number: ";
    cin>>Mob;
    cout<<"\nEnter Your Password: ";
    cin>>st.Password;
    cout<<"\n\t\tAccount Created..\n\n";
        break;
    case 2:st.Login();
        break;
    }
    }while(ch!=3);
    cout<<"\n\t\tThanks For Visiting Dream Hotel Have A Great Day!\n";
    system("pause>0");
return 0;
}
