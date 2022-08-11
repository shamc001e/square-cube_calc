#include <iostream>

using namespace std;

double square(double num){
    int result = 1;
    for(int i = 0; i < 2; i++){
        result = result * num;
    }
    return result;
}

double cube(double bnum){
    int result = 1;
    for(int i = 0; i < 3; i++){
        result = result * bnum;
    }
    return result;
}

int main()
{
    double n;
    cout << "enter number: ";
    cin >> n;
    cout << "square = " << square(n) << endl;
    cout << "cube = " << cube(n) << endl;

    return 0;
}
