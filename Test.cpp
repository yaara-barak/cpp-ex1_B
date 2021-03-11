#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("illeagal number of digits") {
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(77777));
    CHECK_THROWS(snowman(58543));
    CHECK_THROWS(snowman(020050));
    CHECK_THROWS(snowman(666));
}

TEST_CASE("illeagal numbers") {
    CHECK_THROWS(snowman(15611911));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(-12345678));
    CHECK_THROWS(snowman(99987654));
    CHECK_THROWS(snowman(33333338));
    CHECK_THROWS(snowman(20708024));
    CHECK_THROWS(snowman(66666666));
}

TEST_CASE("correct output- hat cases"){
    CHECK(snowman(12341234) == string("\n       \n _===_ \n (O.-)/\n<(> <) \n (   ) "));
    CHECK(snowman(21212221) == string("\n  ___  \n ..... \n\\(o,.)/\n (] [) \n ( : ) "));
    CHECK(snowman(33334444) == string("\n   _   \n  /_\\  \n (O_O) \n (   ) \n (   ) ")); 
    CHECK(snowman(43444444) == string("\n  ___  \n (_*_) \n (-_-) \n (   ) \n (   ) ")); 
}

TEST_CASE("correct output- nose cases"){
    CHECK(snowman(11214411) == string("\n       \n _===_ \n (o,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12114411) == string("\n       \n _===_ \n (...) \n ( : ) \n ( : ) "));
    CHECK(snowman(43223343) == string("\n  ___  \n (_*_) \n (o_o) \n/(   )\\\n (___) "));
    CHECK(snowman(14114411) == string("\n       \n _===_ \n (. .) \n ( : ) \n ( : ) "));
}

TEST_CASE("correct output- eyes cases"){
     CHECK(snowman(11114411) == string("\n       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
     CHECK(snowman(12341121) == string("\n       \n _===_ \n (O.-) \n<(] [)>\n ( : ) "));
     CHECK(snowman(14444411) == string("\n       \n _===_ \n (- -) \n ( : ) \n ( : ) "));
     CHECK(snowman(43223343) == string("\n  ___  \n (_*_) \n (o_o) \n/(   )\\\n (___) "));
}

TEST_CASE("correct output- hands cases"){
    CHECK(snowman(11111111) == string("\n       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(21232224) == string("\n  ___  \n ..... \n\\(o,O)/\n (] [) \n (   ) "));
    CHECK(snowman(43223344) == string("\n  ___  \n (_*_) \n (o_o) \n/(   )\\\n (   ) "));
    CHECK(snowman(11114411) == string("\n       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
}

TEST_CASE("correct output- torso cases"){
     CHECK(snowman(11114411) == string("\n       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
     CHECK(snowman(21211121) == string("\n  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));
     CHECK(snowman(12341131) == string("\n       \n _===_ \n (O.-) \n<(> <)>\n ( : ) "));
     CHECK(snowman(33224441) == string("\n   _   \n  /_\\  \n (o_o) \n (   ) \n ( : ) "));
}

TEST_CASE("correct output- base cases"){
    CHECK(snowman(13114411) == string("\n       \n _===_ \n (._.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11114422) == string("\n       \n _===_ \n (.,.) \n (] [) \n (\" \") "));
    CHECK(snowman(11111113) == string("\n       \n _===_ \n (.,.) \n<( : )>\n (___) "));
    CHECK(snowman(43443334) == string("\n  ___  \n (_*_) \n (-_-) \n/(> <)\\\n (   ) "));   
}