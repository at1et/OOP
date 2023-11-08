//Poluektov Andrey, VMK-22
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int randomNum();

int calculateAbsSum(const vector<double>& arr);

bool numFromFile(const char* filename, vector<double>& arr);

void saveResultsToFile(const vector<double>& data, int sum, const string& filename);
#pragma once
