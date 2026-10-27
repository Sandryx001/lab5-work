#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream Myfile;
     string filedata="";
    Myfile.open("Sourcefile.txt", ios::in);
    if (Myfile.is_open()){
    while(getline(Myfile, filedata)){
        cout << filedata <<endl;
    } 
    Myfile.close();
    }else {
        cout<<"Failed to open the file";
    }


    //------iii.NUMBER OF VOWELS----

    int vowelcount=0;
    for(int i=0; i<filedata.length(); i++){
        char c = tolower(filedata[i]);
    
        if(c=='a' ||c=='e' || c=='i' || c=='u' || c== 'o')
                    vowelcount++; 
    }
        cout<<" There are "<<vowelcount<<"Voweles in "<< filedata<<"  "<<"text file" <<endl;


        //-----iv.NUMBER OF WORDS BY COUNTING THEIR SPACES

        int wordcount=0;
        bool inword = false;
        for(int i=0; i<filedata.length(); i++){
            if (filedata[i] != ' ' && !inword){
                wordcount++;
                inword=true;
            }else if(filedata[i] == ' '){
                inword = false;
            }
        } 
        cout <<"There are "<<" "<<wordcount<<" "<<"words"<<endl;
        Myfile.close();
    return 0;
}