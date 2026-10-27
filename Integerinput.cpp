#include <iostream>
#include <limits>// controls numeric limits

using namespace std;
int input;
int main(){
    while(true){
        cout << "Enter a number between 5 and 10" << endl;
          cin>> input;

         if(cin.fail()) {
            cout<<"invalid input, please input an integer number! "<<endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the rest of the line
    }
        else if(input >=5 && input<=10){
            cout << "your input" << "(" << input << ")" << "has been accepted" << endl;
            break; //exist the loop if the condition is true
        }
         else if(input <5 || input>10){
            cout<<"input out of range, please enter a number between 5 and 10"<<endl;
        
        }
       
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
