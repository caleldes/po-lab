#ifndef UNTITLED5_4_1_H
#define UNTITLED5_4_1_H
unsigned int fib(int x)
{
    if(x==0)
        return 0;
    if(x==1)
        return 1;
    return fib(x-1)+fib(x-2);

}
#endif //UNTITLED5_4_1_H
