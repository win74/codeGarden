//
//   This file contains the C++ code from Program 7.2 of
//   "Data Structures and Algorithms
//    with Object-Oriented Design Patterns in C++"
//   by Bruno R. Preiss.
//
//   Copyright (c) 1998 by Bruno R. Preiss, P.Eng.  All rights reserved.
//
//   http://www.pads.uwaterloo.ca/Bruno.Preiss/books/opus4/programs/pgm07_02.cpp
//
class ListAsArray : public virtual OrderedList
{
protected:
    Array<Object*> array;

    class Pos;
public:
    ListAsArray (unsigned int);
    // ...
    friend class Pos;
};
