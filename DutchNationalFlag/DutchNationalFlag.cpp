// DutchNationalFlag.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void SortTheArray(std::vector<int>& arr)
{
    size_t low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
            std::swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else if (arr[mid] == 2)
            std::swap(arr[mid], arr[high--]);
    }
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The numbers of the sorted array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        SortTheArray(vec);

        std::cout << "The sorted array: {";
        for (auto i = vec.cbegin(); i != vec.cend(); ++i)
        {
            if (i != vec.cbegin())
                std::cout << ", ";
            std::cout << *i;
        }
        std::cout << "}" << std::endl;
    }
}
