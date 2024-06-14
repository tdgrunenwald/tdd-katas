#include "greeting.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Greeting should use the given name")
{
	std::string name;

	SUBCASE("") { name = "Bob"; };
	SUBCASE("") { name = "Alice"; };
	SUBCASE("") { name = "Joe"; };
	SUBCASE("") { name = "Hubert"; };

	std::string greeting = say_greeting(name);
	CHECK(greeting == "Hello, " + name);
}

TEST_CASE("Greeting should use generic stand in when empty name is given")
{
	std::string greeting = say_greeting("");
	CHECK(greeting == "Hello, my friend");
}
