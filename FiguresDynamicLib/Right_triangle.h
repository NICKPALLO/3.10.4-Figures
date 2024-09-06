#pragma once

#include"Triangle.h"
#include "Error.h"
#include"spec.h"

class Right_triangle : public Triangle
{
public:
	FIGURELIB_API Right_triangle(int a, int b, int c, int A, int B);
};