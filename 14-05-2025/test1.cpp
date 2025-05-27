#include <iostream>

void swap(int array[], int leftIndex, int rightIndex)
{
    if(leftIndex < rightIndex)
    {
        int temp{array[leftIndex]};
        array[leftIndex] = array[rightIndex];
        array[rightIndex] = temp;
        swap(array, leftIndex + 1, rightIndex - 1);
    }

    for(int i = 1; i <= sizeof(array)/sizeof(array[0]); i++)
    {
        if(i % 2 == 0)
        {
            std::cout << i << "\n";
        }
    }
}

int main()
{
    //create an array and populate it with values 3 to 107
    int numArray[105]{};
    for(int i = 3; i <= 107; i++) {
        numArray[i - 3] = i;
    }

    for(int i = 1; i <= sizeof(numArray)/sizeof(numArray[0]); i++)
    {
        if(i % 2 == 0)
        {
            std::cout << i << "\n";
        }
    }

    swap(numArray, 0, 105);
    return 0;
}