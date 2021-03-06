#include <math.h>
#include <stdio.h>
#include <stdbool.h>

extern "C"{
    void printString(const char* str){
        printf("%s ", str);
    }

    void printLine(const char* str){
        printf("%s\n", str);
    }

    void printFloat(float i) {
        printf("%f\n", i);
    }

    void printDouble(double i) {
        printf("%lf ", i);
    }

    void printDoubleLine(double i) {
        printf("%lf\n", i);
    }

    void printInteger(int i) {
        printf("%d ", i);
    }

    void printIntegerLine(int i) {
        printf("%d\n", i);
    }

    void printLong(unsigned long i) {
        printf("%lu\n", i);
    }

    double randomDouble(double fMin, double fMax)
    {
      double f = (double)rand() / RAND_MAX;
      return fMin + f * (fMax - fMin);
    }

    double test(double* x, double* y, int z){
        return x[0] * y[0];
    }

}