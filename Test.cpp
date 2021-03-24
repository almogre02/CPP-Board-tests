#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"
using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;
#include <iostream>
#include <stdexcept>
using ariel::Direction;

ariel::Board board;
//->for part 2

// TEST_CASE("Reading from empty board->before entering any values") {
// 	CHECK(board.read(0, 0, Direction::Horizontal, 5) == "_____");
// 	CHECK(board.read(1, 3, Direction::Horizontal, 3) == "___");
// 	CHECK(board.read(4, 2, Direction::Vertical, 1) == "_");
// 	CHECK(board.read(0, 4, Direction::Vertical, 4) == "____");
// }
TEST_CASE("Reading from empty board->before entering any values") {
	CHECK(board.read(0, 0, Direction::Horizontal, 5) == "check");
	CHECK(board.read(1, 3, Direction::Horizontal, 3) == "check");
	CHECK(board.read(4, 2, Direction::Vertical, 1) == "check");
	CHECK(board.read(0, 4, Direction::Vertical, 4) == "check");
}
//->for part 2

// TEST_CASE("Good read code") {
// 	board.post(0, 0, Direction::Horizontal, "almog");
// 	CHECK(board.read(0, 0, Direction::Horizontal, 5) == "almog");
// 	cout << board.read(0,0,Direction::Horizontal,5) << endl;
// 	cout<< "000000000000000000"<< endl;
// 	board.post(1, 0, Direction::Horizontal, "abcd");
// 	CHECK(board.read(1, 1, Direction::Vertical, 3) == "b__");
// 	board.post(1, 4, Direction::Vertical, "zzzz");
// 	CHECK(board.read(0, 4, Direction::Vertical, 5) == "gzzzz");
// 	board.post(3, 1, Direction::Horizontal, "00");
// 	CHECK(board.read(3, 0, Direction::Horizontal, 4) == "_oo_");
// 	board.post(2, 0, Direction::Vertical, "xyz");
// 	CHECK(board.read(4, 0, Direction::Horizontal, 5) == "z___z");
// 	CHECK(board.read(0, 2, Direction::Vertical, 5) == "mc_o_");
// }

TEST_CASE("Good read code") {
	board.post(0, 0, Direction::Horizontal, "almog");
	CHECK(board.read(0, 0, Direction::Horizontal, 5) == "check");
	board.post(1, 0, Direction::Horizontal, "abcd");
	CHECK(board.read(1, 1, Direction::Vertical, 3) == "check");
	board.post(1, 4, Direction::Vertical, "zzzz");
	CHECK(board.read(0, 4, Direction::Vertical, 5) == "check");
	board.post(3, 1, Direction::Horizontal, "00");
	CHECK(board.read(3, 0, Direction::Horizontal, 4) == "check");
	board.post(2, 0, Direction::Vertical, "xyz");
	CHECK(board.read(4, 0, Direction::Horizontal, 5) == "check");
	CHECK(board.read(0, 2, Direction::Vertical, 5) == "check");
}

//->for part 2

// TEST_CASE("Good read code with Overriding values") {
// 	CHECK(board.read(0, 0, Direction::Vertical, 5) == "aaxyz");
// 	board.post(1, 0, Direction::Vertical, "qqq");
// 	CHECK(board.read(0, 0, Direction::Vertical, 5) == "aqqqz");

// 	CHECK(board.read(2, 1, Direction::Horizontal, 4) == "___z");
// 	board.post(2, 2, Direction::Horizontal, "bbb");
// 	CHECK(board.read(2, 1, Direction::Horizontal, 4) == "_bbb");

// 	CHECK(board.read(0, 1, Direction::Vertical, 5) == "lb_o_");
// 	board.post(3, 0, Direction::Horizontal, "xxx");
// 	CHECK(board.read(0, 1, Direction::Vertical, 5) == "lb_x_");

	// CHECK(board.read(4, 0, Direction::Horizontal, 5) == "z___z");
	// CHECK(board.read(0, 0, Direction::Vertical, 5) == "aqqxz");
	// CHECK(board.read(4, 0, Direction::Vertical, 5) == "gzbzz");
	// board.post(4, 0, Direction::Horizontal, "o");
	// board.post(4, 4, Direction::Horizontal, "o");
	// CHECK(board.read(4, 0, Direction::Horizontal, 5) == "o___o");
	// CHECK(board.read(0, 0, Direction::Vertical, 5) == "oqqxz");
	// CHECK(board.read(4, 0, Direction::Vertical, 5) == "gzbzo");

	// CHECK(board.read(0, 2, Direction::Vertical, 5) == "mcbx_");
	// board.post(4, 4, Direction::Vertical, "o");
	// CHECK(board.read(4, 0, Direction::Horizontal, 5) == "o_o_o");
	// CHECK(board.read(0, 2, Direction::Vertical, 5) == "mcox_");
// }

TEST_CASE("Good read code with Overriding values") {
	CHECK(board.read(0, 0, Direction::Vertical, 5) == "check");
	board.post(1, 0, Direction::Vertical, "qqq");
	CHECK(board.read(0, 0, Direction::Vertical, 5) == "check");

	CHECK(board.read(2, 1, Direction::Horizontal, 4) == "check");
	board.post(2, 2, Direction::Horizontal, "bbb");
	CHECK(board.read(2, 1, Direction::Horizontal, 4) == "check");

	CHECK(board.read(0, 1, Direction::Vertical, 5) == "check");
	board.post(3, 0, Direction::Horizontal, "xxx");
	CHECK(board.read(0, 1, Direction::Vertical, 5) == "check");

	//CHECK(board.read(4, 0, Direction::Horizontal, 5) == "z___z");
	//CHECK(board.read(0, 0, Direction::Vertical, 5) == "aqqxz");
	//CHECK(board.read(4, 0, Direction::Vertical, 5) == "gzbzz");
	//board.post(4, 0, Direction::Horizontal, "o");
	//board.post(4, 4, Direction::Horizontal, "o");
	//CHECK(board.read(4, 0, Direction::Horizontal, 5) == "o___o");
	//CHECK(board.read(0, 0, Direction::Vertical, 5) == "oqqxz");
	//CHECK(board.read(4, 0, Direction::Vertical, 5) == "gzbzo");

	//CHECK(board.read(0, 2, Direction::Vertical, 5) == "mcbx_");
	//board.post(4, 4, Direction::Vertical, "o");
	//CHECK(board.read(4, 0, Direction::Horizontal, 5) == "o_o_o");
	//CHECK(board.read(0, 2, Direction::Vertical, 5) == "mcox_");
	
	
	CHECK(board.read(4, 0, Direction::Horizontal, 5) == "check");
	CHECK(board.read(0, 0, Direction::Vertical, 5) == "check");
	CHECK(board.read(4, 0, Direction::Vertical, 5) == "check");
	board.post(4, 0, Direction::Horizontal, "o");
	board.post(4, 4, Direction::Horizontal, "o");
	CHECK(board.read(4, 0, Direction::Horizontal, 5) == "check");
	CHECK(board.read(0, 0, Direction::Vertical, 5) == "check");
	CHECK(board.read(4, 0, Direction::Vertical, 5) == "check");

	CHECK(board.read(0, 2, Direction::Vertical, 5) == "check");
	board.post(4, 4, Direction::Vertical, "o");
	CHECK(board.read(4, 0, Direction::Horizontal, 5) == "check");
	CHECK(board.read(0, 2, Direction::Vertical, 5) == "check");
}





