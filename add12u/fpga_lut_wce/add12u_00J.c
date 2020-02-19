/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): PRABAKARAN B. S., MRAZEK V., VASICEK Z., SEKANINA L., SHAFIQUE M. ApproxFPGAs: Embracing ASIC-based Approximate Arithmetic Components for FPGA-Based Systems. DAC 2020. 
***/
// MAE% = 3.25 %
// MAE = 266 
// WCE% = 9.11 %
// WCE = 746 
// WCRE% = 100.00 %
// EP% = 99.91 %
// MRE% = 9.07 %
// MSE = 97656 
// FPGA_POWER = 0.3
// FPGA_DELAY = 6.3
// FPGA_LUT = 2.0
#include <stdint.h>
#include <stdlib.h>

uint64_t add12u_00J(uint64_t a, uint64_t b) {
  int wa[12];
  int wb[12];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  wa[8] = (a >> 8) & 0x01;
  wb[8] = (b >> 8) & 0x01;
  wa[9] = (a >> 9) & 0x01;
  wb[9] = (b >> 9) & 0x01;
  wa[10] = (a >> 10) & 0x01;
  wb[10] = (b >> 10) & 0x01;
  wa[11] = (a >> 11) & 0x01;
  wb[11] = (b >> 11) & 0x01;
  int sig_63 = 0;
  int sig_71 = wa[10] ^ wb[10];
  int sig_72 = wa[10] & wb[10];
  int sig_73 = sig_71 & wb[9];
  int sig_74 = sig_71 ^ wb[9];
  int sig_75 = sig_72 | sig_73;
  int sig_76 = wa[11] ^ wb[11];
  int sig_77 = wa[11] & wb[11];
  int sig_78 = sig_76 & sig_75;
  int sig_79 = sig_76 ^ sig_75;
  int sig_80 = sig_77 | sig_78;
  y |=  (sig_71 & 0x01) << 0; // default output
  y |=  (wa[9] & 0x01) << 1; // default output
  y |=  (wa[8] & 0x01) << 2; // default output
  y |=  (wa[9] & 0x01) << 3; // default output
  y |=  (wa[4] & 0x01) << 4; // default output
  y |=  (sig_63 & 0x01) << 5; // default output
  y |=  (wb[10] & 0x01) << 6; // default output
  y |=  (sig_79 & 0x01) << 7; // default output
  y |=  (wb[8] & 0x01) << 8; // default output
  y |=  (wa[9] & 0x01) << 9; // default output
  y |=  (sig_74 & 0x01) << 10; // default output
  y |=  (sig_79 & 0x01) << 11; // default output
  y |=  (sig_80 & 0x01) << 12; // default output
   return y;
}