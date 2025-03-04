// Structure:- user define datatype.store diffter type of like function and variables
// ->= this opreator.when data is pointer for calling we use 'THIS' opreator.
// syn:-

// int main()
// {
    // demo a;
    // a.b;
    // a.show()
// }

// Struct demo{

        // int a;
        // char b
        // string s= "anam" 
        // void show()
        // { cout<<"hello"};


        // [.] -- member opreator


// Self Refernial Structure:- refernial own data. and access another data use '* pointer'

#include <iostream>
using namespace std;

    struct demo{
        int rollno;
        string name;
        char grade;
        struct demo *link;
    };

        int main(){

            demo obj1,obj2, obj3;
            
            obj1.link=NULL;
            obj1.rollno=101;
            obj1.grade='A';

            obj2.link=NULL;
            obj2.rollno=102;
            obj2.grade='A';

            obj3.link=NULL;
            obj1.link=&obj2;
            obj2.link=&obj1;
            obj3.link=&obj1;

            cout<<obj1.link->rollno<<endl;
            cout<<obj2.link->rollno<<endl;
            cout<<obj3.link->grade;

        }





