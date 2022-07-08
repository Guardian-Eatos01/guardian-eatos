#include <iostream>
#include <time.h>
using namespace std;

int main()
{
srand(time(0));
string pass;
string data=
"abcdefghijklmnopqrstugwxyz"
"ABCDEFGHIJKLMNOPQRSTUGWXYZ"
"0987654321";

for(int = 1; i<=12; i++)
{pass = pass + data[rand() %93];
}
cout<< "SUA SENHA E :" << pass;
}
