#include<iostream>
using namespace std;

double Area;
void AreaofSquare(double S){
    Area = S*S;
}

void AreaofRectangle(double L,double W){
    Area = L*W;

}

void AreaofTriangle(double b, double h){
    Area = 0.5*(b*h);
}


int main (){
 enum shape {Square=1,
              Rectangle,
              Triangle,
              Quit};
   int choice;

         while (true){
       cout<<"Please select the Area of the shape to be calculated"<<endl;
           cout<<"1.Square"<<endl;
           cout<<"2.Rectangle"<<endl;
           cout<<"3.Triangle"<<endl;
           cout<<"4.Quit the program"<<endl;
           cout<<"Enter selection:"<<endl;
           cin>> choice;

           if (choice==Square){
            double S;
            cout<<"Enter the Side of the Square"<<endl;
            cin>>S;
            AreaofSquare(S);
            cout<<"The area of Square is"<<" " <<Area<<endl;
           }

           if (choice==Rectangle){
            double L, W;
            cout<<"Enter the Sides of the rectangle"<<endl;
            cin>>L>>W;
            AreaofRectangle(L,W);
            cout<<"The area of Rectangle is"<<" " <<Area<<endl;
           }

           if (choice==Triangle){
            double b, h;
            cout<<"Enter the Sides of the Triangle"<<endl;
            cin>>b>>h;
            AreaofTriangle(b,h);
            cout<<"The area of Square is"<<" " <<Area<<endl;
           }

           if(choice==Quit){
            cout<<"End of the program"<<endl;
           }
            break; // break from the while loop 
         return 0;
           
         }
        }

