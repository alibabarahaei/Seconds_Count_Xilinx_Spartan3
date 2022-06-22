/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *UNISIM_P_3222816464;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int unisim_p_3222816464_sub_3182959421_279109243(char *, char *, char *);


static void unisim_a_2566042487_0395351916_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t3 = (t0 + 1512U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t7;
    t2 = (t2 + 1U);
    t3 = (t0 + 1352U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    *((unsigned char *)t2) = t9;
    t2 = (t2 + 1U);
    t3 = (t0 + 1192U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    *((unsigned char *)t2) = t11;
    t3 = (t0 + 4808U);
    t12 = *((char **)t3);
    t3 = (t12 + 0);
    memcpy(t3, t1, 4U);
    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    t1 = (t0 + 10740U);
    t13 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t2, t1);
    t3 = (t0 + 4688U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = t13;
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 7U, 1, 0LL);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 6U, 1, 0LL);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 5U, 1, 0LL);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 4U, 1, 0LL);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 3U, 1, 0LL);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 4688U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 16);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(16, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    t1 = (t0 + 6600);
    *((int *)t1) = 1;

LAB1:    return;
}

static void unisim_a_2566042487_0395351916_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    char *t17;
    int t18;
    int64 t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6616);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    t3 = xsi_get_transient_memory(4U);
    memset(t3, 0, 4U);
    t7 = t3;
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    *((unsigned char *)t7) = t10;
    t7 = (t7 + 1U);
    t8 = (t0 + 1512U);
    t11 = *((char **)t8);
    t12 = *((unsigned char *)t11);
    *((unsigned char *)t7) = t12;
    t7 = (t7 + 1U);
    t8 = (t0 + 1352U);
    t13 = *((char **)t8);
    t14 = *((unsigned char *)t13);
    *((unsigned char *)t7) = t14;
    t7 = (t7 + 1U);
    t8 = (t0 + 1192U);
    t15 = *((char **)t8);
    t16 = *((unsigned char *)t15);
    *((unsigned char *)t7) = t16;
    t8 = (t0 + 5048U);
    t17 = *((char **)t8);
    t8 = (t17 + 0);
    memcpy(t8, t3, 4U);
    t1 = (t0 + 5048U);
    t3 = *((char **)t1);
    t1 = (t0 + 10756U);
    t18 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t3, t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((int *)t4) = t18;
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (0 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 6760);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 6760);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (1 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 6824);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 6824);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (2 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 6888);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 6888);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (3 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 6952);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 6952);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (4 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 7016);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 7016);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (5 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 7080);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 7080);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (6 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 7144);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 7144);
    xsi_driver_intertial_reject(t15, t19, t19);
    t19 = (100 * 1LL);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t18 = (7 - 7);
    t20 = (t18 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4928U);
    t7 = *((char **)t4);
    t23 = *((int *)t7);
    t24 = (t23 - 16);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t4 = (t0 + 7208);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_delta(t4, t27, 1, t19);
    t15 = (t0 + 4928U);
    t17 = *((char **)t15);
    t28 = *((int *)t17);
    t29 = (t28 - 16);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t15 = (t0 + 7208);
    xsi_driver_intertial_reject(t15, t19, t19);
    goto LAB6;

}


extern void unisim_a_2566042487_0395351916_init()
{
	static char *pe[] = {(void *)unisim_a_2566042487_0395351916_p_0,(void *)unisim_a_2566042487_0395351916_p_1};
	xsi_register_didat("unisim_a_2566042487_0395351916", "isim/clock_vhdl_canceled_schematic_isim_beh.exe.sim/unisim/a_2566042487_0395351916.didat");
	xsi_register_executes(pe);
}
