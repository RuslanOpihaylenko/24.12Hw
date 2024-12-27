#include "List.h"
#include <iostream>

using namespace std;

void List::Add(const char data, int  n, char value)
{
    
    Node* newNode = new Node(data);

    if (m_head == nullptr)
    {

        m_head = newNode;
    }
    else
    {
        Node* node = m_head;

        while (node->m_next != nullptr)
        {
            node = node->m_next;
        }
    }
    ++m_size;
    for (int i = 0;i < m_size;i++)
    {
        if (node->m_next[i] == node->m_next[n])
        {
            node->m_next[i] = value;
            cout << node->m_next[i];
        }
        cout << node->m_next[i];
    }
}

void List::Delete(const char data, int)
{
    Node* newNode = new Node(data);

    if (m_head == nullptr)
    {

        m_head = newNode;
    }
    else
    {
        Node* node = m_head;

        while (node->m_next != nullptr)
        {
            node = node->m_next;
        }
    }
    ++m_size;
    for (int i = 0;i < m_size;i++)
    {
        if (node->m_next[i] != node->m_next[n])
        {
            cout << node->m_next[i];
        }
    }
}

void List::Serching(const char data, char n)
{
    Node* newNode = new Node(data);

    if (m_head == nullptr)
    {

        m_head = newNode;
    }
    else
    {
        Node* node = m_head;

        while (node->m_next != nullptr)
        {
            node = node->m_next;
        }
    }
    ++m_size;
    for (int i = 0;i < m_size;i++)
    {
        if (node->m_next[i] == n)
        {
            cout << i;
        }
        else
        {
            cout << "NULL";
        }
    }
}

void List::SercheAndChange(const char data, char n, char value )
{
    Node* newNode = new Node(data);

    if (m_head == nullptr)
    {

        m_head = newNode;
    }
    else
    {
        Node* node = m_head;

        while (node->m_next != nullptr)
        {
            node = node->m_next;
        }
    }
    ++m_size;
    int counter = 0;
    for (int i = 0;i < m_size;i++)
    {
        if (node->m_next[i] == n)
        {
            node->m_next[i] = value;
            counter++;
            cout << node->m_next[i];
            cout << counter;
        }
        else
        {
            cout << "-1";
        }
    }
}

void List::Change(const char data)
{
    Node* newNode = new Node(data);

    if (m_head == nullptr)
    {

        m_head = newNode;
    }
    else
    {
        Node* node = m_head;

        while (node->m_next != nullptr)
        {
            node = node->m_next;
        }
    }
    ++m_size;
    int counter = 0;
    for (int i = 0;i < m_size;i++)
    {
        node->m_next[i] = node->m_next[i + 1];
        char swap = node->m_next[i];
        node->m_next[i + 1] = swap;
        cout << node->m_next[i + 1];
    }
}
