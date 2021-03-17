#include <iostream>
#include "matplotlibcpp.h"

using namespace std;

namespace plt = matplotlibcpp;

int main() {
	plt::plot({ 1, 3, 2, 4 });
	plt::show();
}