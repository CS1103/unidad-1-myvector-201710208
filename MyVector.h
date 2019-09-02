//
// Created by Jorge on 27/08/2019.
//

#ifndef UNTITLED1_MYVECTOR_H
#define UNTITLED1_MYVECTOR_H

struct node{
    node* next;
    int data;
};

class MyVector
        {
private:
    //TipoEntero dimension=0;
    //TipoDataVector* vector;
    int data;
    node* head;
    node* tail;

public:
    MyVector()
    {
        head= nullptr;
        tail=nullptr;

    }


    // virtual ~MyVector();


    int size()
    {
        node* tmp = head;
        int cnt = 0;

        while(tmp != nullptr)
        {
            cnt++;
            tmp=tmp->next;
        }

        return cnt;

    }

    void push_back(int w)
    {
        if (head==nullptr)
        {
            node* nuevo = new node;
            nuevo->data=w;
            nuevo->next=nullptr;
            head = nuevo;
            //tail=nuevo;
        }

        /*else if(head->next ==nullptr)
        {
            node* tmp=head;
            node* nuevo;
            nuevo->data=w;
            nuevo->next=nullptr;
            tmp->next =nuevo;
            //tail=nuevo;
        }*/
        else
        {
            node* tmp=head;
            while(tmp->next!=nullptr)
            {
                tmp=tmp->next;
            }

            node* nuevo = new node;
            nuevo->data=w;
            nuevo->next=nullptr;
            tmp->next=nuevo;
            //tail=nuevo;
        }
    }


    void insert(int pos, int val)
    {
        node* tmp = head;
        node* nuevo= new node;
        nuevo->data=val;
        node* aux= tmp;
        int cnt = 0;

        while(tmp->next != nullptr)
        {
            if (cnt == pos-1)
            {
                tmp->data =val;
                aux->next=nuevo;
                nuevo->next=tmp->next;
                break;
            }
            cnt++;
            tmp=tmp->next;
            aux=tmp;
        }


    }
    void erase(int pos)
    {
        node*tmp=head;
        node*nuevo;
        node* aux=tmp->next;
        int cnt=0;

        while(tmp->next!=nullptr)
        {
            if(cnt==pos-1)
            {
                tmp->next=aux->next;
            }
        }

    }


    void pop_back();


    int operator [](int pos) {
        node* tmp = head;
        int i = 0;

        for (tmp; tmp != nullptr; tmp = tmp->next) {
            if (i == pos) {
                return tmp->data;
            }

            i++;
        }
    }

    int operator + (MyVector);
};


#endif //UNTITLED1_MYVECTOR_H
