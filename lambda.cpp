/*
 * lambda.cpp
 *
 *  Created on: 13-Feb-2020
 *      Author: user
 */


#include<iostream>
using namespace std;


//syntax : [capture](parameters)->return-type {body}

auto lmda = []() {
   cout << "Lambda function "<<endl;
};

auto lmda2 = [](int value) {
   cout << value<<endl;
};

