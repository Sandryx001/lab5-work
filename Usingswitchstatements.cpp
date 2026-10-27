#include <iostream>
#include <cstdlib>

using namespace std;
   int daysUntilexpiration;

   int main(){
    srand(time(0));
        daysUntilexpiration = rand()%12;

        cout <<"Random day(s) from the range 0-11 picked:" << daysUntilexpiration<<endl;

        switch(daysUntilexpiration){
            case 0:
            cout<<"Your subscrption has expired"<<endl;
               case 1:
            cout<<"Your subscrption has expires within a day! Renew now and save 20%"<<endl;
            break;
            case 2:
            case 3:
            case 4:
            case 5:
            cout<<"Your subscription experes in, Renew and save 10%"<<endl;
            break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
        cout<<"Your subscription expires soon, Renew now!"<<endl;
        break;
        cout << "You have an active subuscrption"<< endl;
        break;       
        }
        return 0;
    }

