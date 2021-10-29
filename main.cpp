#include <iostream>
#include <ctime>



#include "src/constants.h" // must compile with "src/constants.cpp"
#include "examples/crypto.h"
#include "src/crc32.h"


int main() {
	// init time counter in seconds
	time_t start_time, end_time, delta_time;
	time(&start_time);

	// (get/print)-functions:


	// end time counter
	time(&end_time);
	delta_time = difftime(end_time, start_time);
	// print how long did the process take
	std::cout << '\t' << delta_time << " sec.\n";

  std::cout << "End.\n";

	return 0;
}