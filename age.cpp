#include <iostream>
using namespace std;

int mars(int age)
{
    return age / 1.88;
}

int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your age on earth" << endl;
    cin >> age;
    cout << "Here is your age on mars" << endl
         << mars(age);
    return 0;
}
