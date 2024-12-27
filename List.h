#pragma once
#include "Node.h"

class List
{
private:

    Node* m_head;

    unsigned int m_size;

public:

    void Add(const char data, int , char );
    void Delete(const char data, int );
    void Serching(const char data, char );
    void SercheAndChange(const char data, char, char );
    void Change(const char data);
};

