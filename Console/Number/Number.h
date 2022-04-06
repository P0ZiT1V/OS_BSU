#pragma once



    class Number
    {
        
        
    public:
        double number;
        static const int zero = 0;
        static const int one = 1;
        Number(double var);
        // Returns a + b
         Number Add(Number a, Number b);
       
        // Returns a - b
         Number Subtract(Number a, Number b);

        // Returns a * b
        Number Multiply(Number a, Number b);

        // Returns a / b
         Number Divide(Number a, Number b);
    
        // Number operator+(Number left);
         const Number operator+(const Number left);
         const Number operator-( const Number  left);
         const Number operator*(const Number left);
         const Number operator/(const Number left);
        
    };
    const Number ZERO = Number(0);
    const Number ONE = Number(1);