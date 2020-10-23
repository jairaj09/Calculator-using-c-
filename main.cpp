#include <iostream>

using namespace std;

class calculator
{
    int a , b , n ;

public :

    calculator()
    {
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;
    }

    void add ()
    {
        cout << "Addition of "<<a <<" and "<<b << " is "<<a+b ;
        cout << "\nWant to Perform another operation (If 'Yes' enter 1 and for 'No' enter  2 ): ";
        cin >> n;
        if (n==1)
        {
        int c ;

    cout << "Addition - 1 \n Subtraction - 2 \nMultiplication - 3 \nDivision - 4 \nRemainder - 5";
    cout << "\nChoose which operation you want to perform : ";
    cin >> c ;
    calculator ope;
    if (c==1)
    {
     ope.add();
    }
    else if (c==2)
    {
        ope.sub();
    }
    else if (c==3)
    {
        ope.mul();
    }
    else if (c==4)
    {
        ope.div();
    }
    else if (c==5)
    {
        ope.rem();
    }
    else
    {
        cout << "Invalid choice!";
    }
        }
    }

    void sub ()
    {
        cout << "Subtraction of "<<a<<" and "<<b<< " is "<<a-b ;
        cout << "\nWant to Perform another operation (If 'Yes' enter 1 and for 'No' enter  2 ): ";
        cin >> n;
        if (n==1)
        {
        int c ;

    cout << "Addition - 1 \n Subtraction - 2 \nMultiplication - 3 \nDivision - 4 \nRemainder - 5";
    cout << "\nChoose which operation you want to perform : ";
    cin >> c ;
    calculator ope;
    if (c==1)
    {
     ope.add();
    }
    else if (c==2)
    {
        ope.sub();
    }
    else if (c==3)
    {
        ope.mul();
    }
    else if (c==4)
    {
        ope.div();
    }
    else if (c==5)
    {
        ope.rem();
    }
    else
    {
        cout << "Invalid choice!";
    }
        }
    }

    void mul ()
    {
        cout << "Multiplication of "<<a<<" and "<<b<< " is "<<a*b ;
        cout << "\nWant to Perform another operation (If 'Yes' enter 1 and for 'No' enter  2 ): ";
        cin >> n;
        if (n==1)
        {
        int c ;

    cout << "Addition - 1 \n Subtraction - 2 \nMultiplication - 3 \nDivision - 4 \nRemainder - 5";
    cout << "\nChoose which operation you want to perform : ";
    cin >> c ;
    calculator ope;
    if (c==1)
    {
     ope.add();
    }
    else if (c==2)
    {
        ope.sub();
    }
    else if (c==3)
    {
        ope.mul();
    }
    else if (c==4)
    {
        ope.div();
    }
    else if (c==5)
    {
        ope.rem();
    }
    else
    {
        cout << "Invalid choice!";
    }
        }
    }

    void div ()
    {
        cout << "Division of "<<a<<" and "<<b<< " is "<<a/b ;cout << "\nWant to Perform another operation (If 'Yes' enter 1 and for 'No' enter  2 ): ";
        cin >> n;
        if (n==1)
        {
        int c ;

    cout << "Addition - 1 \n Subtraction - 2 \nMultiplication - 3 \nDivision - 4 \nRemainder - 5";
    cout << "\nChoose which operation you want to perform : ";
    cin >> c ;
    calculator ope;
    if (c==1)
    {
     ope.add();
    }
    else if (c==2)
    {
        ope.sub();
    }
    else if (c==3)
    {
        ope.mul();
    }
    else if (c==4)
    {
        ope.div();
    }
    else if (c==5)
    {
        ope.rem();
    }
    else
    {
        cout << "Invalid choice!";
    }
        }
    }

    void rem ()
    {
        cout << "Remainder of "<<a<<" and "<<b<< " is "<<a%b ;
        cout << "\nWant to Perform another operation (If 'Yes' enter 1 and for 'No' enter  2 ): ";
        cin >> n;
        if (n==1)
        {
        int c ;

    cout << "Addition - 1 \n Subtraction - 2 \nMultiplication - 3 \nDivision - 4 \nRemainder - 5";
    cout << "\nChoose which operation you want to perform : ";
    cin >> c ;
    calculator ope;
    if (c==1)
    {
     ope.add();
    }
    else if (c==2)
    {
        ope.sub();
    }
    else if (c==3)
    {
        ope.mul();
    }
    else if (c==4)
    {
        ope.div();
    }
    else if (c==5)
    {
        ope.rem();
    }
    else
    {
        cout << "Invalid choice!";
    }
        }
    }
    ~ calculator()
    {
        cout << "\nDestructor is called!";
    }


};
int main()
{
    int c ;

    cout << "Addition - 1 \n Subtraction - 2 \nMultiplication - 3 \nDivision - 4 \nRemainder - 5";
    cout << "\nChoose which operation you want to perform : ";
    cin >> c ;
    calculator ope;
    if (c==1)
    {
     ope.add();
    }
    else if (c==2)
    {
        ope.sub();
    }
    else if (c==3)
    {
        ope.mul();
    }
    else if (c==4)
    {
        ope.div();
    }
    else if (c==5)
    {
        ope.rem();
    }
    else
    {
        cout << "Invalid choice!";
    }
    return 0;
}
