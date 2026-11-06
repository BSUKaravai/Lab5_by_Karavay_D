/*Задание 1. Напишите int pagesRead(int pagesPerDay, int days), возвращающую число прочитанных страниц.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Functions
int pagesRead(int pagesPerDay, int days) {
    return pagesPerDay * days;
}

void cycleHelper(){
    //Variables
    int pages_per_day, days;

    //Assigning values
    do {
        cout << endl << "Please enter a number of pages per day [>=0]: ";
        cin >> pages_per_day;
    } while (pages_per_day < 0);

    do {
        cout << endl << "Please enter a number of days [>=0]: ";
        cin >> days;
    } while (days < 0);

    //Function call
    cout << "Pages read " << "[p/d: " << pages_per_day << ", d: " << days << "]: " << pagesRead(pages_per_day, days) << endl;
}

int main() {
    bool exit = false;
    do{
        cout << "\n\tDo you wish to exit? [1/0]\n\t";
        cin >> exit;
        if (exit){
            break;
        } else {
            cycleHelper();
        }
        
    } while (true);

    return 0;
}