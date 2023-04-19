#include <iostream>

using namespace std;

int main()
{
    int x = 5504;

    std::cout << x << " : val int" << endl;
    std::cout << &x << " : memval int\n" << endl;

	void* y  = &x;
	std::cout << *(int *)y << " : val void" << endl;
	std::cout << y << " : memval void\n" << endl;

	void (*func)(void);
	*((void**)&func) = y;
	std::cout << *(int *)(func) << " : val func" << endl;
	std::cout << (&func) << " : memval func\n" << endl;

    int newX = *(int *)(func);
    std::cout << "\nNew X: " << newX << endl;

    int arr[2] = {88,69};
    void* arrg2 = &arr;
    arrg2 = arrg2 + sizeof(int);
    std::cout << "Argument 2 of dumb stupid void pointer array: " << *(int *)(arrg2) << endl;

    std::cout << "\n\nHelllllloooooo world!" << endl;
    std::cin;
    return 0;
}
