#include "include/Base.hpp"
#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"

int main()
{
    Base *p = generate();
    // Base *A = new C();
    // Base &d = *A;
    Base &rf = *p;
    identify(p);
    identify(rf);
}