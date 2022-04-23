#include <iostream>
#include <cmath>
#include "includes/Complex.h"

bool test1()
{
    Complex tmp_f(4.5732, 15.7123);
    Complex tmp_s(4.5732, 15.7123);
    Complex tmp_t(4.5735, 15.7125);

    if (!(tmp_f == tmp_s)) 
	{
        std::cout << "Test 1 has failed" << std::endl;
        return false;
    }
    if (tmp_t == tmp_s)
	{
        std::cout << "Test 1 has failed" << std::endl;
		return false;
    }
    return true;
}

bool test2() 
{
    Complex tmp_f(4.573267, 15.712341);
    Complex tmp_s(4.573267, 15.712341);
    Complex tmp_t(4.573266, 15.712342);
    if (tmp_f != tmp_s) 
	{
        std::cout << "Test 2 has failed" << std::endl;
        return false;
    }
    if (!(tmp_f != tmp_t)) 
	{
        std::cout << "Test 2 has failed" << std::endl;
	return false;
    }
    return true;
}

bool test3() 
{
    Complex tmp_f(4.5, 7.3);
    Complex tmp_s(4.5, 15.5);
    Complex res = tmp_f + tmp_s;
    if (res.re != 9) 
	{
        std::cout << "Test 3 has failed" << std::endl;
        return false;
    }
    if (res.im != 22.8) 
	{
        std::cout << "Test 3 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test4() 
{
    Complex tmp_f(4.5, 7.3);
    Complex tmp_s(4.5, 15.5);
    Complex res = tmp_f - tmp_s;
    if (res.re != 0) 
	{
        std::cout << "Test 4 has failed" << std::endl;
        return false;
    }
    if (res.im != -8.2) 
	{
        std::cout << "Test 4 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test5() 
{
    Complex tmp_f(5, 7);
    Complex tmp_s(6, 8);
    Complex res = tmp_f * tmp_s;
    if (res.re != -26) 
	{
        std::cout << "Test 5 has failed" << std::endl;
        return false;
    }
    if (res.im != 82) 
	{
        std::cout << "Test 5 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test6() 
{
    Complex tmp_f(5, 7);
    Complex tmp_s = -tmp_f;
    if (tmp_s.re != -5) 
	{
        std::cout << "Test 6 has failed" << std::endl;
        return false;
    }
    if (tmp_s.im != -7) 
	{
        std::cout << "Test 6 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test7() 
{
    Complex tmp_f(4, 10);
    tmp_f = tmp_f * 0.5;
    if (tmp_f.re != 2) 
	{
		std::cout << "Test 7 has failed" << std::endl;
        return false;
    }
    if (tmp_f.im != 5) 
	{
		std::cout << "Test 7 has failed" << std::endl;
        return false;   
    }
    return true;
}

bool test8() 
{
    Complex tmp_f(4, 5), tmp_s(3, 4);
    tmp_f = tmp_f/tmp_s;
    if (fabs(tmp_f.re - 1.28) > 1e-9) 
	{
		std::cout << "Test 8 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.im + 0.04) > 1e-9) 
	{
		std::cout << "Test 8 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test9() 
{
    Complex tmp_f(2.6, 4.2);
    Complex tmp_s(1.4, 11.3);
    tmp_f += tmp_s;
    if (fabs(tmp_f.re - 4.0) > 1e-9) 
    {
        std::cout << "Test 9 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.im - 15.5) > 1e-9) 
    {
        std::cout << "Test 9 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test10() 
{
    Complex tmp_f(2.6, 4.2);
    Complex tmp_s(1.4, 11.3);
    tmp_f -= tmp_s;
    if (fabs(tmp_f.re - 1.2) > 1e-9) 
    {
        std::cout << "Test 10 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.im + 7.1) > 1e-9) 
    {
        std::cout << "Test 10 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test11() 
{
    Complex tmp_f(2.0, 4.0);
    Complex tmp_s(3.0, 5.0);
    tmp_f *= tmp_s;
    if (fabs(tmp_f.re + 14.0) > 1e-9) 
    {
        std::cout << "Test 11 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.im - 22.0) > 1e-9) 
    {
        std::cout << "Test 11 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test12() 
{
    Complex tmp_f(2.0, 4.0);
    tmp_f /= 0.5;
    if (fabs(tmp_f.re - 4) > 1e-9) 
    {
        std::cout << "Test 12 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.im - 8) > 1e-9) 
    {
        std::cout << "Test 12 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test13() 
{
    Complex tmp_f(3.0, 4.0);
    if (fabs(tmp_f.abs() - 5.0) > 1e-9) {
        std::cout << "Test 13 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test14() 
{
    Complex tmp_f(2.5, 3.5);
    Complex tmp_s;
    tmp_s = tmp_f;
    if (abs(tmp_s.re - 2.5) > 1e-9 || abs(tmp_s.im - 3.5) > 1e-9) 
    {
        std::cout << "Test 14 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test15() 
{
    Complex tmp(2.5, 3.5);
    tmp = 2.0 * tmp;
    if (abs(tmp.re - 5) > 1e-9) {
        std::cout << "Test 17 has failed" << std::endl;
        return false;
    }
    return true;
}

bool start_tests() {
    bool result = true;
    
    result = result && test1();
    result = result && test2();
    result = result && test3();
    result = result && test4();
    result = result && test5();
    result = result && test6();
    result = result && test7();
    result = result && test8();
    result = result && test9();
    result = result && test10();
    result = result && test11();
    result = result && test12();
    result = result && test13();
    result = result && test14();
    result = result && test15();

    return result;
}

int main()
{
	bool tests_passed = start_tests();
	if (tests_passed) 
		std::cout << "All the tests have been successfully passed" << std::endl;
	else
		std::cout << "Some tests have failed" << std::endl;

	return 0;
}