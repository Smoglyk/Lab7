// Lab7-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   
    int number10 = 0, clon10, score2 = 1, one = 0;

    cout << "Enter a number in natural form \n";

    cin >> number10;

    clon10 = abs(number10);

    for (int i = 0; ; i++)
    {
        if (clon10 / 2 != 0)
        {
            score2 += 1;
            clon10 = clon10 / 2;
        }
        else break;
    }

   


    int* array2 = new int[score2];

    int clon2 = abs(number10);
    for (int i = (score2-1); i >= 0; i--)
    {
        array2[i] = clon2 % 2;
        clon2 = clon2 / 2;
        
    }

    cout << "Binory cod: \n";
    for (int i = 0; i < score2; i++)
    {
        cout << array2[i];
    }

    cout << endl;

    int DirectlyCod[8];


    if (number10 >= 0)
        DirectlyCod[0] = 0;
    else if (number10 == -0)
        DirectlyCod[0] = 1;
    else DirectlyCod[0] = 1;

    





    for (int i = 1; i < 8 - score2; i++)
    {
        DirectlyCod[i] = 0;
       
    }



    for (int i = 8 - score2; i < 8; i++)
    {
        DirectlyCod[i] = array2[i - 8 + score2];
        
    }

    cout << "Directly cod : \n";
    for (int i = 0; i < 8; i++)
    {
        cout << DirectlyCod[i];
    }

    cout << endl;









    if (number10 >= 0)
    {
        cout << "Transformed Additional cod : \n";
            for(int i = 0; i < 8; i++)
            {
                cout << DirectlyCod[i];
            }
    }
    else
    {
        for (int i = 1; i < 8; i++)
        {
            if(DirectlyCod[i] == 0)
                DirectlyCod[i] = 1;
            else if(DirectlyCod[i] == 1)
                DirectlyCod[i] = 0;
            
        }

        DirectlyCod[7] += 1;


        cout << "Transformed Additional cod : \n";

        for (int i = 7; i >=1; i--)
        {
            DirectlyCod[i] += one;
            if (DirectlyCod[i] > 1)
            {
                DirectlyCod[i] = 0;
                one = 1;
            }
            else one = 0;
           
                
        }

        for (int i = 0; i < 8; i++)
        {
            cout << DirectlyCod[i];
        }

        cout << endl;
    }
   
    delete[] array2;
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
