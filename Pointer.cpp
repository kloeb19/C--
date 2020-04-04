#include <iostream>
#include <string.h>
using namespace std;

//character to reverse
char* reverse( char* theName)
{
    //two pointers to point to start and end of string
   char* start = theName;
   char* end = start + strlen(theName) - 1;

    //check if start is less than end
    while (end > start)
    {
        char placeHold = *start;
        *start = *end;
        *end = placeHold;

        start++; //increment start
        end--; //decrement end
    }
    return theName;
}
int main() //main function to print char pointer 
{
    char name[25] = "John Doe";
    cout << name << endl; // print
    cout << reverse(name) << endl; // reverse
    cout << reverse(name) << endl; //re reverse
    return (0);
  
   
}


