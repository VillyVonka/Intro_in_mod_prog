//
// Created by Mother on 09.03.2022.
//
#include <iostream>
#include <cmath>
#include <random> //new c++11 random library

double Monte_Carlo(double );

const int N=100000000;
int main() {

    std::cout <<  Monte_Carlo(N) << std::endl;
    std::cout << M_PI;
}

double Monte_Carlo(double N){
    int nS = 0;
    int nC = 0;
    double x, y;
    //new c++11 random library
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0.0, 1.0);
    //
    for (int i = 0; i < N; i++) {
        x = dist(mt);
        y = dist(mt);
        if (x * x + y * y < 1)
            nC++;
        nS++;
    }
    return nC*4.0 / nS;
}