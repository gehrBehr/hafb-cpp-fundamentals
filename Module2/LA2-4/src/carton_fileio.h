/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** carton_fileio
*/
#pragma once

#include <array>
#include <iostream>
#include <string>
#include <fstream>
#include "carton.h"

const int kMaxArraySize = 20;

std::string ReadDataFormatFromFile(std::string filename,
 std::array<Carton,kMaxArraySize>& cartons, int& record_num);

void WriteDataToFile(std::string filename, 
const std::array<Carton, kMaxArraySize>& cartons, int rec_num); //by const reference.
