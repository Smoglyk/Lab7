// Lab7-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int findA(vector<int>& DirectlyCodResult, vector<int>& DirectlyCod2, vector<int>& DirectlyCod)
{
   

    int one3 = 0;
    for (int i = DirectlyCod.size() - 1; i >= 0; i--)
    {
        DirectlyCodResult[i] = one3 + DirectlyCod2[i] + DirectlyCod[i];
        if (DirectlyCodResult[i] > 1 && one3 == 0)
        {
            DirectlyCodResult[i] = 0;
            one3 = 1;
        }
        else if (DirectlyCodResult[i] > 1 && (DirectlyCod2[i] == 0 || DirectlyCod[i] == 0))
        {
            DirectlyCodResult[i] = 0;

        }
        else if (DirectlyCodResult[i] > 1)
        {
            DirectlyCodResult[i] = 1;
        }
        else one3 = 0;


    }





    if (DirectlyCodResult[0] == 1)
    {
        for (int i = 1; i < DirectlyCodResult.size(); i++)
        {
            if (DirectlyCodResult[i] == 0)
                DirectlyCodResult[i] = 1;
            else if (DirectlyCodResult[i] == 1)
                DirectlyCodResult[i] = 0;

        }

        if (one3 == 0 && DirectlyCodResult[0] == 1)
            one3 = 1;

        for (int i = DirectlyCodResult.size() - 1; i >= 1; i--)
        {
            DirectlyCodResult[i] += one3;
            if (DirectlyCodResult[i] > 1)
            {
                DirectlyCodResult[i] = 0;
                one3 = 1;
            }
            else one3 = 0;


        }
    }

    cout << "Sum your first and second Directly Cod: \n";
    for (int i = 0; i < DirectlyCodResult.size(); i++)
    {
        cout << DirectlyCodResult[i];
    }

    cout << endl;

    ///////////////////////////////////////



     ///////Перевод из дополнительного кода в двоичную систему

    int score = 0, count = 0;
    for (int i = 1; i < DirectlyCodResult.size(); i++)
    {
        if (DirectlyCodResult[i] == 0)
        {
            score += 1;
        }
        else break;
    }

    for (int i = 1 + score; i < DirectlyCodResult.size(); i++)
    {
        count += 1;
    }

    int* BinoryCod = new int[count];
    for (int i = 0; i < count; i++)
    {
        BinoryCod[i] = DirectlyCodResult[i + 1 + score];
    }
    cout << "Your binory cod of sum: \n";
    for (int i = 0; i < count; i++)
    {
        cout << BinoryCod[i];
    }

    cout << endl;
    ///////Переводи из двоичной формы в естетвенную

    int g = count;
    for (int i = 0; i < count; i++)
    {
        BinoryCod[i] = BinoryCod[i] * pow(2, g - 1);
        g -= 1;
    }


    int sumNumber = 0;



    for (int i = 0; i < count; i++)
    {
        sumNumber += BinoryCod[i];
    }

    if (DirectlyCodResult[0] == 1)
        sumNumber *= -1;
    /////////////////////////////
    
    delete[] BinoryCod;
    return sumNumber;

}



void findN(int number10, vector<int>& DirectlyCod)
{
   
    int clon10, score2 = 1, one = 0;
    

 

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
    for (int i = (score2 - 1); i >= 0; i--)
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

    


    if (number10 >= 0)
        DirectlyCod[0] = 0;
    else if (number10 == -0)
        DirectlyCod[0] = 1;
    else DirectlyCod[0] = 1;







    for (int i = 1; i < 8 - score2; i++)
    {
        DirectlyCod[i] = 0;

    }

    int y;

    if (score2 >= 8) {
        y = score2 + 1;
        for (int i = 0; i < score2 - 7; i++) {
            DirectlyCod.push_back(0);
        }
    }
    else y = 8;

   
    for (int i = y - score2; i < y; i++)
    {
        DirectlyCod[i] = array2[i - y + score2];

    }

    ///Дабовляем нули в начало вектора 

    if (DirectlyCod[1] == 1)
    {

        DirectlyCod.insert(DirectlyCod.begin() + 1, 0);

    }

    //////////////


    cout << "Directly cod : \n";
    for (int i = 0; i < DirectlyCod.size(); i++)
    {
        cout << DirectlyCod[i];
    }

    cout << endl;









    if (number10 >= 0)
    {
        
        cout << "Transformed Additional cod : \n";
        for (int i = 0; i < DirectlyCod.size(); i++)
        {
            cout << DirectlyCod[i];
        }
    }
    else
    {
        for (int i = 1; i < DirectlyCod.size(); i++)
        {
            if (DirectlyCod[i] == 0)
                DirectlyCod[i] = 1;
            else if (DirectlyCod[i] == 1)
                DirectlyCod[i] = 0;

        }
        

        DirectlyCod[DirectlyCod.size() - 1] += 1;


        cout << "Transformed Additional cod : \n";

        for (int i = DirectlyCod.size() - 1; i >= 1; i--)
        {
            DirectlyCod[i] += one;
            if (DirectlyCod[i] > 1)
            {
                DirectlyCod[i] = 0;
                one = 1;
            }
            else one = 0;


        }

        for (int i = 0; i < DirectlyCod.size(); i++)
        {
            cout << DirectlyCod[i];
        }

    }

    cout << endl;

    delete[] array2;
    
}

int main()
{

     


    int a, b, answer;
    
    int  m1[8], m2[8], m3[8];
    vector<int> v1(8), v2(8);
    
    cout << "Enter a number in natural form \n";

    cin >> a;

    findN(a, v1);

    cout << "Enter a number in natural form \n";

    cin >> b;

    findN(b, v2);


    int size = 0;
    

    if (v1.size() > v2.size())
    {
        size = v1.size();
    }
    else
        size = v2.size();

    vector<int> v3(size);

    if (v1.size() > v2.size())
    {
        int difference = v1.size() - v2.size();
        for (int i = 0; i < difference; i++) {
            if (v2[0] == 0)
                v2.insert(v2.begin() + 1, 0);
            else
                v2.insert(v2.begin() + 1, 1);
        }
    }
    else
    {
        int difference = v2.size() - v1.size();
        for (int i = 0; i < difference; i++) {
            if(v1[0] == 0)
            v1.insert(v1.begin() + 1, 0);
            else 
                v1.insert(v1.begin() + 1, 1);
        }
    }

    
    answer = findA(v3, v2, v1);

    cout << "Sum your natural number: \n";
    cout << answer;

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
