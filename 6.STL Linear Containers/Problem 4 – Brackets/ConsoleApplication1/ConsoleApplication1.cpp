
#include <iostream>
#include<string>
#include <stack>

/*Write a program which reads a single line from the console, containing brackets for a mathematical expression (only the brackets will appear in the input), and determines whether the brackets in the expression are correct. There are 3 types of brackets – {}, [] and (). {} can contain {}, [] and () brackets. Square brackets [] can contain [] and () brackets. Curved () brackets can contain only () brackets. Said simply, each type of brackets can contain the same type of brackets inside, or a “lower” type of brackets (() is lower than [] which is lower than {}). If a bracket of one type is opened, it needs to be closed before a bracket of another type is closed.
Print valid if the brackets in the expression are valid and invalid if they are not.
*/
//NOTE: The logic is created according to examples.


int main()
{
    std::stack<char> brackets;
    std::string input;

    std::getline(std::cin, input);

    bool isValid = true;

    for (char i : input)
    {
        switch (i)
        {
            case '(':
                brackets.push(')');
                break;
            case '{':
                brackets.push('}');
                break;
            case '[':
                brackets.push(']');
                break;
            case ')':
            case '}':
            case ']':
                if (brackets.empty() || brackets.top() != i)
                {
                    isValid = false;
                }
                else
                {
                    brackets.pop();
                }
                break;
            default:
                break;
        }

        if (!isValid)
        {
            break;
        }
    }

    if (isValid && brackets.empty())
    {
        std::cout << "Valid" << std::endl;
    }
    else
    {
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}