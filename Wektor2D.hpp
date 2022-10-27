class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
public:
	//ZMIENNE
	double x;
	double y;

	//KONSTRUKTORY
	Wektor2D() { x = 0; y = 0; }
	Wektor2D(double a, double b) 
	{ 
		x = a; 
		y = b; 
	}


	//SETTERY
	void setX(double a) { x = a; }
	void setY(double a) { y = a; }
	//GETTERY
	double getX() { return x; }
	double getY() { return y; }


};

Wektor2D operator+ (Wektor2D d1, Wektor2D d2)
{
	return Wektor2D{ d1.x+d2.x, d1.y+d2.y };
}

double operator* (Wektor2D d1, Wektor2D d2)
{
	return d1.x*d2.x+d1.y*d2.y;
}
