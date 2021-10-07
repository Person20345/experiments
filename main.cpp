#include <iostream>
#include <ctime>



#include "src/constants.h" // must compile with "src/constants.cpp"
#include "src/aes.h"


int main() {
	// init time counter in seconds
	time_t start_time, end_time, delta_time;
	time(&start_time);

	// (get/print)-functions:

  unsigned char plain[] = "text_for_my_friends_and_me_test_aes";
  unsigned char key[] = "key";
  unsigned int plainLen = 35 * sizeof(unsigned char);  //bytes in plaintext
  unsigned int outLen = 0;  // out param - bytes in сiphertext

  AES aes(256);  //128 - key length, can be 128, 192 or 256

  std::cout << "plainLen = " << std::dec << plainLen << "\n";
  for (int i = 0; i < plainLen; i++)
    std::cout << std::hex << int(plain[i]) << " ";
  std::cout << "\n\n";
  
  unsigned char * ec = aes.EncryptECB(plain, plainLen, key, outLen);
  std::cout << "outLen = " << std::dec << outLen << "\n";
  for (int i = 0; i < outLen; i++)
    std::cout << std::hex << int(ec[i]) << " ";
  std::cout << "\n\n";


  unsigned char * dc = aes.DecryptECB(ec, outLen, key);
  for (int i = 0; i < outLen; i++)
    std::cout << dc[i] << "";
  std::cout << "\n\n";

	// end time counter
	time(&end_time);
	delta_time = difftime(end_time, start_time);
	// print how long did the process take
	std::cout << '\t' << delta_time << " sec.\n";

  std::cout << "End.\n";

	return 0;
}