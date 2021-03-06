/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): PRABAKARAN B. S., MRAZEK V., VASICEK Z., SEKANINA L., SHAFIQUE M. ApproxFPGAs: Embracing ASIC-based Approximate Arithmetic Components for FPGA-Based Systems. DAC 2020. 
***/
// MAE% = 0.036 %
// MAE = 24 
// WCE% = 0.095 %
// WCE = 62 
// WCRE% = 5500.00 %
// EP% = 98.49 %
// MRE% = 1.76 %
// MSE = 846 
// FPGA_POWER = 1.1
// FPGA_DELAY = 11
// FPGA_LUT = 65
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8u_1G9M(uint64_t a, uint64_t b) {
  uint64_t o = 0;
  int n_1753=0, n_946=0, n_1364=0, n_543=0, n_542=0, n_1194=0, n_1195=0, n_418=0, n_1116=0, n_1752=0;
  int n_1241=0, n_41=0, n_40=0, n_1954=0, n_1955=0, n_1893=0, n_1892=0, n_1380=0, n_1596=0, n_1009=0;
  int n_1286=0, n_1287=0, n_1815=0, n_1814=0, n_388=0, n_2016=0, n_141=0, n_140=0, n_1566=0, n_1736=0;
  int n_466=0, n_776=0, n_777=0, n_1055=0, n_1054=0, n_248=0, n_1426=0, n_714=0, n_1628=0, n_30=0;
  int n_31=0, n_1348=0, n_1100=0, n_790=0, n_791=0, n_1582=0, n_1211=0, n_1210=0, n_2000=0, n_652=0;
  int n_1691=0, n_1690=0, n_1459=0, n_1458=0, n_666=0, n_1860=0, n_1861=0, n_868=0, n_497=0, n_496=0;
  int n_729=0, n_728=0, n_1024=0, n_434=0, n_232=0, n_23=0, n_22=0, n_21=0, n_20=0, n_27=0;
  int n_26=0, n_25=0, n_24=0, n_29=0, n_28=0, n_806=0, n_807=0, n_1612=0, n_1658=0, n_327=0;
  int n_326=0, n_1877=0, n_1876=0, n_1505=0, n_1504=0, n_1272=0, n_125=0, n_124=0, n_558=0, n_559=0;
  int n_480=0, n_1799=0, n_575=0, n_343=0, n_342=0, n_1039=0, n_1038=0, n_839=0, n_838=0, n_1644=0;
  int n_1968=0, n_18=0, n_19=0, n_16=0, n_17=0, n_14=0, n_15=0, n_12=0, n_13=0, n_10=0;
  int n_11=0, n_94=0, n_95=0, n_1831=0, n_1844=0, n_1845=0, n_884=0, n_1534=0, n_1535=0, n_356=0;
  int n_357=0, n_822=0, n_823=0, n_1008=0, n_930=0, n_450=0, n_1550=0, n_1488=0, n_1086=0, n_900=0;
  int n_1489=0, n_1659=0, n_1334=0, n_1830=0, n_1071=0, n_1025=0, n_1768=0, n_109=0, n_108=0, n_1521=0;
  int n_1520=0, n_590=0, n_591=0, n_1707=0, n_1706=0, n_1257=0, n_1256=0, n_1721=0, n_1318=0, n_1148=0;
  int n_914=0, n_699=0, n_698=0, n_1396=0, n_1720=0, n_1906=0, n_1132=0, n_1984=0, n_1240=0, n_1798=0;
  int n_1442=0, n_1410=0, n_1443=0, n_1769=0, n_218=0, n_1303=0, n_1302=0, n_1178=0, n_372=0, n_373=0;
  int n_1737=0, n_963=0, n_962=0, n_1675=0, n_682=0, n_1938=0, n_1939=0, n_1674=0, n_1224=0, n_1225=0;
  int n_202=0, n_1273=0, n_992=0, n_993=0, n_1783=0, n_1782=0, n_1162=0, n_264=0, n_265=0, n_8=0;
  int n_9=0, n_4=0, n_5=0, n_574=0, n_7=0, n_0=0, n_1=0, n_2=0, n_3=0, n_1923=0;
  int n_1922=0, n_976=0, n_1070=0, n_6=0, n_604=0, n_605=0, n_1473=0, n_1472=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 0) & 0x1;
  n_2 = (a >> 1) & 0x1;
  n_3 = (a >> 1) & 0x1;
  n_4 = (a >> 2) & 0x1;
  n_5 = (a >> 2) & 0x1;
  n_6 = (a >> 3) & 0x1;
  n_7 = (a >> 3) & 0x1;
  n_8 = (a >> 4) & 0x1;
  n_9 = (a >> 4) & 0x1;
  n_10 = (a >> 5) & 0x1;
  n_11 = (a >> 5) & 0x1;
  n_12 = (a >> 6) & 0x1;
  n_13 = (a >> 6) & 0x1;
  n_14 = (a >> 7) & 0x1;
  n_15 = (a >> 7) & 0x1;
  n_16 = (b >> 0) & 0x1;
  n_17 = (b >> 0) & 0x1;
  n_18 = (b >> 1) & 0x1;
  n_19 = (b >> 1) & 0x1;
  n_20 = (b >> 2) & 0x1;
  n_21 = (b >> 2) & 0x1;
  n_22 = (b >> 3) & 0x1;
  n_23 = (b >> 3) & 0x1;
  n_24 = (b >> 4) & 0x1;
  n_25 = (b >> 4) & 0x1;
  n_26 = (b >> 5) & 0x1;
  n_27 = (b >> 5) & 0x1;
  n_28 = (b >> 6) & 0x1;
  n_29 = (b >> 6) & 0x1;
  n_30 = (b >> 7) & 0x1;
  n_31 = (b >> 7) & 0x1;
  n_40 = ~(n_12 ^ n_12);
  n_41 = n_40;
  n_94 = n_8 & n_16;
  n_95 = n_94;
  n_108 = n_10 & n_16;
  n_109 = n_108;
  n_124 = n_12 & n_16;
  n_125 = n_124;
  n_140 = n_14 & n_16;
  n_141 = n_140;
  n_202 = n_6 & n_18;
  n_218 = n_8 & n_18;
  n_232 = n_10 & n_18;
  n_248 = n_12 & n_18;
  n_264 = n_14 & n_18;
  n_265 = n_264;
  n_326 = n_95 & n_202;
  n_327 = n_326;
  n_342 = n_109 ^ n_218;
  n_343 = n_109 & n_218;
  n_356 = n_125 ^ n_232;
  n_357 = n_125 & n_232;
  n_372 = n_141 ^ n_248;
  n_373 = n_141 & n_248;
  n_388 = n_2 & n_20;
  n_418 = n_4 & n_388;
  n_434 = n_6 & n_20;
  n_450 = n_8 & n_20;
  n_466 = n_10 & n_20;
  n_480 = n_12 & n_20;
  n_496 = n_14 & n_20;
  n_497 = n_496;
  n_542 = n_22 & n_418;
  n_543 = n_542;
  n_558 = n_342 ^ n_434 ^n_327;
  n_559 = (n_342 & n_434) | (n_434 & n_327) | (n_342 & n_327);
  n_574 = n_356 ^ n_450 ^n_343;
  n_575 = (n_356 & n_450) | (n_450 & n_343) | (n_356 & n_343);
  n_590 = n_372 ^ n_466 ^n_357;
  n_591 = (n_372 & n_466) | (n_466 & n_357) | (n_372 & n_357);
  n_604 = n_265 ^ n_480 ^n_373;
  n_605 = (n_265 & n_480) | (n_480 & n_373) | (n_265 & n_373);
  n_652 = n_4 & n_22;
  n_666 = n_6 & n_22;
  n_682 = n_8 & n_22;
  n_698 = n_10 & n_22;
  n_699 = n_698;
  n_714 = n_12 & n_22;
  n_728 = n_14 & n_22;
  n_729 = n_728;
  n_776 = n_558 ^ n_652 ^n_543;
  n_777 = (n_558 & n_652) | (n_652 & n_543) | (n_558 & n_543);
  n_790 = n_574 ^ n_666 ^n_559;
  n_791 = (n_574 & n_666) | (n_666 & n_559) | (n_574 & n_559);
  n_806 = n_590 ^ n_682 ^n_575;
  n_807 = (n_590 & n_682) | (n_682 & n_575) | (n_590 & n_575);
  n_822 = n_604 ^ n_699 ^n_591;
  n_823 = (n_604 & n_699) | (n_699 & n_591) | (n_604 & n_591);
  n_838 = n_497 ^ n_714 ^n_605;
  n_839 = (n_497 & n_714) | (n_714 & n_605) | (n_497 & n_605);
  n_868 = n_2 & n_24;
  n_884 = n_4 & n_24;
  n_900 = n_6 & n_24;
  n_914 = n_8 & n_24;
  n_930 = n_10 & n_24;
  n_946 = n_12 & n_24;
  n_962 = n_14 & n_24;
  n_963 = n_962;
  n_976 = n_41;
  n_992 = n_776 & n_868;
  n_993 = n_992;
  n_1008 = n_790 ^ n_884 ^n_777;
  n_1009 = (n_790 & n_884) | (n_884 & n_777) | (n_790 & n_777);
  n_1024 = n_806 ^ n_900 ^n_791;
  n_1025 = (n_806 & n_900) | (n_900 & n_791) | (n_806 & n_791);
  n_1038 = n_822 ^ n_914 ^n_807;
  n_1039 = (n_822 & n_914) | (n_914 & n_807) | (n_822 & n_807);
  n_1054 = n_838 ^ n_930 ^n_823;
  n_1055 = (n_838 & n_930) | (n_930 & n_823) | (n_838 & n_823);
  n_1070 = n_729 ^ n_946 ^n_839;
  n_1071 = (n_729 & n_946) | (n_946 & n_839) | (n_729 & n_839);
  n_1086 = n_0 & n_26;
  n_1100 = n_2 & n_26;
  n_1116 = n_4 & n_26;
  n_1132 = n_6 & n_26;
  n_1148 = n_8 & n_26;
  n_1162 = n_10 & n_26;
  n_1178 = n_12 & n_26;
  n_1194 = n_14 & n_26;
  n_1195 = n_1194;
  n_1210 = n_993 ^ n_1086 ^n_41;
  n_1211 = (n_993 & n_1086) | (n_1086 & n_41) | (n_993 & n_41);
  n_1224 = n_1008 ^ n_1100;
  n_1225 = n_1008 & n_1100;
  n_1240 = n_1024 ^ n_1116 ^n_1009;
  n_1241 = (n_1024 & n_1116) | (n_1116 & n_1009) | (n_1024 & n_1009);
  n_1256 = n_1038 ^ n_1132 ^n_1025;
  n_1257 = (n_1038 & n_1132) | (n_1132 & n_1025) | (n_1038 & n_1025);
  n_1272 = n_1054 ^ n_1148 ^n_1039;
  n_1273 = (n_1054 & n_1148) | (n_1148 & n_1039) | (n_1054 & n_1039);
  n_1286 = n_1070 ^ n_1162 ^n_1055;
  n_1287 = (n_1070 & n_1162) | (n_1162 & n_1055) | (n_1070 & n_1055);
  n_1302 = n_963 ^ n_1178 ^n_1071;
  n_1303 = (n_963 & n_1178) | (n_1178 & n_1071) | (n_963 & n_1071);
  n_1318 = n_0 & n_28;
  n_1334 = n_2 & n_28;
  n_1348 = n_4 & n_28;
  n_1364 = n_6 & n_28;
  n_1380 = n_8 & n_28;
  n_1396 = n_10 & n_28;
  n_1410 = n_12 & n_28;
  n_1426 = n_14 & n_28;
  n_1442 = n_1224 ^ n_1318 ^n_1211;
  n_1443 = (n_1224 & n_1318) | (n_1318 & n_1211) | (n_1224 & n_1211);
  n_1458 = n_1240 ^ n_1334 ^n_1225;
  n_1459 = (n_1240 & n_1334) | (n_1334 & n_1225) | (n_1240 & n_1225);
  n_1472 = n_1256 ^ n_1348 ^n_1241;
  n_1473 = (n_1256 & n_1348) | (n_1348 & n_1241) | (n_1256 & n_1241);
  n_1488 = n_1272 ^ n_1364 ^n_1257;
  n_1489 = (n_1272 & n_1364) | (n_1364 & n_1257) | (n_1272 & n_1257);
  n_1504 = n_1286 ^ n_1380 ^n_1273;
  n_1505 = (n_1286 & n_1380) | (n_1380 & n_1273) | (n_1286 & n_1273);
  n_1520 = n_1302 ^ n_1396 ^n_1287;
  n_1521 = (n_1302 & n_1396) | (n_1396 & n_1287) | (n_1302 & n_1287);
  n_1534 = n_1195 ^ n_1410 ^n_1303;
  n_1535 = (n_1195 & n_1410) | (n_1410 & n_1303) | (n_1195 & n_1303);
  n_1550 = n_0 & n_30;
  n_1566 = n_2 & n_30;
  n_1582 = n_4 & n_30;
  n_1596 = n_6 & n_30;
  n_1612 = n_8 & n_30;
  n_1628 = n_10 & n_30;
  n_1644 = n_12 & n_30;
  n_1658 = n_14 & n_30;
  n_1659 = n_1658;
  n_1674 = n_1458 ^ n_1550 ^n_1443;
  n_1675 = (n_1458 & n_1550) | (n_1550 & n_1443) | (n_1458 & n_1443);
  n_1690 = n_1472 ^ n_1566 ^n_1459;
  n_1691 = (n_1472 & n_1566) | (n_1566 & n_1459) | (n_1472 & n_1459);
  n_1706 = n_1488 ^ n_1582 ^n_1473;
  n_1707 = (n_1488 & n_1582) | (n_1582 & n_1473) | (n_1488 & n_1473);
  n_1720 = n_1504 ^ n_1596 ^n_1489;
  n_1721 = (n_1504 & n_1596) | (n_1596 & n_1489) | (n_1504 & n_1489);
  n_1736 = n_1520 ^ n_1612 ^n_1505;
  n_1737 = (n_1520 & n_1612) | (n_1612 & n_1505) | (n_1520 & n_1505);
  n_1752 = n_1534 ^ n_1628 ^n_1521;
  n_1753 = (n_1534 & n_1628) | (n_1628 & n_1521) | (n_1534 & n_1521);
  n_1768 = n_1426 ^ n_1644 ^n_1535;
  n_1769 = (n_1426 & n_1644) | (n_1644 & n_1535) | (n_1426 & n_1535);
  n_1782 = n_1690 ^ n_1675;
  n_1783 = n_1690 & n_1675;
  n_1798 = n_1706 ^ n_1691 ^n_1783;
  n_1799 = (n_1706 & n_1691) | (n_1691 & n_1783) | (n_1706 & n_1783);
  n_1814 = n_1720 ^ n_1707 ^n_1799;
  n_1815 = (n_1720 & n_1707) | (n_1707 & n_1799) | (n_1720 & n_1799);
  n_1830 = n_1736 ^ n_1721 ^n_1815;
  n_1831 = (n_1736 & n_1721) | (n_1721 & n_1815) | (n_1736 & n_1815);
  n_1844 = n_1752 ^ n_1737;
  n_1845 = n_1752 & n_1737;
  n_1860 = n_1768 ^ n_1753 ^n_1845;
  n_1861 = (n_1768 & n_1753) | (n_1753 & n_1845) | (n_1768 & n_1845);
  n_1876 = n_1658 ^ n_1769 ^n_1861;
  n_1877 = (n_1658 & n_1769) | (n_1769 & n_1861) | (n_1658 & n_1861);
  n_1892 = n_1752 ^ n_1737;
  n_1893 = n_1752 & n_1737;
  n_1906 = ~n_1892;
  n_1922 = n_1845 | n_1844;
  n_1923 = n_1922;
  n_1938 = n_1768 ^ n_1753 ^n_1923;
  n_1939 = (n_1768 & n_1753) | (n_1753 & n_1923) | (n_1768 & n_1923);
  n_1954 = n_1659 ^ n_1769 ^n_1939;
  n_1955 = (n_1659 & n_1769) | (n_1769 & n_1939) | (n_1659 & n_1939);
  n_1968 = (n_1844 & ~n_1831) | (n_1906 & n_1831);
  n_1984 = (n_1860 & ~n_1831) | (n_1938 & n_1831);
  n_2000 = (n_1876 & ~n_1831) | (n_1954 & n_1831);
  n_2016 = (n_1877 & ~n_1831) | (n_1955 & n_1831);
  o |= (n_18 & 0x01) << 0;
  o |= (n_12 & 0x01) << 1;
  o |= (n_6 & 0x01) << 2;
  o |= (n_976 & 0x01) << 3;
  o |= (n_976 & 0x01) << 4;
  o |= (n_1210 & 0x01) << 5;
  o |= (n_1442 & 0x01) << 6;
  o |= (n_1674 & 0x01) << 7;
  o |= (n_1782 & 0x01) << 8;
  o |= (n_1798 & 0x01) << 9;
  o |= (n_1814 & 0x01) << 10;
  o |= (n_1830 & 0x01) << 11;
  o |= (n_1968 & 0x01) << 12;
  o |= (n_1984 & 0x01) << 13;
  o |= (n_2000 & 0x01) << 14;
  o |= (n_2016 & 0x01) << 15;
  return o;
}
