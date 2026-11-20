/*Задание 2. Напишите void takeBook(int& available), уменьшающую количество книг на 1, если оно положительное.
*/

#include <iostream>
#include <cmath>
#include <chrono> //allows to get system time
#include <ctime> //introduces time_t data type
#include <iomanip> //io to format time output
using namespace std;

//Functions
void takeBook(int& available) {
    if (available > 0) {
        available--;
    } else {
        auto now = chrono::system_clock::now(); //or 'chrono::system_clock::time_point' for auto
        time_t current_time = chrono::system_clock::to_time_t(now);

        cout << "[WARNING] XXX : takeBook: An attempt to take 0th book was made at " << put_time(localtime(&current_time), "%Y-%m-%d %H:%M:%S") << endl;
    }
}

int main() {
    //Variables
    int available = 1;

    takeBook(available);

    cout << "Available books: " << available;

    return 0;
}
