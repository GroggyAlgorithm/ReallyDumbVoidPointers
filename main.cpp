#include <iostream>

using namespace std;

int main()
{
    //Initialize int
    int x = 5504;

    //Print main screen and int values
    std::cout << "\nPlaying with dumb void pointers\n" << endl;
    std::cout << x << " : value as an int" << endl;
    std::cout << &x << " : memory value as an int\n" << endl;

    //Cast the int to a void pointer and print the values
    void* y  = &x;
    std::cout << *(int *)y << " : value as a void ptr" << endl;
    std::cout << y << " : memory value as a void ptr\n" << endl;

    //Cast the void pointer to a function pointer and print the values
    void (*func)(void);
    *((void**)&func) = y;
    std::cout << *(int *)(func) << " : value cast as a function ptr" << endl;
    std::cout << (&func) << " : memory value cast as a function ptr\n" << endl;

    //Cast the function pointer back to an int
    int newX = *(int *)(func);
    std::cout << "\nNew X, converted from\nint to void ptr to function and back to int\n: " << newX << endl;

    //Create an array for more void pointer fun!
    int arr[2] = {88,69};
    void* arrg2 = &arr;
    arrg2 = arrg2 + sizeof(int);
    std::cout << "\n\nArrays\nValue 1 in the array: " << arr[0] << endl;
    std::cout << "Value 2 in the array: " << arr[1] << endl;
    std::cout << "Value 2 of the dumb stupid array cast to a void pointer array: " << *(int *)(arrg2) << endl;

    std::cout << "\n\nHelllllloooooo world!" << endl;
    std::cin;
    return 0;
}
