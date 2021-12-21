{
    return Add (a, -b);
}

int Calculator::Mul(double a, double b)
{
    return a * b + 0.5;
}

template<typename T>
T Calculator::Increment(T&& data) {
    return ++data;


