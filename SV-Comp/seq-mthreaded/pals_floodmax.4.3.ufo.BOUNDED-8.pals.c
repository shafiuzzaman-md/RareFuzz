#include "svcompwrapper.h"
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pals_floodmax.4.3.ufo.BOUNDED-8.pals.c", 3, "reach_error"); }

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2013 Carnegie Mellon University
// SPDX-FileCopyrightText: 2014-2020 The SV-Benchmarks Community
//
// SPDX-License-Identifier: LicenseRef-BSD-3-Clause-Attribution-CMU

/* Generated by CIL v. 1.6.0 */
/* print_CIL_Input is true */

//char __VERIFIER_nondet_char(void) ;
//_Bool __VERIFIER_nondet_bool(void) ;
void assert(_Bool arg ) ;
void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
typedef char msg_t;
typedef int port_t;
extern void read(port_t p , msg_t m ) ;
extern void write(port_t p , msg_t m ) ;
msg_t nomsg  =    (msg_t )-1;
port_t p12  ;
char p12_old ;
char p12_new ;
_Bool ep12  ;
port_t p13  ;
char p13_old ;
char p13_new ;
_Bool ep13  ;
port_t p14  ;
char p14_old ;
char p14_new ;
_Bool ep14  ;
port_t p21  ;
char p21_old ;
char p21_new ;
_Bool ep21  ;
port_t p23  ;
char p23_old ;
char p23_new ;
_Bool ep23  ;
port_t p24  ;
char p24_old ;
char p24_new ;
_Bool ep24  ;
port_t p31  ;
char p31_old ;
char p31_new ;
_Bool ep31  ;
port_t p32  ;
char p32_old ;
char p32_new ;
_Bool ep32  ;
port_t p34  ;
char p34_old ;
char p34_new ;
_Bool ep34  ;
port_t p41  ;
char p41_old ;
char p41_new ;
_Bool ep41  ;
port_t p42  ;
char p42_old ;
char p42_new ;
_Bool ep42  ;
port_t p43  ;
char p43_old ;
char p43_new ;
_Bool ep43  ;
char id1  ;
char r1  ;
char st1  ;
char nl1  ;
char m1  ;
char max1  ;
_Bool mode1  ;
char id2  ;
char r2  ;
char st2  ;
char nl2  ;
char m2  ;
char max2  ;
_Bool mode2  ;
char id3  ;
char r3  ;
char st3  ;
char nl3  ;
char m3  ;
char max3  ;
_Bool mode3  ;
char id4  ;
char r4  ;
char st4  ;
char nl4  ;
char m4  ;
char max4  ;
_Bool mode4  ;
void node1(void) 
{ 


  {
  if (mode1) {
    r1 = (char )((int )r1 + 1);
    if (ep21) {
      m1 = p21_old;
      p21_old = nomsg;
      if ((int )m1 > (int )max1) {
        max1 = m1;
      }
    }
    if (ep31) {
      m1 = p31_old;
      p31_old = nomsg;
      if ((int )m1 > (int )max1) {
        max1 = m1;
      }
    }
    if (ep41) {
      m1 = p41_old;
      p41_old = nomsg;
      if ((int )m1 > (int )max1) {
        max1 = m1;
      }
    }
    if ((int )r1 == 3) {
      if ((int )max1 == (int )id1) {
        nl1 = (char)1;
      } else {
        st1 = (char)1;
      }
    }
    mode1 = (_Bool)0;
  } else {
    if ((int )r1 < 3) {
      if (ep12) {
        p12_new = max1 != nomsg && p12_new == nomsg ? max1 : p12_new;
      }
      if (ep13) {
        p13_new = max1 != nomsg && p13_new == nomsg ? max1 : p13_new;
      }
      if (ep14) {
        p14_new = max1 != nomsg && p14_new == nomsg ? max1 : p14_new;
      }
    }
    mode1 = (_Bool)1;
  }
  return;
}
}
void node2(void) 
{ 


  {
  if (mode2) {
    r2 = (char )((int )r2 + 1);
    if (ep12) {
      m2 = p12_old;
      p12_old = nomsg;
      if ((int )m2 > (int )max2) {
        max2 = m2;
      }
    }
    if (ep32) {
      m2 = p32_old;
      p32_old = nomsg;
      if ((int )m2 > (int )max2) {
        max2 = m2;
      }
    }
    if (ep42) {
      m2 = p42_old;
      p42_old = nomsg;
      if ((int )m2 > (int )max2) {
        max2 = m2;
      }
    }
    if ((int )r2 == 3) {
      if ((int )max2 == (int )id2) {
        st2 = (char)1;
      } else {
        nl2 = (char)1;
      }
    }
    mode2 = (_Bool)0;
  } else {
    if ((int )r2 < 3) {
      if (ep21) {
        p21_new = max2 != nomsg && p21_new == nomsg ? max2 : p21_new;
      }
      if (ep23) {
        p23_new = max2 != nomsg && p23_new == nomsg ? max2 : p23_new;
      }
      if (ep24) {
        p24_new = max2 != nomsg && p24_new == nomsg ? max2 : p24_new;
      }
    }
    mode2 = (_Bool)1;
  }
  return;
}
}
void node3(void) 
{ 


  {
  if (mode3) {
    r3 = (char )((int )r3 + 1);
    if (ep13) {
      m3 = p13_old;
      p13_old = nomsg;
      if ((int )m3 > (int )max3) {
        max3 = m3;
      }
    }
    if (ep23) {
      m3 = p23_old;
      p23_old = nomsg;
      if ((int )m3 > (int )max3) {
        max3 = m3;
      }
    }
    if (ep43) {
      m3 = p43_old;
      p43_old = nomsg;
      if ((int )m3 > (int )max3) {
        max3 = m3;
      }
    }
    if ((int )r3 == 3) {
      if ((int )max3 == (int )id3) {
        st3 = (char)1;
      } else {
        nl3 = (char)1;
      }
    }
    mode3 = (_Bool)0;
  } else {
    if ((int )r3 < 3) {
      if (ep31) {
        p31_new = max3 != nomsg && p31_new == nomsg ? max3 : p31_new;
      }
      if (ep32) {
        p32_new = max3 != nomsg && p32_new == nomsg ? max3 : p32_new;
      }
      if (ep34) {
        p34_new = max3 != nomsg && p34_new == nomsg ? max3 : p34_new;
      }
    }
    mode3 = (_Bool)1;
  }
  return;
}
}
void node4(void) 
{ 


  {
  if (mode4) {
    r4 = (char )((int )r4 + 1);
    if (ep14) {
      m4 = p14_old;
      p14_old = nomsg;
      if ((int )m4 > (int )max4) {
        max4 = m4;
      }
    }
    if (ep24) {
      m4 = p24_old;
      p24_old = nomsg;
      if ((int )m4 > (int )max4) {
        max4 = m4;
      }
    }
    if (ep34) {
      m4 = p34_old;
      p34_old = nomsg;
      if ((int )m4 > (int )max4) {
        max4 = m4;
      }
    }
    if ((int )r4 == 3) {
      if ((int )max4 == (int )id4) {
        st4 = (char)1;
      } else {
        nl4 = (char)1;
      }
    }
    mode4 = (_Bool)0;
  } else {
    if ((int )r4 < 3) {
      if (ep41) {
        p41_new = max4 != nomsg && p41_new == nomsg ? max4 : p41_new;
      }
      if (ep42) {
        p42_new = max4 != nomsg && p42_new == nomsg ? max4 : p42_new;
      }
      if (ep43) {
        p43_new = max4 != nomsg && p43_new == nomsg ? max4 : p43_new;
      }
    }
    mode4 = (_Bool)1;
  }
  return;
}
}
int init(void) 
{ 
  _Bool r121 ;
  _Bool r131 ;
  _Bool r141 ;
  _Bool r211 ;
  _Bool r231 ;
  _Bool r241 ;
  _Bool r311 ;
  _Bool r321 ;
  _Bool r341 ;
  _Bool r411 ;
  _Bool r421 ;
  _Bool r431 ;
  _Bool r122 ;
  int tmp ;
  _Bool r132 ;
  int tmp___0 ;
  _Bool r142 ;
  int tmp___1 ;
  _Bool r212 ;
  int tmp___2 ;
  _Bool r232 ;
  int tmp___3 ;
  _Bool r242 ;
  int tmp___4 ;
  _Bool r312 ;
  int tmp___5 ;
  _Bool r322 ;
  int tmp___6 ;
  _Bool r342 ;
  int tmp___7 ;
  _Bool r412 ;
  int tmp___8 ;
  _Bool r422 ;
  int tmp___9 ;
  _Bool r432 ;
  int tmp___10 ;
  _Bool r123 ;
  int tmp___11 ;
  _Bool r133 ;
  int tmp___12 ;
  _Bool r143 ;
  int tmp___13 ;
  _Bool r213 ;
  int tmp___14 ;
  _Bool r233 ;
  int tmp___15 ;
  _Bool r243 ;
  int tmp___16 ;
  _Bool r313 ;
  int tmp___17 ;
  _Bool r323 ;
  int tmp___18 ;
  _Bool r343 ;
  int tmp___19 ;
  _Bool r413 ;
  int tmp___20 ;
  _Bool r423 ;
  int tmp___21 ;
  _Bool r433 ;
  int tmp___22 ;
  int tmp___23 ;

  {
  r121 = ep12;
  r131 = ep13;
  r141 = ep14;
  r211 = ep21;
  r231 = ep23;
  r241 = ep24;
  r311 = ep31;
  r321 = ep32;
  r341 = ep34;
  r411 = ep41;
  r421 = ep42;
  r431 = ep43;
  if (r121) {
    tmp = 1;
  } else
  if (r131) {
    if (ep32) {
      tmp = 1;
    } else {
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
  if (r141) {
    if (ep42) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  r122 = (_Bool )tmp;
  if (r131) {
    tmp___0 = 1;
  } else
  if (r121) {
    if (ep23) {
      tmp___0 = 1;
    } else {
      goto _L___0;
    }
  } else
  _L___0: /* CIL Label */ 
  if (r141) {
    if (ep43) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  r132 = (_Bool )tmp___0;
  if (r141) {
    tmp___1 = 1;
  } else
  if (r121) {
    if (ep24) {
      tmp___1 = 1;
    } else {
      goto _L___1;
    }
  } else
  _L___1: /* CIL Label */ 
  if (r131) {
    if (ep34) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  r142 = (_Bool )tmp___1;
  if (r211) {
    tmp___2 = 1;
  } else
  if (r231) {
    if (ep31) {
      tmp___2 = 1;
    } else {
      goto _L___2;
    }
  } else
  _L___2: /* CIL Label */ 
  if (r241) {
    if (ep41) {
      tmp___2 = 1;
    } else {
      tmp___2 = 0;
    }
  } else {
    tmp___2 = 0;
  }
  r212 = (_Bool )tmp___2;
  if (r231) {
    tmp___3 = 1;
  } else
  if (r211) {
    if (ep13) {
      tmp___3 = 1;
    } else {
      goto _L___3;
    }
  } else
  _L___3: /* CIL Label */ 
  if (r241) {
    if (ep43) {
      tmp___3 = 1;
    } else {
      tmp___3 = 0;
    }
  } else {
    tmp___3 = 0;
  }
  r232 = (_Bool )tmp___3;
  if (r241) {
    tmp___4 = 1;
  } else
  if (r211) {
    if (ep14) {
      tmp___4 = 1;
    } else {
      goto _L___4;
    }
  } else
  _L___4: /* CIL Label */ 
  if (r231) {
    if (ep34) {
      tmp___4 = 1;
    } else {
      tmp___4 = 0;
    }
  } else {
    tmp___4 = 0;
  }
  r242 = (_Bool )tmp___4;
  if (r311) {
    tmp___5 = 1;
  } else
  if (r321) {
    if (ep21) {
      tmp___5 = 1;
    } else {
      goto _L___5;
    }
  } else
  _L___5: /* CIL Label */ 
  if (r341) {
    if (ep41) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
  } else {
    tmp___5 = 0;
  }
  r312 = (_Bool )tmp___5;
  if (r321) {
    tmp___6 = 1;
  } else
  if (r311) {
    if (ep12) {
      tmp___6 = 1;
    } else {
      goto _L___6;
    }
  } else
  _L___6: /* CIL Label */ 
  if (r341) {
    if (ep42) {
      tmp___6 = 1;
    } else {
      tmp___6 = 0;
    }
  } else {
    tmp___6 = 0;
  }
  r322 = (_Bool )tmp___6;
  if (r341) {
    tmp___7 = 1;
  } else
  if (r311) {
    if (ep14) {
      tmp___7 = 1;
    } else {
      goto _L___7;
    }
  } else
  _L___7: /* CIL Label */ 
  if (r321) {
    if (ep24) {
      tmp___7 = 1;
    } else {
      tmp___7 = 0;
    }
  } else {
    tmp___7 = 0;
  }
  r342 = (_Bool )tmp___7;
  if (r411) {
    tmp___8 = 1;
  } else
  if (r421) {
    if (ep21) {
      tmp___8 = 1;
    } else {
      goto _L___8;
    }
  } else
  _L___8: /* CIL Label */ 
  if (r431) {
    if (ep31) {
      tmp___8 = 1;
    } else {
      tmp___8 = 0;
    }
  } else {
    tmp___8 = 0;
  }
  r412 = (_Bool )tmp___8;
  if (r421) {
    tmp___9 = 1;
  } else
  if (r411) {
    if (ep12) {
      tmp___9 = 1;
    } else {
      goto _L___9;
    }
  } else
  _L___9: /* CIL Label */ 
  if (r431) {
    if (ep32) {
      tmp___9 = 1;
    } else {
      tmp___9 = 0;
    }
  } else {
    tmp___9 = 0;
  }
  r422 = (_Bool )tmp___9;
  if (r431) {
    tmp___10 = 1;
  } else
  if (r411) {
    if (ep13) {
      tmp___10 = 1;
    } else {
      goto _L___10;
    }
  } else
  _L___10: /* CIL Label */ 
  if (r421) {
    if (ep23) {
      tmp___10 = 1;
    } else {
      tmp___10 = 0;
    }
  } else {
    tmp___10 = 0;
  }
  r432 = (_Bool )tmp___10;
  if (r122) {
    tmp___11 = 1;
  } else
  if (r132) {
    if (ep32) {
      tmp___11 = 1;
    } else {
      goto _L___11;
    }
  } else
  _L___11: /* CIL Label */ 
  if (r142) {
    if (ep42) {
      tmp___11 = 1;
    } else {
      tmp___11 = 0;
    }
  } else {
    tmp___11 = 0;
  }
  r123 = (_Bool )tmp___11;
  if (r132) {
    tmp___12 = 1;
  } else
  if (r122) {
    if (ep23) {
      tmp___12 = 1;
    } else {
      goto _L___12;
    }
  } else
  _L___12: /* CIL Label */ 
  if (r142) {
    if (ep43) {
      tmp___12 = 1;
    } else {
      tmp___12 = 0;
    }
  } else {
    tmp___12 = 0;
  }
  r133 = (_Bool )tmp___12;
  if (r142) {
    tmp___13 = 1;
  } else
  if (r122) {
    if (ep24) {
      tmp___13 = 1;
    } else {
      goto _L___13;
    }
  } else
  _L___13: /* CIL Label */ 
  if (r132) {
    if (ep34) {
      tmp___13 = 1;
    } else {
      tmp___13 = 0;
    }
  } else {
    tmp___13 = 0;
  }
  r143 = (_Bool )tmp___13;
  if (r212) {
    tmp___14 = 1;
  } else
  if (r232) {
    if (ep31) {
      tmp___14 = 1;
    } else {
      goto _L___14;
    }
  } else
  _L___14: /* CIL Label */ 
  if (r242) {
    if (ep41) {
      tmp___14 = 1;
    } else {
      tmp___14 = 0;
    }
  } else {
    tmp___14 = 0;
  }
  r213 = (_Bool )tmp___14;
  if (r232) {
    tmp___15 = 1;
  } else
  if (r212) {
    if (ep13) {
      tmp___15 = 1;
    } else {
      goto _L___15;
    }
  } else
  _L___15: /* CIL Label */ 
  if (r242) {
    if (ep43) {
      tmp___15 = 1;
    } else {
      tmp___15 = 0;
    }
  } else {
    tmp___15 = 0;
  }
  r233 = (_Bool )tmp___15;
  if (r242) {
    tmp___16 = 1;
  } else
  if (r212) {
    if (ep14) {
      tmp___16 = 1;
    } else {
      goto _L___16;
    }
  } else
  _L___16: /* CIL Label */ 
  if (r232) {
    if (ep34) {
      tmp___16 = 1;
    } else {
      tmp___16 = 0;
    }
  } else {
    tmp___16 = 0;
  }
  r243 = (_Bool )tmp___16;
  if (r312) {
    tmp___17 = 1;
  } else
  if (r322) {
    if (ep21) {
      tmp___17 = 1;
    } else {
      goto _L___17;
    }
  } else
  _L___17: /* CIL Label */ 
  if (r342) {
    if (ep41) {
      tmp___17 = 1;
    } else {
      tmp___17 = 0;
    }
  } else {
    tmp___17 = 0;
  }
  r313 = (_Bool )tmp___17;
  if (r322) {
    tmp___18 = 1;
  } else
  if (r312) {
    if (ep12) {
      tmp___18 = 1;
    } else {
      goto _L___18;
    }
  } else
  _L___18: /* CIL Label */ 
  if (r342) {
    if (ep42) {
      tmp___18 = 1;
    } else {
      tmp___18 = 0;
    }
  } else {
    tmp___18 = 0;
  }
  r323 = (_Bool )tmp___18;
  if (r342) {
    tmp___19 = 1;
  } else
  if (r312) {
    if (ep14) {
      tmp___19 = 1;
    } else {
      goto _L___19;
    }
  } else
  _L___19: /* CIL Label */ 
  if (r322) {
    if (ep24) {
      tmp___19 = 1;
    } else {
      tmp___19 = 0;
    }
  } else {
    tmp___19 = 0;
  }
  r343 = (_Bool )tmp___19;
  if (r412) {
    tmp___20 = 1;
  } else
  if (r422) {
    if (ep21) {
      tmp___20 = 1;
    } else {
      goto _L___20;
    }
  } else
  _L___20: /* CIL Label */ 
  if (r432) {
    if (ep31) {
      tmp___20 = 1;
    } else {
      tmp___20 = 0;
    }
  } else {
    tmp___20 = 0;
  }
  r413 = (_Bool )tmp___20;
  if (r422) {
    tmp___21 = 1;
  } else
  if (r412) {
    if (ep12) {
      tmp___21 = 1;
    } else {
      goto _L___21;
    }
  } else
  _L___21: /* CIL Label */ 
  if (r432) {
    if (ep32) {
      tmp___21 = 1;
    } else {
      tmp___21 = 0;
    }
  } else {
    tmp___21 = 0;
  }
  r423 = (_Bool )tmp___21;
  if (r432) {
    tmp___22 = 1;
  } else
  if (r412) {
    if (ep13) {
      tmp___22 = 1;
    } else {
      goto _L___22;
    }
  } else
  _L___22: /* CIL Label */ 
  if (r422) {
    if (ep23) {
      tmp___22 = 1;
    } else {
      tmp___22 = 0;
    }
  } else {
    tmp___22 = 0;
  }
  r433 = (_Bool )tmp___22;
  if ((int )id1 != (int )id2) {
    if ((int )id1 != (int )id3) {
      if ((int )id1 != (int )id4) {
        if ((int )id2 != (int )id3) {
          if ((int )id2 != (int )id4) {
            if ((int )id3 != (int )id4) {
              if ((int )id1 >= 0) {
                if ((int )id2 >= 0) {
                  if ((int )id3 >= 0) {
                    if ((int )id4 >= 0) {
                      if ((int )r1 == 0) {
                        if ((int )r2 == 0) {
                          if ((int )r3 == 0) {
                            if ((int )r4 == 0) {
                              if (r123) {
                                if (r133) {
                                  if (r143) {
                                    if (r213) {
                                      if (r233) {
                                        if (r243) {
                                          if (r313) {
                                            if (r323) {
                                              if (r343) {
                                                if (r413) {
                                                  if (r423) {
                                                    if (r433) {
                                                      if ((int )max1 == (int )id1) {
                                                        if ((int )max2 == (int )id2) {
                                                          if ((int )max3 == (int )id3) {
                                                            if ((int )max4 == (int )id4) {
                                                              if ((int )st1 == 0) {
                                                                if ((int )st2 == 0) {
                                                                  if ((int )st3 == 0) {
                                                                    if ((int )st4 == 0) {
                                                                      if ((int )nl1 == 0) {
                                                                        if ((int )nl2 == 0) {
                                                                          if ((int )nl3 == 0) {
                                                                            if ((int )nl4 == 0) {
                                                                              if ((int )mode1 == 0) {
                                                                                if ((int )mode2 == 0) {
                                                                                  if ((int )mode3 == 0) {
                                                                                    if ((int )mode4 == 0) {
                                                                                      tmp___23 = 1;
                                                                                    } else {
                                                                                      tmp___23 = 0;
                                                                                    }
                                                                                  } else {
                                                                                    tmp___23 = 0;
                                                                                  }
                                                                                } else {
                                                                                  tmp___23 = 0;
                                                                                }
                                                                              } else {
                                                                                tmp___23 = 0;
                                                                              }
                                                                            } else {
                                                                              tmp___23 = 0;
                                                                            }
                                                                          } else {
                                                                            tmp___23 = 0;
                                                                          }
                                                                        } else {
                                                                          tmp___23 = 0;
                                                                        }
                                                                      } else {
                                                                        tmp___23 = 0;
                                                                      }
                                                                    } else {
                                                                      tmp___23 = 0;
                                                                    }
                                                                  } else {
                                                                    tmp___23 = 0;
                                                                  }
                                                                } else {
                                                                  tmp___23 = 0;
                                                                }
                                                              } else {
                                                                tmp___23 = 0;
                                                              }
                                                            } else {
                                                              tmp___23 = 0;
                                                            }
                                                          } else {
                                                            tmp___23 = 0;
                                                          }
                                                        } else {
                                                          tmp___23 = 0;
                                                        }
                                                      } else {
                                                        tmp___23 = 0;
                                                      }
                                                    } else {
                                                      tmp___23 = 0;
                                                    }
                                                  } else {
                                                    tmp___23 = 0;
                                                  }
                                                } else {
                                                  tmp___23 = 0;
                                                }
                                              } else {
                                                tmp___23 = 0;
                                              }
                                            } else {
                                              tmp___23 = 0;
                                            }
                                          } else {
                                            tmp___23 = 0;
                                          }
                                        } else {
                                          tmp___23 = 0;
                                        }
                                      } else {
                                        tmp___23 = 0;
                                      }
                                    } else {
                                      tmp___23 = 0;
                                    }
                                  } else {
                                    tmp___23 = 0;
                                  }
                                } else {
                                  tmp___23 = 0;
                                }
                              } else {
                                tmp___23 = 0;
                              }
                            } else {
                              tmp___23 = 0;
                            }
                          } else {
                            tmp___23 = 0;
                          }
                        } else {
                          tmp___23 = 0;
                        }
                      } else {
                        tmp___23 = 0;
                      }
                    } else {
                      tmp___23 = 0;
                    }
                  } else {
                    tmp___23 = 0;
                  }
                } else {
                  tmp___23 = 0;
                }
              } else {
                tmp___23 = 0;
              }
            } else {
              tmp___23 = 0;
            }
          } else {
            tmp___23 = 0;
          }
        } else {
          tmp___23 = 0;
        }
      } else {
        tmp___23 = 0;
      }
    } else {
      tmp___23 = 0;
    }
  } else {
    tmp___23 = 0;
  }
  return (tmp___23);
}
}
int check(void) 
{ 
  int tmp ;

  {
  if ((((int )st1 + (int )st2) + (int )st3) + (int )st4 <= 1) {
    if ((int )st1 + (int )nl1 <= 1) {
      if ((int )st2 + (int )nl2 <= 1) {
        if ((int )st3 + (int )nl3 <= 1) {
          if ((int )st4 + (int )nl4 <= 1) {
            if ((int )r1 >= 3) {
              goto _L___1;
            } else
            if ((((int )st1 + (int )st2) + (int )st3) + (int )st4 == 0) {
              _L___1: /* CIL Label */ 
              if ((int )r1 < 3) {
                goto _L___0;
              } else
              if ((((int )st1 + (int )st2) + (int )st3) + (int )st4 == 1) {
                _L___0: /* CIL Label */ 
                if ((int )r1 >= 3) {
                  goto _L;
                } else
                if ((((int )nl1 + (int )nl2) + (int )nl3) + (int )nl4 == 0) {
                  _L: /* CIL Label */ 
                  if ((int )r1 < 3) {
                    tmp = 1;
                  } else
                  if ((((int )nl1 + (int )nl2) + (int )nl3) + (int )nl4 == 3) {
                    tmp = 1;
                  } else {
                    tmp = 0;
                  }
                } else {
                  tmp = 0;
                }
              } else {
                tmp = 0;
              }
            } else {
              tmp = 0;
            }
          } else {
            tmp = 0;
          }
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
int main(int argc, char **argv) 
{ 
  int c1 ;
   int i2 ;
get_inputs(argv[1]);

  {
  c1 = 0;
  ep12 = __VERIFIER_nondet_bool();
  ep13 = __VERIFIER_nondet_bool();
  ep14 = __VERIFIER_nondet_bool();
  ep21 = __VERIFIER_nondet_bool();
  ep23 = __VERIFIER_nondet_bool();
  ep24 = __VERIFIER_nondet_bool();
  ep31 = __VERIFIER_nondet_bool();
  ep32 = __VERIFIER_nondet_bool();
  ep34 = __VERIFIER_nondet_bool();
  ep41 = __VERIFIER_nondet_bool();
  ep42 = __VERIFIER_nondet_bool();
  ep43 = __VERIFIER_nondet_bool();
  id1 = __VERIFIER_nondet_char();
  r1 = __VERIFIER_nondet_char();
  st1 = __VERIFIER_nondet_char();
  nl1 = __VERIFIER_nondet_char();
  m1 = __VERIFIER_nondet_char();
  max1 = __VERIFIER_nondet_char();
  mode1 = __VERIFIER_nondet_bool();
  id2 = __VERIFIER_nondet_char();
  r2 = __VERIFIER_nondet_char();
  st2 = __VERIFIER_nondet_char();
  nl2 = __VERIFIER_nondet_char();
  m2 = __VERIFIER_nondet_char();
  max2 = __VERIFIER_nondet_char();
  mode2 = __VERIFIER_nondet_bool();
  id3 = __VERIFIER_nondet_char();
  r3 = __VERIFIER_nondet_char();
  st3 = __VERIFIER_nondet_char();
  nl3 = __VERIFIER_nondet_char();
  m3 = __VERIFIER_nondet_char();
  max3 = __VERIFIER_nondet_char();
  mode3 = __VERIFIER_nondet_bool();
  id4 = __VERIFIER_nondet_char();
  r4 = __VERIFIER_nondet_char();
  st4 = __VERIFIER_nondet_char();
  nl4 = __VERIFIER_nondet_char();
  m4 = __VERIFIER_nondet_char();
  max4 = __VERIFIER_nondet_char();
  mode4 = __VERIFIER_nondet_bool();
  i2 = init();
  assume_abort_if_not(i2);
  p12_old = nomsg;
  p12_new = nomsg;
  p13_old = nomsg;
  p13_new = nomsg;
  p14_old = nomsg;
  p14_new = nomsg;
  p21_old = nomsg;
  p21_new = nomsg;
  p23_old = nomsg;
  p23_new = nomsg;
  p24_old = nomsg;
  p24_new = nomsg;
  p31_old = nomsg;
  p31_new = nomsg;
  p32_old = nomsg;
  p32_new = nomsg;
  p34_old = nomsg;
  p34_new = nomsg;
  p41_old = nomsg;
  p41_new = nomsg;
  p42_old = nomsg;
  p42_new = nomsg;
  p43_old = nomsg;
  p43_new = nomsg;
  i2 = 0;
  while (i2 < 8) {
    {
    node1();
    node2();
    node3();
    node4();
    p12_old = p12_new;
    p12_new = nomsg;
    p13_old = p13_new;
    p13_new = nomsg;
    p14_old = p14_new;
    p14_new = nomsg;
    p21_old = p21_new;
    p21_new = nomsg;
    p23_old = p23_new;
    p23_new = nomsg;
    p24_old = p24_new;
    p24_new = nomsg;
    p31_old = p31_new;
    p31_new = nomsg;
    p32_old = p32_new;
    p32_new = nomsg;
    p34_old = p34_new;
    p34_new = nomsg;
    p41_old = p41_new;
    p41_new = nomsg;
    p42_old = p42_new;
    p42_new = nomsg;
    p43_old = p43_new;
    p43_new = nomsg;
    c1 = check();
    assert(c1);
    i2 ++;
    }
  }
}
return 0;
}
void assert(_Bool arg ) 
{ 


  {
  if (! arg) {
    {
    ERROR: {reach_error();abort();}
    }
  }
}
}
