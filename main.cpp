#include <iostream>

using namespace std;

double weight[15];
int i;

void min_max()
{
    int min, max,sum,count = 0;
    double avg = 0;
    min = weight[0];
    max = weight[0];


    for ( int j = 0; j < i; j++ )
    {
        count++;
        sum+=weight[j];

        if (weight[j] > max)
        {
            max = weight[j];
        }
        else if (weight[j] < min)
        {
            min = weight[j];
        }

    }
    avg = sum/count;

    cout << "\nMaximum value entered : " << max << endl;
    cout << "Minimum value entered : " << min << endl;
    cout << "The average of the entered values is : " << avg << "\n" <<endl;

}

void convert_pounds()
{

    for(i=0; i<15; i++)
    {

        cout << "\nEnter weight " << i+1 << ": "  ;
        cin >> weight[i];

        if(weight[i] > 0)
        {
            cout << "\nWeight in kilograms : " << 2.2046*weight[i] << "\n" << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;

        }
        else
        {
            min_max();
            break;
        }

    }
}

void convert_kilograms()
{

    for(i=0; i<15; i++)
    {

        cout << "\nEnter weight " << i+1 << ": "  ;
        cin >> weight[i];

        if(weight[i] > 0)
        {
            cout << "\nWeight in pounds : " << weight[i]/2.2046 << "\n" << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;

        }
        else
        {
            min_max();
            break;
        }

    }
}

int main()
{
    cout << "|-------------------------------------------------------------------------------| " << endl;
    cout << "|------------------------------ Riya Nagpal - 2220097 --------------------------| "<< endl;
    cout << "|------------ WELCOME TO THE MASS CONVERTER - PLEASE SELECT AN OPTION ----------| "<< endl;
    cout << "|-------------------------------------------------------------------------------| " << endl ;
    cout << "|                                                                               |" << endl;

    int option;
    do
    {

        cout << "|---------------------------------- MENU ---------------------------------------| " << endl;
        cout << "|--> Press 1 for Conversion from pounds to kilograms                            |" << endl;
        cout << "|--> Press 2 for conversion from kilograms to pounds                            |" << endl;
        cout << "|--> Press 0 to quit                                                            |" << endl;
        cout << "|-------------------------------------------------------------------------------| " << endl;
        cin >> option;


        switch(option)
        {
        case 1 :
            convert_pounds();
            break;

        case 2 :
            convert_kilograms();
            break;
        }


    }
    while (option != 0);

    return 0;
}
