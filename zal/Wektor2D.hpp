class Wektor2D
{
public:
    double x;
    double y;

    void   setX(double a) { x = a; }
    double getX(double c) { return c * x; }
    void   setY(double b) { y = b; }
    double getY(double d) { return d * y; }

    Wektor2D()
    {
        setX(0);
        setY(0);
    }
    Wektor2D(double a, double b)
    {
        setX(a);
        setY(b);
    }
    Wektor2D operator+(Wektor2D param)
    {
        Wektor2D temp;
        temp.x = x + param.x;
        temp.y = y + param.y;

        return (temp);
    }

    friend double operator*(const Wektor2D v1, const Wektor2D v2)
    {
        return v1.x * v2.x + v1.y * v2.y;
    }
};
