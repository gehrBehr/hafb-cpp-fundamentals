#include "carton_fileio.h"

std::string ReadDataFormatFromFile(std::string filename,
 std::array<Carton,kMaxArraySize>& cartons, int& rec_num)
{
    std::ifstream data_input(filename); 
    if (data_input.fail())
    {
        return "Unable to open file.";
    }
    //good to go
    std::string message = "";
    double side1, side2, side3; //read data from file.
    //Load data
    while (rec_num < kMaxArraySize && !data_input.eof())
    {
        data_input >> side1 >> side2 >> side3;
        //load data into array of cartons.
        try
        {
            cartons[rec_num] = Carton(side1, side2, side3);
            rec_num++; //keep track of records being loaded.
        }
        catch(const std::exception& e)
        {
            message += e.what();
            message += "\n";
        }
        
    }
    data_input.close();
    return message;   
}

void WriteDataToFile(std::string filename, 
const std::array<Carton, kMaxArraySize>& cartons, int rec_num)
{
    std::ofstream file_out(filename);

    //TODO: check for writing error.

    //file_out << "Length,Width,Height\n";

    for (int index = 0; index < rec_num; ++index)
    {
        cartons[index].WriteData(file_out);
    }
}
