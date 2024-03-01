#include<iostream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int positionOfAlpha(char a)
{
    switch(a)
    {
    case 'a':
        return 1;
        break;
    case 'b':
        return 2;
        break;
    case 'c':
        return 3;
        break;
    case'd':
        return 4;
        break;
    case 'e':
        return 5;
        break;
    case 'f':
        return 6;
        break;
    case 'g':
        return 7;
        break;
    case 'h':
        return 8;
        break;
    case 'i':
        return 9;
        break;
    case 'j':
        return 10;
        break;
    case 'k':
        return 11;
        break;
    case 'l':
        return 12;
        break;
    case 'm':
        return 13;
        break;
    case 'n':
        return 14;
        break;
    case 'o':
        return 15;
        break;
    case 'p':
        return 16;
        break;
    case 'q':
        return 17;
        break;
    case 'r':
        return 18;
        break;
    case 's':
        return 19;
        break;
    case 't':
        return 20;
        break;
    case 'u':
        return 21;
        break;
    case 'v':
        return 22;
        break;
    case 'w':
        return 23;
        break;
    case 'x':
        return 24;
        break;
    case 'y':
        return 25;
        break;
    case 'z':
        return 26;
        break;
    }
    return 0;
}
void alphabetPosition(const string s)
{
    int i;
    const int length= s.length();
    char code[length+1];
    char *sinchar = new char[length + 1];
    strcpy(sinchar,s.c_str());
    for(i=0;i<length;i++)
    {
        if(positionOfAlpha(sinchar[i])!=0)
            cout<<positionOfAlpha(sinchar[i])<<" ";
        else
            cout<<"   ";
    }
}
int main()
{
    string n;
    cout<<"Enter leter";
    getline(cin,n);
    alphabetPosition(n);
    return 0;
}
