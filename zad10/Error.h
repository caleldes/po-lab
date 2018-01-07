#ifndef UNTITLED5_ERROR_H
#define UNTITLED5_ERROR_H
#include <iostream>
#include <exception>
using namespace std;

class Error : public exception{
protected:
    string message;
public:
    explicit Error();
    explicit Error(const char*);
    explicit Error(const string&);
    ~Error() throw() override;

    const char* what() const throw() override;
};
#endif //UNTITLED5_ERROR_H
