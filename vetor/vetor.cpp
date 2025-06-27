#include <iostream>

using namespace std;

int main()
{
    int size = 0, biggest = 0, i;
    
    cin >> size;
    int value[size];
    
    for (i = 0; i < size; i++){
        cin >> value[i];
    }
    biggest = value[0];
    
    for (i = 1; i < size; i++){
        if (biggest < value[i]){
            biggest = value[i];
        }
    }
    cout << biggest << endl;

    return 0;
}