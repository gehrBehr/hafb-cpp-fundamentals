#ifndef CONTAINERS_H_
#define CONTAINERS_H_
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

struct Data
{
    int id;
    std::string name;
    std::string animal;
};

void LoadData(std::vector<Data>& data, const std::string& input_file);


#endif /* !CONTAINERS_H_ */
