/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description: More library and function practice.
** my_functions
*/

#pragma once

#include <iomanip>
#include <iostream>
#include <array>
using namespace std;

//prototype
int GetSum(int, int);

char GetOperator();

void UpdateStep(int&);

int Max2(int num1, int num2);
int Max3(int num1, int num2, int num3);
int Max10(const array<int,10>& nums); // pass by const address as much as you can
//you take advantage of the performance but don't let anything change.


void ClearElements(array<int,10>&);


