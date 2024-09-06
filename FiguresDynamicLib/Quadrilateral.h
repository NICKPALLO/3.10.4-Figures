#pragma once
#include"Figure.h"
#include"spec.h"

class Quadrilateral : public Figure
{
protected:
	/*FIGURELIB_API*/ int a, b, c, d, A, B, C, D;
	FIGURELIB_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
public:
	FIGURELIB_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D, "Четырехугольник") {}
	FIGURELIB_API void print_info() override;
};