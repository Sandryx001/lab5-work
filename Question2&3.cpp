#include <iostream>
#include <cstdlib>

using namespace std;
   int daysUntilexpiration;

   int main(){
    srand(time(0));

    int n = 11;
    for (int i = 0; i<n; i++){
        daysUntilexpiration = rand()%12;

         switch(daysUntilexpiration){
             case 1:
             case 2:
             case 3:
             case 4:
             case 5:
                 //  switch (daysUntilexpiration<=5){
                 //   cout<<"your subscrption expires in, renew now and save 10%";
                 //  }  
                 //  break;

                   case 6:
                   case 7:
                   case 8:
                   case 9:
                   case 10:
                             switch(daysUntilexperation<=10 && daysUntilexpiration>5){
                                cout<<"your subscrption will expire soon! renew now";

                             }

                             switch (daysUntilexpiration==1){
                                cout <<"your subscption ends within a day! renew and save 20%";

                             }
                             default :
                                 cout<<"you have an active subscrption";
                                 break;
             
         }
        }
        int pPointer = nullptr;
          string [] elements = {"B123","C234", "A345", "C15", "B177", "G3003", "C325", "B179" };

          *pPointer = elements;
        
            for (int i = 0; i <*8; i++){
                int [] list = *(pPointer)+ i;

                if (element[1]=="B"){
                    cout<< element;
                    
                }

         }
   }