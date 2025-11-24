#ifndef LINETYPE_H
#define LINETYPE_H

class lineType {
private:
    double a;
    double b;
    double c;   // line in the form: a*x + b*y = c

public:
    // Constructors
    lineType();
    lineType(double A, double B, double C);

    // Mutators / Accessors
    void setLine(double A, double B, double C);
    void getCoefficients(double& A, double& B, double& C) const;

    // Line properties
    double getSlope() const;      // WARNING: undefined if vertical (b == 0)
    bool isVertical() const;
    bool isHorizontal() const;

    // Relationships between two lines
    bool isParallel(const lineType& other) const;
    bool isPerpendicular(const lineType& other) const;

    // Intersection of two lines
    // Returns true if a unique intersection exists, and puts the point in x, y.
    // Returns false if the lines are parallel or the same line.
    bool intersectionPoint(const lineType& other, double& x, double& y) const;
};

#endif



