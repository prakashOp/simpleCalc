#include <iostream>

void calculation(double num1, double num2, int user_operator)
{
    double result;
    switch (user_operator)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    case 5:
        std::exit(0);
        break;
    default:
        std::exit(0);
        break;
    }
    std::cout << "Result -> " << result << std::endl;
}

int main()
{
    double num1, num2;
    std::cout << "1 -> Calculator\n";
    std::cout << "2 -> Exit\n";
    int user_choice;
    std::cout << "Choice -> ";
    std::cin >> user_choice;
    switch (user_choice)
    {
    case 1:
        std::cout << "Enter Number1 -> ";
        std::cin >> num1;
        std::cout << "Enter Number2 -> ";
        std::cin >> num2;
        std::cout << "1 -> Add\n";
        std::cout << "2 -> Minus\n";
        std::cout << "3 -> Product\n";
        std::cout << "4 -> Division\n";
        std::cout << "Operator -> ";
        int user_operator;
        std::cin >> user_operator;
        calculation(num1, num2, user_operator);
        break;
    case 2:
        std::exit(0);
        break;
    default:
        std::cout << "Wrong Choice\n";
        std::exit(0);
        break;
    }

    return 0;
}
