#include <iostream>
using namespace std;

// ====== ФУНКЦИИ ======

int sumAll(int n, int a[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

double average(int n, int a[])
{
    return (double)sumAll(n, a) / n;
}

int sumPositive(int n, int a[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0) s += a[i];
    return s;
}

int sumNegative(int n, int a[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0) s += a[i];
    return s;
}

int sumEvenIndex(int n, int a[])
{
    int s = 0;
    for (int i = 0; i < n; i += 2)
        s += a[i];
    return s;
}

int sumOddIndex(int n, int a[])
{
    int s = 0;
    for (int i = 1; i < n; i += 2)
        s += a[i];
    return s;
}

void findMinMax(int n, int a[], int& minIndex, int& maxIndex)
{
    minIndex = 0;
    maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[minIndex]) minIndex = i;
        if (a[i] > a[maxIndex]) maxIndex = i;
    }
}

int productBetween(int n, int a[])
{
    int minI, maxI;
    findMinMax(n, a, minI, maxI);

    int start = min(minI, maxI);
    int end = max(minI, maxI);

    int prod = 1;

    for (int i = start + 1; i < end; i++)
        prod *= a[i];

    return prod;
}

// сортировка выбором
void selectionSort(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        if (i != min)
            swap(a[i], a[min]);
    }
}



int main()
{
    const int n = 10;
    int mas[n];

    
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    cout << "Sum = " << sumAll(n, mas) << endl;
    cout << "Average = " << average(n, mas) << endl;

    cout << "Sum positive = " << sumPositive(n, mas) << endl;
    cout << "Sum negative = " << sumNegative(n, mas) << endl;

    cout << "Sum even index = " << sumEvenIndex(n, mas) << endl;
    cout << "Sum odd index = " << sumOddIndex(n, mas) << endl;

    int minI, maxI;
    findMinMax(n, mas, minI, maxI);

    cout << "Min index = " << minI << endl;
    cout << "Max index = " << maxI << endl;

    cout << "Product between = " << productBetween(n, mas) << endl;

    // сортировка
    selectionSort(n, mas);

    cout << "Sorted array:\n";
    for (int i : mas)
        cout << i << " ";

    return 0;
}