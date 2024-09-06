#pragma once
#include"Figure.h"
#include"spec.h"

class Triangle : public Figure
{
protected:
	/*FIGURELIB_API*/ int a, b, c, A, B, C;
	FIGURELIB_API Triangle(int a, int b, int c, int A, int B, int C, std::string name);
public:
	FIGURELIB_API Triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, "Треугольник") {}
	FIGURELIB_API void print_info() override;
};