//
//  polynomial.h
//  exercise2
//
//  Created by jane cheong  on 20/11/2022.
//

#ifndef polynomial_h
#define polynomial_h

class polynomial
{
public:
    polynomial();
    polynomial(int deg, double coef[]);
    polynomial(const polynomial &p);
    polynomial(double const_term);
    ~polynomial();
//    void setdegree(int d);
//    int getdegree();
//    void setcoef(int k,double coef[]);
//    double getcoef();
//    double evaluate(double value);
    void print(std::ostream & out = std::cout) const;

private:
   int degree;
    double *coefficient;
};


#endif /* polynomial_h */
