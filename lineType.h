#ifndef LINETYPE_H
#define LINETYPE_H

struct pointType {
    double x;
    double y;
    bool valid;
};

class lineType {
private:
    double a, b, c;

public:
    lineType();
    lineType(double A, double B, double C);

    double slope() const;

    bool isEqual(const lineType& other) const;

    bool isParallel(const lineType& other) const;

    bool isPerpendicular(const lineType& other) const;

    pointType intersection(const lineType& other) const;

    void print() const;
};

#endif
