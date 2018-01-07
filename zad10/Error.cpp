#include "Error.h"

Error::Error() {

}

Error::Error(const char* message) {
    this->message=message;
}

Error::Error(const string& message) {

}

const char *Error::what()  const throw(){
    return message.c_str();
}

Error::~Error() {

}

