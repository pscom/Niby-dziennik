#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    int students[8][16];

    int averageId[8];
    double average[8];
    double tempA;

    int lessonsId[16];
    double lessons[16];

    double temp;
    int tempId;

    for(int i = 0; i < 16; i++)
    {
        lessons[i] = 0.0;
    }

    srand(time(NULL));

    for(int i = 0; i < 8; i++)
    {
        tempA = 0.0;

        averageId[i] = i+1;

        for(int j = 0; j < 16; j++)
        {
            students[i][j] = rand() % 6 + 1;

            tempA += (double)students[i][j];

            lessonsId[j] = j+1;

            switch(j)
            {
                case 0:
                    lessons[0] += (double)students[i][j];
                    break;
                case 1:
                    lessons[1] += (double)students[i][j];
                    break;
                case 2:
                    lessons[2] += (double)students[i][j];
                    break;
                case 3:
                    lessons[3] += (double)students[i][j];
                    break;
                case 4:
                    lessons[4] += (double)students[i][j];
                    break;
                case 5:
                    lessons[5] += (double)students[i][j];
                    break;
                case 6:
                    lessons[6] += (double)students[i][j];
                    break;
                case 7:
                    lessons[7] += (double)students[i][j];
                    break;
                case 8:
                    lessons[8] += (double)students[i][j];
                    break;
                case 9:
                    lessons[9] += (double)students[i][j];
                    break;
                case 10:
                    lessons[10] += (double)students[i][j];
                    break;
                case 11:
                    lessons[11] += (double)students[i][j];
                    break;
                case 12:
                    lessons[12] += (double)students[i][j];
                    break;
                case 13:
                    lessons[13] += (double)students[i][j];
                    break;
                case 14:
                    lessons[14] += (double)students[i][j];
                    break;
                case 15:
                    lessons[15] += (double)students[i][j];
                    break;
            }
        }

        tempA /= 16.0;

        average[i] = tempA;
    }

    for(int i = 0; i < 16; i++)
    {
        lessons[i] /= 8.0;
    }

    /*
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 16; j++)
        {
            cout << students[i][j] << " ";
        }

        cout << endl;
    }
    */

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(average[j] > average[j + 1])
            {
                temp = average[j + 1];
                average[j + 1] = average[j];
                average[j] = temp;

                tempId = averageId[j + 1];
                averageId[j + 1] = averageId[j];
                averageId[j] = tempId;
            }
        }
    }

    for(int i = 0; i < 16; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            if(lessons[j] > lessons[j + 1])
            {
                temp = lessons[j + 1];
                lessons[j + 1] = lessons[j];
                lessons[j] = temp;

                tempId = lessonsId[j + 1];
                lessonsId[j + 1] = lessonsId[j];
                lessonsId[j] = tempId;
            }
        }
    }

    /*
    for(int i = 0; i < 8; i++)
    {
        cout << average[i] << " - " << averageId[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < 16; i++)
    {
        cout << lessons[i] << " - " << lessonsId[i] << endl;
    }
    */

    cout << "Najlepszym uczniem w klasie jest uczen numer " << averageId[7] << " ze srednia " << average[7] << endl;
    cout << "Najgorszym uczniem w klasie jest uczen numer " << averageId[0] << " ze srednia " << average[0] << endl;

    cout << endl;

    cout << "Przedmiot o najwyzszej sredniej to przedmiot numer " << lessonsId[15] << " a rowna sie ona " << lessons[15] << endl;
    cout << "Przedmiot o najnizszej sredniej to przedmiot numer " << lessonsId[0] << " a rowna sie ona " << lessons[0] << endl;

    getch();
    return 0;
}
