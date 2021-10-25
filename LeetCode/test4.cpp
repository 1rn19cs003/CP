#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    int i;
    cout << argc;
    for (i = 0; i < argc; i++)
        cout << (int *)argv[i] << endl;
    cout << atoi(argv[1]);
    cout << atof(argv[2]);
    char p = *(argv[3]); //argv[3][0]
    char *q = argv[3];
    cout << p << *q;
    char s[30];
    strcpy(s, argv[4]);
    cout << s;
}
