#include <iostream>
#include <cmath>  //  2.1

using namespace std;

int minArray(const size_t size, int array[]) // 1.1       работает
{
    int min = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}

int maxArray(const size_t size, int array[]) // 1.2       работает
{
    int max = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}

int sumArray(const size_t size, int array[]) // 1.3       работает
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        sum += array[i];

    return sum;
}

long long int multiplication(int x, int y) // 1.4       работает
{
    long long int total = x * y;

    return total;
}

void index(int element, const size_t size, int array[]) // 1.5        работает
{
    for (int i = 0; i <= size; i++)
        if (array[i] == element)
            cout << "Index of element = " << i;
        else
            cout << "-1";
}

bool search(const size_t size, int array[], int number) // 1.6         работает
{
    int iter = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
            return true;
    }

    return false;
}

void print(const size_t size, int array[]) // 1.7           работает
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int arifmet(const size_t size, int array[]) // 1.8          работает
{
    int sum = 0;
    int i = 0;
    for (; i < size; i++)
    {
        sum += array[i];
    }
    int itog = sum / i;

    return itog;
}

int negative(const size_t size, int array[]) // 1.9         работает
{
    int neg = 0;
    for (int i = 0; i < size; i++)
        if (array[i] < 0)
            neg++;

    return neg;
}

int vhozden(const size_t size, int array[], int number) // 1.10         работает
{
    int kolvo = 0;
    for (int i = 0; i < size; i++)
        if (array[i] == number)
            kolvo++;

    return kolvo;
}

int chetn(const size_t size, int array[]) // 1.11           работает
{
    int che = 0;
    for (int i = 0; i < size; i++)
        if (array[i] % 2 == 0)
            che++;

    return che;
}

int positive(const size_t size, int array[]) // 1.12            работает
{
    int pos = 0;
    for (int i = 0; i < size; i++)
        if (array[i] > 0)
            pos++;

    return pos;
}

int nechetn(const size_t size, int array[]) // 1.13         работает
{
    int neche = 0;
    for (int i = 0; i < size; i++)
        if (array[i] % 2 != 0)
            neche++;

    return neche;
}

bool sort(const size_t size, int array[]) // 1.14           работает
{
    int perem = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] >= perem)
        {
            perem = array[i];
        }
        else
        {
            return false;
        }

    return true;
}

int stepen(int number, int step_en) // 2.1          работает
{
    //int itog = 1;
    /*cout << "Enter a number";
    cin >> number;
    cout<<"Enter a stepen";
    cin >> step_en;*/
    /*for (int i = 0; i <= step_en; i++)
        itog *= number;*/

    return pow(number, step_en);
}

unsigned long long int factor(unsigned int number) // 2.2           работает
{
    long long int itog = 1;
    for (int i = 0, number1 = 1; i < number; i++)
    {
        itog *= number1;
        number1++;
    }

    return itog;
}

int sumChifr(int number) // 2.3         работает
{
    int num = number;
    int summa = 0;

    while (num > 0)
    {
        summa += num % 10;
        num /= 10;
    }

    return summa;
}

bool reverse_number(int number) // 2.4      так и не понял, как это должно работать и оно не работает
{
    int itog=0;

    while (number != 0)
    {
        itog = itog * 10 + number % 10;
        number /= 10;
    }

    if (number == itog)
        return true;
    else
        return false;
}

int sum(int number1, int number2) // 2.5            работает
{
    return number1 + number2;
}

bool simple_number(int number) // 2.6           работает
{
    bool aswD;
    int tmp = 0;
    for (int i = 1; i < 10; i++)
        if (number % i == 0)
            tmp++;
    if (tmp > 2)
        aswD = false;
    else
    {
        aswD = true;
    }
    return aswD;
}

bool che_number(int number) // 2.7          работает
{
    bool aswD;
    if (number % 2 == 0)
        aswD = true;
    else
    {
        aswD = false;
    }
    return aswD;
}

int main()
{
    int number;
    const int size = 5;
    //int *array = new int [size];
    int array[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
        array[i] = rand() % 10 + 1;

    cout << "Enter a number: ";
    cin >> number;

    print(size, array);

    //cout << minArray(size, array);
    //cout << maxArray(size, array);
    //cout << sumArray(size, array);
    //cout << multiplication(9, 8);
    //cout << boolalpha << search(size, array, number);
    //cout << arifmet(size, array);
    //cout << negative(size, array);
    //cout << vhozden(size, array, number);
    //cout << chetn(size, array);
    //cout << positive(size, array);
    //cout << boolalpha << sort(size, array);
    //cout << factor(number);
    //cout << sumChifr(number);
    //cout << boolalpha << simple_number(number);
    //cout << boolalpha << che_number(number);

    /*int number1 = 1;
    cout << sum(number, number1);*/

    /*int step;
    cout << "Enter stepen: ";
    cin >> step;
    cout << stepen(number, step);*/

    /*cout << boolalpha << reverse_number(number);
    cout << boolalpha << simple_number(number);
    cout << boolalpha << che_number(number);*/

    //cout << boolalpha << reverse_number(number);

    return 0;
}