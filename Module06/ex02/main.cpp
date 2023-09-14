#include "include/Base.hpp"
#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"

int main()
{
    Base *p = generate();
    // Base *C = new C();
    // Base &d = *C;
    Base &rf = *p;
    identify(p);
    identify(rf);
}