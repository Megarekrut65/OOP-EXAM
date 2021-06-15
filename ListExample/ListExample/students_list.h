#pragma once
#include "list.h"
#include "student.h"
class StudentsList
{
private:
    List<Student> list;
public:
    void read_from_file(const std::string& path);
    void write_to_file(const std::string& path);
};

