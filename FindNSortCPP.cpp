// FindNSortCPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

const int INT_ARRAY_SIZE = 8;
int findIndexOfInt(int x, int integers[]);

int main()
{
    int ints[] = {1, 20, 42, -80, 0, 10, 20, 5};
    int x = 1000;
    try
    {
        std::cout << findIndexOfInt(x, ints) << "\n";
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    
}

/* Возвращает индекс первого попавшегося в массиве числа, равного заданному */
int findIndexOfInt(int x, int integers[])
{
    int i = 0;
    while (i < INT_ARRAY_SIZE)
    {
        if (integers[i] == x)
        {
            return i;
        }
        i++;
    }
    throw std::exception("Item not found!");
}
