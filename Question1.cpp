#include <iostream>
#include <cstdlib>//funtion for rand() amd srand()

using namespace std;
int daysUntilexpiration;

int main (){
  srand(time(0));
  int n = 11; //number of random values i want

     daysUntilexpiration = rand()%12;
    
    if (daysUntilexpiration==0){
        cout<<"Your substription has expired!"<<endl;
    }
        else if (daysUntilexpiration==1){
            cout <<"your subscription expires within a day, Renew and save 20 %"<<endl;

        }
        else if (daysUntilexpiration <=5 ){
            cout <<"your subscrption expires within"<< daysUntilexpiration <<"days, Renew now annd save 10%"<<endl;

        }
        else if (daysUntilexpiration <=10 && daysUntilexpiration>5){
            cout<<"your subscription will expire soon, Renew now"<<endl;
        }
        else if(daysUntilexpiration>11){
            cout<<"you have an active subscription"<<endl;
            
        }

return 0;
}
