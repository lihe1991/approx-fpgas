/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): PRABAKARAN B. S., MRAZEK V., VASICEK Z., SEKANINA L., SHAFIQUE M. ApproxFPGAs: Embracing ASIC-based Approximate Arithmetic Components for FPGA-Based Systems. DAC 2020. 
***/
// MAE% = 0.098 %
// MAE = 0.5 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 0.27 %
// MSE = 0.5 
// FPGA_POWER = 0.35
// FPGA_DELAY = 7.0
// FPGA_LUT = 11
#include <stdint.h>
#include <stdlib.h>

uint64_t add8u_2LQ(uint64_t a, uint64_t b) {
  uint64_t o = 0;
  int n_43=0, n_188=0, n_196=0, n_210=0, n_191=0, n_155=0, n_21=0, n_46=0, n_40=0, n_25=0;
  int n_24=0, n_117=0, n_48=0, n_199=0, n_81=0, n_163=0, n_84=0, n_87=0, n_68=0, n_89=0;
  int n_65=0, n_144=0, n_142=0, n_202=0, n_128=0, n_207=0, n_103=0, n_100=0, n_106=0, n_161=0;
  int n_180=0, n_8=0, n_9=0, n_185=0, n_4=0, n_5=0, n_6=0, n_7=0, n_0=0, n_1=0;
  int n_2=0, n_3=0, n_125=0, n_95=0, n_35=0, n_37=0, n_17=0, n_14=0, n_15=0, n_12=0;
  int n_13=0, n_10=0, n_11=0, n_98=0, n_59=0, n_92=0, n_79=0, n_174=0, n_53=0, n_76=0;
  int n_51=0, n_70=0, n_57=0, n_54=0, n_73=0, n_213=0, n_139=0, n_177=0, n_152=0, n_131=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 1) & 0x1;
  n_2 = (a >> 2) & 0x1;
  n_3 = (a >> 3) & 0x1;
  n_4 = (a >> 4) & 0x1;
  n_5 = (a >> 5) & 0x1;
  n_6 = (a >> 6) & 0x1;
  n_7 = (a >> 7) & 0x1;
  n_8 = (b >> 0) & 0x1;
  n_9 = (b >> 1) & 0x1;
  n_10 = (b >> 2) & 0x1;
  n_11 = (b >> 3) & 0x1;
  n_12 = (b >> 4) & 0x1;
  n_13 = (b >> 5) & 0x1;
  n_14 = (b >> 6) & 0x1;
  n_15 = (b >> 7) & 0x1;
  n_17 = n_14 | n_6;
  n_21 = n_1 ^ n_9;
  n_24 = n_1 & n_9;
  n_25 = ~(n_4 ^ n_12);
  n_35 = n_2 ^ n_10;
  n_37 = n_2 & n_10;
  n_40 = n_35 & n_24;
  n_43 = n_35 ^ n_24;
  n_46 = n_37 | n_40;
  n_48 = n_3 ^ n_11;
  n_51 = n_3 & n_11;
  n_53 = n_13 | n_5;
  n_54 = n_48 & n_46;
  n_57 = n_48 ^ n_46;
  n_59 = n_51 | n_54;
  n_65 = n_4 & n_12;
  n_68 = n_5 ^ n_13;
  n_70 = n_5 & n_13;
  n_73 = n_53 & n_65;
  n_76 = n_68 ^ n_65;
  n_79 = n_70 | n_73;
  n_81 = n_6 ^ n_14;
  n_84 = n_6 & n_14;
  n_87 = n_17 & n_79;
  n_89 = n_81 ^ n_79;
  n_92 = n_84 | n_87;
  n_95 = n_7 ^ n_15;
  n_98 = n_7 & n_15;
  n_100 = n_95 & n_92;
  n_103 = n_95 ^ n_92;
  n_106 = ~(n_98 | n_100);
  n_117 = n_4 | n_12;
  n_125 = n_53 & n_117;
  n_128 = n_68 ^ n_117;
  n_131 = n_70 | n_125;
  n_139 = n_81 & n_131;
  n_142 = n_81 ^ n_131;
  n_144 = n_84 | n_139;
  n_152 = n_95 & n_139;
  n_155 = n_95 ^ n_144;
  n_161 = ~n_59;
  n_163 = n_25 ^ n_161;
  n_174 = n_76 & n_161;
  n_177 = n_128 & n_59;
  n_180 = n_174 | n_177;
  n_185 = n_89 & n_161;
  n_188 = n_142 & n_59;
  n_191 = n_185 | n_188;
  n_196 = n_103 & n_161;
  n_199 = n_155 & n_59;
  n_202 = n_196 | n_199;
  n_207 = ~n_106;
  n_210 = n_152 & n_59;
  n_213 = n_207 | n_210;
  o |= (n_0 & 0x01) << 0;
  o |= (n_21 & 0x01) << 1;
  o |= (n_43 & 0x01) << 2;
  o |= (n_57 & 0x01) << 3;
  o |= (n_163 & 0x01) << 4;
  o |= (n_180 & 0x01) << 5;
  o |= (n_191 & 0x01) << 6;
  o |= (n_202 & 0x01) << 7;
  o |= (n_213 & 0x01) << 8;
  return o;
}
