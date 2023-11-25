#include <iostream>
using namespace std;
int main(){
    float rad;
    cout<< "Enter the radius of the cylinder";
    cin>> rad;
    float height;
    cout<< "Enter the height of the cylinder";
    cin>> height;
    float volume = 3.14 * rad * rad * height;
    cout<< volume;
}