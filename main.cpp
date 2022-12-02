//
//  main.cpp
//  exercise2
//
//  Created by jane cheong  on 20/11/2022.
//

#include <iostream>
#include <cassert>
#include "polynomial.h"

polynomial::polynomial(){
    degree = degree +1;
    coefficient = new double [degree];
    for (int i =0; i< degree; i++){
        coefficient[i]=0;
        }
}

 polynomial::polynomial(int k,double coef[]){
     degree = k;
     coefficient = new double[k];
    for (int i=0;i <=  degree; i++){
    coefficient[i]=coef[i];
    }
}

polynomial::polynomial(double const_term){
    degree = 1;
    coefficient = new double [1];
    coefficient[0] = const_term;
}

polynomial::~polynomial(){
        delete [] coefficient;
}

void polynomial::print(std::ostream & out) const {
    if (degree == 0) {
        return;
    }
 
    for (int i = degree; i > 0; i--)
        out << coefficient[i] << "x^" << i << " + ";
    out << coefficient[0];
}
 
std::ostream & operator<<(std::ostream & out, const polynomial &s) {
    s.print(out);
    return out;
}



//void polynomial::setdegree(int d){
//    std::cout << "Enter the polynomial degree" << std::endl;
//    std::cin >> d;
//    degree=d;
//}

// int polynomial::getdegree(){
//    return degree;
// }



//double polynomial::getcoef(){
//    return coefficient[degree];
//}

//polynomial::polynomial(int deg, double coef[]){
//    degree = deg;
//    coefficient = new double [deg];
//    for (int i = 0; i < deg ;i++){
//        coefficient[i]=coef[i];
//    }
//    }




//double polynomial::evaluate(double value){
//           double power = 1,
//                  result = 0;
////
//           for (int i = 0; i <= degree; i++)
//           {
//               result += coefficient[i] * power;
//              power *= value;
//           }
//           return result;
//        }
//
//std::ostream & operator<<(std::ostream & out, const polynomial &a){
//    {
//        if ( a.degree== -1 )
//        {
//           std::cout << 0;
//           return out;
//        }
//        out << a.coefficient[a.degree] << "x^" << a.degree;
//        for (int i = a.degree -1; i >= 0; i--)
//       {
//          out << " + ";
//          if ( a.coefficient[i] < 0.0 )
//             out << '(' << a.coefficient[i] << ')';
//          else
//             out << a.coefficient[i];
//          out << "x^" << i;
//       }
//
//       return out;
//    }
//}

int main(){
    double coef[]={1,2,3,4,5};
        polynomial p1(4,coef);
        std::cout << "The polynomial p1 is " << p1 << std::endl;
    return 0;
}
