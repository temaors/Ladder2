#include <Windows.h>
#include <iostream>
#include <math.h>

using namespace std;

const int N = 10;

int menu()
{
    int choice = 0;
    
    cout << endl;
    system("pause");
    system("cls");
    do {
        system("cls");
        cout << "Select the function to check:" << endl;
        cout << "1) count()" << endl;
        cout << "2) countNM()" << endl;
        cout << "3) getSum()" << endl;
        cout << "4) getAverage()" << endl;
        cout << "5) distance()" << endl;
        cout << "6) EXIT" << endl;

        cin >> choice;
    } while (choice < 1 and choice > 6);

    return choice;
}

void count()
{
    for (int i = 1; i <= N ; i++)
        cout << i << " ";
}

void countNM(int n, int m)
{
    for (int i = n; i <= m; i++)
        cout << i << " ";
}

double getSum(int n, int m)
{
    int sum = 0;

    for (int i = n; i <= m; i++)
    {
        sum += i;
    }
    
    return sum;
}

double getAverage(int n, int m)
{
    int sum = 0;
    double average = 0.0;

    for (int i = n; i <= m; i++)
    {
        sum += i;
    }

    average = sum / m - n;
    
    return average;
}

double distance(double x1, double y1, double x2, double y2)
{
    double distance = 0.0;

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    return distance;
}

int main()
{
    int n = 0;
    int m = 0;
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    while (true) {
        switch (menu())
        {
        case 1:

            count();

            break;
        case 2:

            do {
                system("cls");
                if (n > m)
                    cout << "Error. Number N must be less than M" << endl;

                cout << "Enter the boundaries of the gap to output numbers(start < end)" << endl;
                cout << "Start: ";
                cin >> n;
                cout << "End: ";
                cin >> m;

            } while (n > m);

            countNM(n , m);

            break;
        case 3:

            cout << "Enter number N and M" << endl;
            cout << "N: ";
            cin >> n;
            cout << "M: ";
            cin >> m;

            cout << "The sum of the numbers from N and M is equal to " << getSum(n, m) << endl;

            break;
        case 4:

            cout << "Enter number N and M" << endl;
            cout << "N: ";
            cin >> n;
            cout << "M: ";
            cin >> m;

            cout << "Average number is " << getAverage(n, m) << endl;

            break;
        case 5:
            cout << "Enter coordinates" << endl;
            cout << "x1: ";
            cin >> x1;
            cout << "y1: ";
            cin >> y1;
            cout << "x2: ";
            cin >> x2;
            cout << "y2: ";
            cin >> y2;
            cout << "Distance between (" << x1 << ";" << y1 << ") and (" << x2 << ";" << y2 << ") is " << distance(x1, y1, x2, y2) << endl;
            break;
        case 6:
            return 0;
            break;
        default:
            break;
        }
    }
}