﻿#include <iostream>
#include <algorithm>
#include <string>
#include < cmath >
#include <locale>

using namespace std;
//Задание 1 сумма всех четных чисел
/*
int sumchet(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int n;
    setlocale(LC_ALL, "RU");
    cout << "Введите число n";
    cin >> n;
    int result = sumchet(n);
    cout << "сумма всех четных чисел от 1 до n = "<< result;
}*/
//Задание 2 проверка на полидром
/* void polidrom(string n) {
    bool check = false;
    int j = n.length() - 1;
    for (int i = 0; i < j; i++)
    {
        if (n[i] == n[j])
        {
            check = true;
        }
        else {
            break;
        }

    }
    if(check == true)
    cout << "слово явлется полидромом " ;
    else
    cout << "слово  не явлется полидромом ";
}
int main()
{
    string n;
    setlocale(LC_ALL, "RU");
    cout << "Введите слово n\n";
    cin >> n;
    polidrom(n);
}
*/
//Задание 3 нахождение минимальной и максимальной цифры
/*
string findMinMaxDigits(int inputNum) {
    int minDigit = to_string(inputNum)[0] - '0';
    int maxDigit = to_string(inputNum)[0] - '0';
    char currentChar;
    int digitValue;

    for (int i = 0; i < to_string(inputNum).length(); i++) {
        currentChar = to_string(inputNum)[i];
        digitValue = int(currentChar) - '0';
        if (digitValue < minDigit) {
            minDigit = digitValue;
        }
    }

    for (int i = 0; i < to_string(inputNum).length(); i++) {
        currentChar = to_string(inputNum)[i];
        digitValue = int(currentChar) - '0';
        if (digitValue > maxDigit) {
            maxDigit = digitValue;
        }
    }

    return to_string(minDigit) + to_string(maxDigit);
}
int main() {
    setlocale(LC_ALL, "RU");

    int userInput;

    cout << "Введите число n: " << endl;
    cin >> userInput;
    cout << findMinMaxDigits(userInput) << endl;
}
*/
//Заданиние 4 перевод числа в римские числа
/*void converter(int n) {
    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100 % 10;
    int thousands = n / 1000 % 10;
    switch (thousands)
    {


        case 1:
            cout << "M";
        break;
        case 2:
            cout << "MM";
        break;
        case 3:
            cout << "MMM";
        break;


        default:

        break;
    }
    switch (hundreds)
    {
    case 1:
        cout << "C";
        break;
    case 2:
            cout << "CC";
            break;
    case 3:
        cout << "CCC";
        break;
    case 4:
        cout << "CD";
        break;
    case 5:
        cout << "D";
        break;
    case 6:
        cout << "DC";
        break;
    case 7:
        cout << "DCC";
        break;
    case 8:
        cout << "DCCC";
        break;
    case 9:
            cout << "CM";
        break;
    default:
            ;
        break;
    }
    switch (tens)
    {
    case 1:
        cout << "X";
        break;
    case 2:
        cout << "XX";
        break;
    case 3:
        cout << "XXX";
        break;
    case 4:
        cout << "XL";
        break;
    case 5:
        cout << "L";
        break;
    case 6:
        cout << "LX";
        break;
    case 7:
        cout << "LXX";
        break;
    case 8:
        cout << "LXXX";
        break;
    case 9:
        cout << "XC";
        break;
    default:

        break;
    }
    switch (units)
    {
    case 1:
        cout << "I";
        break;
    case 2:
        cout << "II";
        break;
    case 3:
        cout << "III";
        break;
    case 4:
        cout << "IV";
        break;
    case 5:
        cout << "V";
        break;
    case 6:
        cout << "VI";
        break;
    case 7:
        cout << "VII";
        break;
    case 8:
        cout << "VIII";
        break;
    case 9:
        cout << "IX";
        break;
    default:

        break;
    }

}
int main()
{
    int n;
    setlocale(LC_ALL, "RU");
    cout << "Введите число n\n";
    cin >> n;
    converter(n);
}
*/
// Задание 5 сумма факториалов
/*
int factorialSum(int number) {
    int currentFactorial = 1;
    int totalSum = 0;

    for (int i = 1; i <= number; i++) {
        currentFactorial *= i;
        totalSum += currentFactorial;
    }
    return totalSum;
}
int main() {
    setlocale(LC_ALL, "RU");

    int userInput;

    cout << "Введите число n: " << endl;
    cin >> userInput;
    cout << factorialSum(userInput) << endl;
}
*/
// Задание 6 сумма квадратов
/*int sumchet(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    return sum;
}
int main()
{
    int n;
    setlocale(LC_ALL, "RU");
    cout << "Введите число n";
    cin >> n;
    int result = sumchet(n);
    cout << "сумма всех квадратов чисел от 1 до n = " << result;
}
*/
// Задание 7 целочисленные логарифмы
/*int calculateLogarithm(int n, int b)
{
    double logaf = log(n) / log(b);
    return logaf;
}
int main() {
    setlocale(LC_ALL, "RU");

    int logArgument, logBase;

    cout << "Введите аргумент логарифма: " << endl;
    cin >> logArgument;
    cout << "Введите основание логарифма: " << endl;
    cin >> logBase;

    int result = calculateLogarithm(logArgument, logBase);
    cout << "Результат: " << result << endl;


}
*/
// Задание 8 сумма чисел числа
/*int sumchet(int n)
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    setlocale(LC_ALL, "RU");
    cout << "Введите число n";
    cin >> n;
    int result = sumchet(n);
    cout << "сумма цифр числа n = " << result;
}
*/
//Задание 9 Проверка на совершенное число
/*

bool isPerfectNumber(int number) {
    if (number <= 1) {
        return false;
    }

    int sumOfDivisors = 1;


    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            sumOfDivisors += i;
            if (i * i != number) {
                sumOfDivisors += number / i;
            }
        }
    }


    return sumOfDivisors == number;
}

int main() {
    int number;
    setlocale(LC_ALL, "RU");
    cout << "Введите число: ";
    cin >> number;


    cout << number << (isPerfectNumber(number) ? " - совершенное число." : " - не совершенное число.") << endl;

    return 0;
}*/
//Задание 10 Сложение двух дробей
/*
int gcd(int a, int b) {
    while (b != 0) {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}

void drobi(int x1, int x2, int x3, int x4) {
    int obschidelitel = x2 * x4;
    int obschidelimoe = (x1 * x4) + (x3 * x2);


    int divisor = gcd(obschidelimoe, obschidelitel);
    obschidelimoe /= divisor;
    obschidelitel /= divisor;


    if (obschidelimoe >= obschidelitel) {
        int wholePart = obschidelimoe / obschidelitel;
        obschidelimoe = obschidelimoe % obschidelitel;

        if (obschidelimoe == 0) {
            cout << wholePart;
        }
        else {
            cout << wholePart << ' ' << obschidelimoe << '/' << obschidelitel;
        }
    }
    else {
        cout << obschidelimoe << '/' << obschidelitel;
    }
}

int main() {
    int x1, x2, x3, x4;
    setlocale(LC_ALL, "RU");
    cout << "Введите делимое первой дроби: ";
    cin >> x1;
    cout << "Введите делитель первой дроби: ";
    cin >> x2;
    cout << "Введите делимое второй дроби: ";
    cin >> x3;
    cout << "Введите делитель второй дроби: ";
    cin >> x4;

    drobi(x1, x2, x3, x4);
}
*/
//Задание 11 генерация всех делителей
/*void findDivisors(int number) {
    cout << "Все делители числа " << number << ":" << endl;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << endl;
        }
    }
}
int main() {
    setlocale(LC_ALL, "RU");

    int userInput;

    cout << "Введите число: ";
    cin >> userInput;


    findDivisors(userInput);


}*/
//Задание 12 нахождение нод
/* int NOD(int a, int b) {
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
int main() {
    int a, b;
    setlocale(LC_ALL, "RU");

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    int nod = NOD(a, b);

    cout << "Наибольший общий делитель"  << a << " " << b << " = " << nod << endl;
}
*/
//Задание 13 Сумма чисел фибоначи
/*
int summafib(int n) {
    if (n < 0) return 0;

    int a = 0, b = 1, sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += a;
        int next = a + b;
        a = b;
        b = next;
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "RU");

    int g;

    cout << "Введите число: ";
    cin >> g;

    cout << "Сумма чисел Фибоначчи до " << g << ": " << summafib(g) << endl;


}
*/
//Задание 14 Сортировка строки
/*
string sortString(string str) {
    int n = str.length();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                swap(str[j], str[j + 1]);
            }
        }

    }
    return str;
}

int main() {
    string str;
    setlocale(LC_ALL, "RU");
    cout << "Введите строку: ";
    cin >> str;


    cout << "Отсортированная строка: " << sortString(str) << endl;


}
*/
//Задание 15 проверка на анограмму
/*string checkAnagram(string firstWord, string secondWord) {
    if (firstWord.length() != secondWord.length()) {
        return "Строки не являются анаграммами.";
    }

    // Сортируем строки
    sort(firstWord.begin(), firstWord.end());
    sort(secondWord.begin(), secondWord.end());

    // Сравниваем отсортированные строки
    if (firstWord == secondWord) {
        return "Строки являются анаграммами!";
    }
    else {
        return "Строки не являются анаграммами.";
    }
}
int main() {
    setlocale(LC_ALL, "RU");

    string firstInput, secondInput;

    cout << "Введите первое слово: ";
    cin >> firstInput;
    cout << "Введите второе слово: ";
    cin >> secondInput;
    cout << endl;

    cout << checkAnagram(firstInput, secondInput) << endl;


}
*/
//Задание 16 Контентатенация строки с учетом длинны
/*string operation(string str1, string str2, size_t length)
    {

    string result = str1 + str2;
    if (result.length() > length)
    {

        result = result.substr(0, length);
    }
    return result;
    }

int main() {
    string str1, str2;
    size_t length;
    setlocale(LC_ALL, "RU");
    cout << "Введите первую строку: ";
    cin >> str1;
    cout << "Введите вторую строку: ";
    cin >> str2;
    cout << "Введите максимальную длину строки: ";
    cin >> length;

    string result = operation(str1, str2, length);

    cout << "Результат : " << result;


}
*/
//Задание 17 Удаление дубликатов из строки
/*
string removeDuplicates(const string& inputStr) {
    string resultStr;
    bool seen[256] = { false };

    for (char ch : inputStr) {

        if (!seen[(unsigned char)ch]) {
            seen[(unsigned char)ch] = true;
            resultStr += ch;
        }
    }

    return resultStr;
}
int main() {
    setlocale(LC_ALL, "RU");

    string userInput;

    cout << "Введите строку: ";
    cin>>userInput;

    string result = removeDuplicates(userInput);
    cout << "Строка без дубликатов: " << result << endl;


}
*/
//Задание 18 Сравнение двух дробей
/*int sraw(int a, int b, int c, int d)
{
    double brob1 = a / b;
    double brob2 = c / d;

    if (brob1 > brob2) {
        return 1;
    }
    else if (brob1 < brob2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x1, x2, x3, x4;
    setlocale(LC_ALL, "RU");
    cout << "Введите делимое первой дроби: ";
    cin >> x1;
    cout << "Введите делитель первой дроби: ";
    cin >> x2;
    cout << "Введите делимое второй дроби: ";
    cin >> x3;
    cout << "Введите делитель второй дроби: ";
    cin >> x4;

    int result = sraw(x1, x2, x3, x4);

    cout << "Результат сравнения: " << result <<endl;
}
*/
//Задание 19 Перевод строки в верхний регистр
/*
string convertToUpperCase(string input) {
    for (size_t index = 0; index < input.length(); ++index) {
        input[index] = toupper(input[index]);
    }
    return input;
}

int main() {
    setlocale(LC_ALL, "RU");
    string userInput;
    cout << "Введите строку: ";
    cin >> userInput;
    cout << "Строка с символами верхнего регистра: " << convertToUpperCase(userInput) << endl;

}
*/
//Задание 20 Проверка на число армстренга
/*void armstrong(string n)
{
    int length = n.length();
    int sum = 0;
    for (int i = 0; i < n.length(); i++)
    {
        char a = n[i];
        int number = a - 48;
        sum += pow(number, length);

    }
    int c = stoi(n);
    if (c == sum)
    {
        cout << "это число армстронга";
    }
    else
    {
        cout << "это не число армстронга";
    }
}
int main()
{
    string n;
    setlocale(LC_ALL, "RU");
    cout << "Введите число n";
    cin >> n;
    armstrong(n);

}
*/