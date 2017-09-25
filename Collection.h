//Collection.h
//Kole Earhart
//COSC 2030
// 09/21/2017

#ifndef COLLECTION_H

#define COLLECTION_H

#include<iostream>

#include <cstdlib>
using namespace std;



template<Class T>

class Collection
{
public:

    Collection(int value);

    ~Collection();

    void makeEmpty();

    bool isEmpty() const;

    void insert(int x);

    bool remove(int x);

    void removeRandom();

    bool notContained(int x) const;

    void print() const;

private:
    int size;
    int s;
    T *obj;
};

template<class T>

Collection<T>::Collection(int value)
{

    size = value;
    obj = new T[value];
    s = 0;
}
template<class T>

bool notContained(int x)
{

    for(int i=0; i<size; i++)
    {
        if(obj[i] == x)
        {
            return false;
        }

    }
    return true;
}
template<class T>

bool Collection<T>::isEmpty()
{
    if(size==0)
    {

        return true;
    }
    return false;
}
template<class T>

void Collection<T>::makeEmpty()

{

	delete[] obj;
	s = 0;
	obj = new T[size];

}

template <class T>

void Collection<T>::insert(int x)

{

	if(index < size)

	{

		obj[s] = x;

		s++;

	}

	else

	{

		size *= 2;

		T *temp = new T[size];

		for(int i = 0;i < s; i++)

		{

			temp[i] = obj[i];

		}

		delete[] obj;

		obj = temp;



		obj[s] = x;

		s++;

	}



}

template <class T>

bool Collection<T>::remove(int x)

{

    for(int i=0; i < size; i++)

    {

         if (obj[i] == x)

         {

             for(int j=i; j< size; j++)

			 {

				 obj[j] = obj[j+1];

			 }


			 s--;

			 return true;

         }

    }



    return false;

}
template <class T>

void Collection<T>::removeRandom()

{

	srand(time(0));



    int random = rand() % s;

    remove(obj[random]);

}
template <class T>

void Collection<T>::print()

{

	cout << "Size: " << s << endl;

	cout << "Elements: ";

	for (int i = 0; i < s; i++)

	{

		cout << obj[i] << ", ";

	}

	cout << endl;

}

#endif
