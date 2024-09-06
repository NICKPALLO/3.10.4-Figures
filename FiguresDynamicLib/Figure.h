#pragma once
#include <iostream>
#include"spec.h"

class Figure
{
protected:
	int sizeNum;
	bool permission;
	std::string name;
public:
	FIGURELIB_API Figure();
	FIGURELIB_API bool get_permission();
	FIGURELIB_API int get_sizeNum();
	FIGURELIB_API std::string get_name();
	FIGURELIB_API virtual void print_info() {}
};