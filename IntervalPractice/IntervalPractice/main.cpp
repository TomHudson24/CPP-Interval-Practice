#include <iostream>
#include <vector>

/*
To practice using intervals, modulo and the conditional ternary operator (?) this code has been written.

Given two integers as input calculate the interval and for any numbers between 0 & 10 output their worded representation (1 = one).
If that value is great than 9, determine whether the value is even or odd and output that instead.
*/

//My solution - 1 input, 1 vector list, 2 loops, 1 switch - 61 lines of code
/*
First, declare a, b and get input from the user. 
Then determine which number is higher and put the difference between the higher number and lower number as the value of a new variable. 
Loop through all the values and put them in a vector list.
Loop through the vector list and output the correct string for each value.
Modulo is used to determine if the value is even (if the value has a remainder after mod 2 then it is odd).
*/
#if 0
int main() {
    int a, b;
    scanf_s("%d %d", &a, &b);
    int x = 0;
    if (a > b) {
        x = a - b;
    }
    else if (b > a) {
        x = b - a;
    }
    std::vector<int> n;
    for (int i = 0; i <= x; i++) {
        if ((a + i) != b) {
            n.push_back((a + i));
        }
        else if ((a + i) == b) {
            n.push_back(b);
        }
    }
    for (int i = 0; i <= x; i++)
    {

        if (n[i] >= 1 && n[i] <= 9) {
            switch (n[i]) {
            case 1:
                std::cout << "one\n";
                break;
            case 2:
                std::cout << "two\n";
                break;
            case 3:
                std::cout << "three\n";
                break;
            case 4:
                std::cout << "four\n";
                break;
            case 5:
                std::cout << "five\n";
                break;
            case 6:
                std::cout << "six\n";
                break;
            case 7:
                std::cout << "seven\n";
                break;
            case 8:
                std::cout << "eight\n";
                break;
            case 9:
                std::cout << "nine\n";
                break;
            default:
                std::cout << "";
            }

        }
        else if (n[i] > 9 && n[i] % 2 == 0) {
            std::cout << "even\n";
        }
        else if (n[i] > 9 && n[i] % 2 != 0) {
            std::cout << "odd\n";
        }
    }
	return 0;
}
#endif

//Optimisation to solution - 1 vector list, 1 input, 1 loop - 6 lines of code
/*
The optimised solution removes the need for multiple loops and uses the ? operator to determine if an output should be printed or not. 
The possible string outputs are put in a vector list, except for even and odd, then one loop starts at the value a and goes until it is
equal to value b. Each loop iteration checks if the value is less than 9 and if so prints out the subsequent value, because the 
list is already ordered this can be done. Then if the value is over 9 (done on one line using the ternary operator) it is checked
if the value has a remainder when being mod by 2, if it does, output should be even, if not it is odd. 
*/
#if 1
int main()
{
    int a, b;
    std::vector<std::string> c = { "","one","two","three","four","five","six","seven","eight","nine" };
    std::cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        std::cout << ((i <= 9) ? c[i] : ((i % 2 == 0) ? "even" : "odd")) << std::endl;
    }
}
#endif