#pragma once
#include <stdexcept>
#include"spec.h"

class Error : public std::domain_error
{
public:
	FIGURELIB_API Error(std::string massage) : domain_error(massage) {
	}
};