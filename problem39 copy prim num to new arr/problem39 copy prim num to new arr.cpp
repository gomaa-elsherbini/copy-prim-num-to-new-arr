#include <iostream>
#include <cstdlib>
using namespace std;



int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void fillArrWithRandomNumbers(int arr[100], int& length)
{
    cout<<"How Many Elements of Array?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(1, 100);
}

void addElementArray(int arr[100], int& length, int num)
{
    length++;
    arr[length - 1] = num;
}

bool IsPrimeNumber(int num)
{
    if (num == 1 || num == 2)
       return 1;
    for (int i = 2; i <= round(num / 2); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void copyPrimeNumbersToNewArr(int arr1[100], int arr2[100], int length1, int &length2)
{
    for (int i = 0; i < length1; i++)
    {
        if (IsPrimeNumber(arr1[i]))
            addElementArray(arr2, length2, arr1[i]);
    }
}

void printArray(int arr[100], int length)
{
    cout <<"Array Elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << "\n ";
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], length, length2=0;

    fillArrWithRandomNumbers(arr, length);
    printArray(arr, length);

    copyPrimeNumbersToNewArr(arr, arr2, length, length2);
    printArray(arr2, length2);



    return main();

}