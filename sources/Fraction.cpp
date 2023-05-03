#include <iostream>

#include "Fraction.hpp"

namespace ariel {

    Fraction::Fraction(int num, int divider) : a(num), b(divider) {
        if(b == 0) {
            throw std::invalid_argument("Value incorrect, denominator can't be zero.");
        }
    }
    Fraction::Fraction(): a(0), b(1){}

    // +
    Fraction Fraction::operator+(const Fraction &other) {
        return Fraction(this->a, this->b);
    }
    Fraction Fraction::operator+(double num) {
        return Fraction(this->a, this->b);
    }

    // ++
    Fraction& Fraction::operator++() { //prefix
        return *this;
    }
    Fraction Fraction::operator++(int num) { //postfix
        return Fraction(this->a, this->b);
    }

    // -
    Fraction Fraction::operator-(const Fraction& other){
        return Fraction(this->a, this->b);
    }
    Fraction Fraction::operator-(double num){
        return Fraction(this->a, this->b);
    }

    // --
    Fraction& Fraction::operator--() { //prefix
        return *this;
    }
    Fraction Fraction::operator--(int num) { //postfix
        return Fraction(this->a, this->b);
    }

    // *
    Fraction Fraction::operator*(const Fraction& other){
        return Fraction(this->a, this->b);
    }
    Fraction Fraction::operator*(double num){
        return Fraction(this->a, this->b);
    }
    Fraction operator*(double num, Fraction& fraction) {
        return Fraction(1,1);
    }

    // /
    Fraction Fraction::operator/(const Fraction& other){
        return Fraction(this->a, this->b);
    }

    // >
    bool Fraction::operator>(Fraction& other) {
        return true;
    }
    bool Fraction::operator>(double num) {
        return true;
    }
    bool operator>(double num, Fraction const &other) {
        return true;
    }

    // >=
    bool Fraction::operator>=(Fraction& other) {
        return true;
    }

    // <
    bool Fraction::operator<(Fraction& other) {
        return true;
    }
    bool Fraction::operator<(double num) {
        return true;
    }
    bool operator<(double num, Fraction const &other) {
        return true;
    }

    // ==
    bool operator==(Fraction const &fraction1, Fraction const &fraction2) {
        return true;
    }
    bool operator==(Fraction const &fraction1, double num) {
        return true;
    }

    // COUT
    std::ostream& operator<< (std::ostream& output, const Fraction& fraction){
        return output;
    }

    // CIN
    std::istream& operator>> (std::istream& input , Fraction& fraction) {
        return input;
    }


}