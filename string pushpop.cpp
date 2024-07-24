#include<iostream>
using namespace std;

int main(){
    string s ;
    cout<<"enter a string";

    getline (cin,s);

    cout<<"enter the word :" ;
    cout<<s<<endl ;

    s.push_back('y');
    cout<<"using push" ;
    cout<<s<<endl ;

    s.pop_back();
    cout<<"using pop :";
    cout<<s<<endl ;

    return 0;

}
