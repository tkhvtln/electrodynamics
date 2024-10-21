#include <cmath>
#include "particle.h"

const double PI = 3.14159265;

void particle::init(bool ch, bool VB, double B, double q, double m, double v, double al, double x0, double y0, double z0) {
	this->ch = ch;
	this->VB = VB;
	this->B  = B;
	this->q  = q;
	this->m  = m;
	this->v  = v;
	this->al = al;
	this->x0 = x0;
	this->y0 = y0;
	this->z0 = z0;

	tr.ftrajec(x, y, z0);
	trv.push_back(tr);
}
void particle::init(bool VB, double B) { 
	if (this->VB != VB || this->B != B) {
		trv.clear();
		ii = 0;
	}

	this->VB = VB; 
	this->B = B; 
}
void particle::radius() { r = m * v / q * B; }
void particle::period() { T = 2 * PI / q * B; }
void particle::step() {
	if (al == 90)
		h = 0;
	else
		h = v * abs(cos(al)) * T; 
}
void particle::trajectory() {
	x = cos(i) * r + x0;
	y = sin(i) * r + y0;
}
void particle::direction() {
	if (ch && VB)
	{
		i = i - 6.28 / T;
		if (al > 0 && al < 90)
			z0 = z0 + abs(h) / T;
		else if (al < 0 && al > -90)
			z0 = z0 - abs(h) / T;
	}
	if (!ch && VB)
	{
		i = i + 6.28 / T;
		if (al > 0 && al < 90)
			z0 = z0 + abs(h) / T;
		else if (al < 0 && al > -90)
			z0 = z0 - abs(h) / T;
	}
	if (ch && !VB)
	{
		i = i + 6.28 / T;
		if (al > 0 && al < 90)
			z0 = z0 + abs(h) / T;
		else if (al < 0 && al > -90)
			z0 = z0 - abs(h) / T;
	}
	if (!ch && !VB)
	{
		i = i - 6.28 / T;
		if (al > 0 && al < 90)
			z0 = z0 + abs(h) / T;
		else if (al < 0 && al > -90)
			z0 = z0 - abs(h) / T;
	}
}
void particle::color() {
	if (ch) {
		red = 0.0;
		green = 1.0;
		blue = 0.0;
	}
	else {
		red = 1.0;
		green = 0.0;
		blue = 0.0;
	}
}
void particle::LForce() { F = abs(q) * v * B * sin(al); } 

void particle::ftr() {
	tr.ftrajec(x, y, z0);
	trv.push_back(tr);
}