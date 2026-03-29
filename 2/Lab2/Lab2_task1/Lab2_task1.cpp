#include <iostream>
using namespace std;


bool isPrime(int n)
{
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (!isPrime(n))
    {
        cout << "Not superprime\n";
        return 0;
    }

    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            count++;
    }

    if (isPrime(count))
        cout << "Superprime\n";
    else
        cout << "Not superprime\n";

    return 0;
}


/*
int n; потомучто числа небольшие и диапозона хватает
bool isPrime(int n) - функция для проверки простого числа возвращает true если число простое и false если нет
int count = 0; - счетчик для количества простых чисел от 2 до n
for (int i = 2; i <= n; i++) - индекс цикла от 2 до n включительно
*/
