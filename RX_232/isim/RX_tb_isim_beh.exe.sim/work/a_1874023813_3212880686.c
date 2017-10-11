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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/user/Documents/studies_SRT/SRT5/SY23/Projet/RX_232/RX_232.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1874023813_3212880686_p_0(char *t0)
{
    char t14[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t19;
    unsigned int t20;
    char *t21;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5192);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 5384);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 5448);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5080);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 5256);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB2;

LAB5:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 5256);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5256);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t4 = xsi_get_transient_memory(8U);
    memset(t4, 0, 8U);
    t6 = t4;
    memset(t6, (unsigned char)2, 8U);
    t7 = (t0 + 5448);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 5192);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 8768U);
    t9 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t4, t1, 7);
    if (t9 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8768U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t14, t2, t1, 1);
    t5 = (t14 + 12U);
    t15 = *((unsigned int *)t5);
    t16 = (1U * t15);
    t3 = (4U != t16);
    if (t3 == 1)
        goto LAB16;

LAB17:    t6 = (t0 + 5320);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 5192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(47, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t4 = (t0 + 5320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t4 = (t0 + 5384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t16, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 8768U);
    t9 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t4, t1, 15);
    if (t9 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8768U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t14, t2, t1, 1);
    t5 = (t14 + 12U);
    t15 = *((unsigned int *)t5);
    t16 = (1U * t15);
    t3 = (4U != t16);
    if (t3 == 1)
        goto LAB31;

LAB32:    t6 = (t0 + 5320);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(58, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t6 = t5;
    memset(t6, (unsigned char)2, 4U);
    t7 = (t0 + 5320);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t4 + t17);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t18 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 7;
    t10 = (t7 + 4U);
    *((int *)t10) = 1;
    t10 = (t7 + 8U);
    *((int *)t10) = -1;
    t19 = (1 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t20;
    t5 = xsi_base_array_concat(t5, t14, t6, (char)99, t3, (char)97, t1, t18, (char)101);
    t20 = (1U + 7U);
    t8 = (8U != t20);
    if (t8 == 1)
        goto LAB24;

LAB25:    t10 = (t0 + 5448);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t21 = *((char **)t13);
    memcpy(t21, t5, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 8784U);
    t4 = (t0 + 8860);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 2;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t19 = (2 - 0);
    t15 = (t19 * 1);
    t15 = (t15 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t15;
    t3 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t4, t14);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 8784U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t14, t2, t1, 1);
    t5 = (t14 + 12U);
    t15 = *((unsigned int *)t5);
    t16 = (1U * t15);
    t3 = (3U != t16);
    if (t3 == 1)
        goto LAB29;

LAB30:    t6 = (t0 + 5384);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 3U);
    xsi_driver_first_trans_fast(t6);

LAB27:    goto LAB22;

LAB24:    xsi_size_not_matching(8U, t20, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 5192);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB27;

LAB29:    xsi_size_not_matching(3U, t16, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(4U, t16, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 8768U);
    t9 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t4, t1, 15);
    if (t9 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8768U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t14, t2, t1, 1);
    t5 = (t14 + 12U);
    t15 = *((unsigned int *)t5);
    t16 = (1U * t15);
    t3 = (4U != t16);
    if (t3 == 1)
        goto LAB39;

LAB40:    t6 = (t0 + 5320);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(74, ng0);
    t5 = (t0 + 5192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t5);
    goto LAB37;

LAB39:    xsi_size_not_matching(4U, t16, 0);
    goto LAB40;

}

static void work_a_1874023813_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5096);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1874023813_3212880686_p_2(char *t0)
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
    char *t10;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5576);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 5640);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 5768);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 5704);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 5576);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(87, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t3 = t1;
    memset(t3, (unsigned char)2, 3U);
    t4 = (t0 + 5640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(88, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5704);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(89, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 5768);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

}


extern void work_a_1874023813_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1874023813_3212880686_p_0,(void *)work_a_1874023813_3212880686_p_1,(void *)work_a_1874023813_3212880686_p_2};
	xsi_register_didat("work_a_1874023813_3212880686", "isim/RX_tb_isim_beh.exe.sim/work/a_1874023813_3212880686.didat");
	xsi_register_executes(pe);
}
