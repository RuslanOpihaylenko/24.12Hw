#include<iostream>
#include"List.h"

using namespace std;

int main()
{
    List l;
    const char data = 'Hellow';
    l.Add(data, 3, 'd');
    l.Delete(data, 3);
    l.Serching(data, 'e');
    l.SercheAndChange(data, 'e', 'd');
    l.Change(data);
}