
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std; 


//create random integer
int cast() {
    int speedLimit; //assign random int to speedLimit
    srand(time(NULL));
    
        speedLimit = rand() % 65 + 25;
        printf ("The speed limit is: %d\n", speedLimit);
    

    return speedLimit;
}
    //calculate the cost of the fine
    int calculate () {
    //local variables
    double five = 1.05;
    double ten = 1.10;
    double twenty = 1.20;
    double baseFine = 60.25;
    int answer;
    int speed;
    char again = 'Y';
    int speedLimit;
    //while loop to repeat menu
        while (again == 'Y'| again =='y') {
            speedLimit = cast();
        cout << "Please enter the driver's speed: ";
        cin >> speed; //assign speed to variable
        //calculate fine
        if (speed - speedLimit < 5)
            cout << "There was no violation" << endl;
        else if (speed - speedLimit >= 20)
            cout << ("Your fine is: ", baseFine * twenty) << endl;
        else if (speed - speedLimit >= 10)
            cout << ("Your fine is: ", baseFine * ten) << endl;
        else if (speed - speedLimit >= 5)
            cout << ("Your fine is: ", baseFine * five) << endl;
        
        
        cout << "Would you like to enter another violation? (Y or N)";

        cin >> again; //change control variable
    } // end while loop

    cout << "Goodbye!" << endl;
    return 0;


} // main method
    int main()

    {
        
        calculate();

    }
