/*Задание 4. Напишите void showShelf(int shelf, int room = 1), выводящую номер полки и кабинета. Проверьте два вызова.
*/

#include <iostream>
#include <cmath>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;

//Functions
void showShelf(int shelf, int room = 1) {
    if (shelf <= 0){
        cout << "[WARNING] showShelf: Invalid shelf number: " << shelf;
    } else {
        room = room > 0? room : 1;
        cout << "Shelf: " << shelf << "\tRoom: " << room << endl;
    }
    
}

int main() {
    //Function calls
    showShelf(3);
    showShelf(9, -40);

    return 0;
}