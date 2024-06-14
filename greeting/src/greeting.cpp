#include "greeting.h"

#include <string>

std::string say_greeting(std::string name)
{
	if (name == "")
		return "Hello, my friend";
	else
		return "Hello, " + name;
}
