/*Задание 3. Перегрузите countPages: int countPages(int a, int b) и int countPages(int a, int b, int c), возвращающие число страниц двух или трёх книг.
*/

#include <iostream>
#include <cmath>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;
#include <vector>

//Functions
int countPages(int a, int b) {
    cout << "{A call from int countPages(int a, int b)}" << endl;
    return a + b;
}

int countPages(int a, int b, int c) {
    cout << "{A call from int countPages(int a, int b, int c)}" << endl;
    return a + b + c;
}

//Might cause some ambiguity in the code so can be commented out, I just wanted to try doing Args in c++. It's smth far more common and defaultly built-in  on Java//
template <typename... Args>
int countPages(Args... args){
    cout << "{A call from int countPages(Args... args)}" << endl;
    vector<int> numbers = { args... };
    int count = 0;

    for (int num : numbers) {
        count += num;
    }

    return count;
}

int main() {
    //Variables
    int book1 = 120;
    int book2 = 250;
    int book3 = 180;

    //Function calls
    cout << "Pages in two books: " << countPages(book1, book2);

    cout << "\nPages in three books: " << countPages(book1, book2, book3);

    //Can be commented out to avoid ambiguity
    cout << "\nPages in n books: " << countPages(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

    return 0;
}