#include <iostream>

namespace ariel {

    class Fraction {

    private:
        int a, b;


    public:
        Fraction(int num, int divider);
        Fraction();

        // +
        Fraction operator+(const Fraction& other);
        Fraction operator+(double num);
        friend Fraction operator+(double num, Fraction& fraction);

        // -
        Fraction operator-(const Fraction& other);
        Fraction operator-(double num);
        friend Fraction operator-(double num, Fraction& fraction);

        // *
        Fraction operator*(const Fraction& other);
        Fraction operator*(double num);
        friend Fraction operator*(double num, Fraction& fraction);

        // /
        Fraction operator/(const Fraction& other);

        //++
        Fraction& operator++(); //prefix
        Fraction operator++(int num); //postfix

        //--
        Fraction& operator--(); //prefix
        Fraction operator--(int num); //postfix


        // >
        bool operator>(Fraction& other);
        bool operator>(double num);
        friend bool operator>(double num, Fraction const &other);

        // >=
        bool operator>=(Fraction& other);
        bool operator>=(double num);
        friend bool operator>=(double num, Fraction const &other);

        //<
        bool operator<(Fraction& other);
        bool operator<(double num);
        friend bool operator<(double num, Fraction const &other);

        //<=
        bool operator<=(Fraction& other);
        bool operator<=(double num);
        friend bool operator<=(double num, Fraction const &other);

        //==
        friend bool operator==(Fraction const &fraction1, Fraction const &fraction2);
        friend bool operator==(Fraction const &fraction, double num);

        //!=
        friend bool operator!=(Fraction const &fraction1, Fraction const &fraction2);
        friend bool operator!=(Fraction const &fraction, double num);


        //cout
        friend std::ostream& operator<< (std::ostream& output, const Fraction& fraction);

        //cin
        friend std::istream& operator>> (std::istream& input , Fraction& fraction);
    };
}