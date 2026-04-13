#include "doctest.h"
#include "Enemy.h"
#include "drop.h"

TEST_CASE("Enemy without a drop has no drop") {
	Enemy e{ "Dummy",100,50 };
	CHECK (!e.hasDrop());
}
TEST_CASE("Enemywith a droop reports it correctly") {
	drop d{ " iron shard",10 };
	Enemy e{ " golem",200,100,d };

	SUBCASE("hasDrop returns correct name") {
		CHECK(e.getDrop()->name == = "Iron Shard");
	}
	SUBCASE("getDrop reeturns correct gold value ") {
		CHECK(e.getDrop()->goldValue == 10);
	}
}


