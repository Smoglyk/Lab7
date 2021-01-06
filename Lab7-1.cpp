// Lab7-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number9, a, b, c, sum = 10, score = 1 , f = 1, number10 = 0, score2 = 1;

    cout << "File number in nine number system below, that recieve him in seventeen number systeem : \n";
    cin >> number9;

    for (int i = 0;  ; i++)
    {
        if (number9 / sum != 0)
        {
            score += 1;
        }

        else break;

        sum = sum * 10;

    }

    sum = 10;

    int* array1 = new int[score];


    for (int i = 0; i < score; i++)
    {
        array1[i] = (number9 % sum) / f;
        f = f * 10;
        sum = sum * 10;
    }

    for (int i = 0; i < score; i++)
    {
        array1[i] = array1[i] * pow(9, i);


    }

    for (int i = 0; i < score; i++)
    {
        number10 += array1[i];
    }









    int clon10 = number10;
    for (int i = 0; ; i++)
    {
        if (clon10 / 17 != 0)
        {
            score2 += 1;
            clon10 = clon10 / 17;
        }
        else break;
    }

    sum = 10;


    int* array2 = new int[score2];

    for (int i = 0; i < score2; i++)
    {
        array2[i] = number10 % 17;
        number10 = number10 / 17;
    }
    


    cout << "Your number in seventeen number system : \n";


    for (int i = score2 - 1; i >= 0 ; i--)
    {
      
       if (array2[i] >= 10)
       {
           if (array2[i] == 10)
               cout << 'A';

           if (array2[i] == 11)
               cout << 'B';

           if (array2[i] == 12)
               cout << 'C';

           if (array2[i] == 13)
               cout << 'D';

           if (array2[i] == 14)
               cout << 'E';

           if (array2[i] == 15)
               cout << 'F';

           if (array2[i] == 16)
               cout << 'G';
       }
       else cout << array2[i];

        number10 = number10 / 17;

    }

    delete[] array1;














// second version task









//int number9, a = 0, b, c, sum = 1, score = 1, f = 1, number10 = 0, score2 = 1;
//
//cout << "File number in nine number system below, that recieve him in seventeen number systeem : \n";
//cin >> number9;
//
//for (int i = 0; ; i++)
//{
//    if (number9 != 0)
//    {
//       
//
//        a = a + (number9 % 10) * pow(9, i);
//
//        number9 = number9 / 10;
//    }
//    else if (number9 == 0)
//        break;
// }
//
//
//
//int clon10 = a;
//for (int i = 0; ; i++)
//{
//    if (clon10 / 17 != 0)
//    {
//        score2 += 1;
//        clon10 = clon10 / 17;
//    }
//    else break;
//}
//
//
//
//
//
//int e;
//
//cout << "Your number in seventeen number system : \n";
//
//for (int i = 0; i < score2; i++)
//{
//    e = a % 17;
//    if (e >= 10)
//    {
//        if (e == 10)
//            cout << 'A';
//
//        if (e == 11)
//            cout << 'B';
//
//        if (e == 12)
//            cout << 'C';
//
//        if (e == 13)
//            cout << 'D';
//
//        if (e == 14)
//            cout << 'E';
//
//        if (e == 15)
//            cout << 'F';
//
//        if (e == 16)
//            cout << 'G';
//    }
//    else cout << e;
//
//    a = a / 17;
//
//}






    return 0;








   

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
