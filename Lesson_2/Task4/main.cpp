#include <iostream>

using namespace std;

int main()
{
    int Stars[5];
    int Element = 0;
    int MaxElement = 0;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the number: ";
        cin >> Stars[i];
        if(Stars[i] > MaxElement)
        {
            MaxElement = Stars[i];
        }
    }

    for(int i = 0; i < MaxElement; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            Element = Stars[j] - i;
            if(Element > 0) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
