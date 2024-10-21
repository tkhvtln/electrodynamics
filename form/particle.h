#pragma once
#ifndef PARTICLE_H
#define PARTICLE
#include <cmath>
#include <deque>
#include "trajec.h"

class particle
{
public:
	std::deque<trajec> trv;
	trajec tr;

	bool ch, VB, w = false, sh = false;
	int ii = 0;
	double q, m, v, al, B, x0, y0, z0, z;

	double i = 0;
	double r, T, F, h, x, y;
	double red, green, blue; //RGB 

	void init(bool, bool, double, double, double, double, double, double, double, double);
	void init(bool, double);
	void radius();
	void period();
	void step();
	void trajectory();
	void direction();
	void color();
	void LForce();

	void ftr();
};

#endif 

