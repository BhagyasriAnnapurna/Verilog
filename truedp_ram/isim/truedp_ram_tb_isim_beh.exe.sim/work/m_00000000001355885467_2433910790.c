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
static const char *ng0 = "C:/Users/Bhagya Anil/OneDrive/Desktop/Verilog/truedp_ram/truedp_ram_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {0U, 255U};
static int ng5[] = {1, 0};
static int ng6[] = {16, 0};
static int ng7[] = {2, 0};



static int sp_initialise(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    t7 = (t1 + 4568);
    xsi_vlogvar_wait_assign_value(t7, t5, 1, 0, 1, 0LL);
    t8 = (t1 + 4408);
    xsi_vlogvar_wait_assign_value(t8, t5, 2, 0, 1, 0LL);
    t9 = (t1 + 4248);
    xsi_vlogvar_wait_assign_value(t9, t5, 3, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_write(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(32, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 4248);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 4408);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB4;

}

static int sp_read(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(42, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t1 + 4248);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(45, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 4408);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB4;

}

static int sp_stimulus_0(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng0);
    t8 = (t1 + 5528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 3928);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t4 = (t1 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4888);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 8, 0LL);
    goto LAB4;

}

static int sp_stimulus_1(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(59, ng0);
    t8 = (t1 + 5848);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4088);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    xsi_set_current_line(60, ng0);
    t4 = (t1 + 6008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5048);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 8, 0LL);
    goto LAB4;

}

static void Cont_10_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t19[8];
    char t30[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;

LAB0:    t1 = (t0 + 7248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 4568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t38, t7, 8);

LAB10:    memset(t4, 0, 8);
    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t70) != 0)
        goto LAB24;

LAB25:    t77 = (t4 + 4);
    t78 = *((unsigned int *)t4);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB26;

LAB27:    t84 = *((unsigned int *)t4);
    t85 = (~(t84));
    t86 = *((unsigned int *)t77);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t77) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t88, 8);

LAB34:    t89 = (t0 + 10520);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t93, 0, 8);
    t94 = 255U;
    t95 = t94;
    t96 = (t3 + 4);
    t97 = *((unsigned int *)t3);
    t94 = (t94 & t97);
    t98 = *((unsigned int *)t96);
    t95 = (t95 & t98);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 | t94);
    t101 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t101 | t95);
    xsi_driver_vfirst_trans(t89, 0, 7);
    t102 = (t0 + 10296);
    *((int *)t102) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4248);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t23) == 0)
        goto LAB11;

LAB13:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;

LAB14:    memset(t30, 0, 8);
    t31 = (t19 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t31) != 0)
        goto LAB17;

LAB18:    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t7 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB17:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB19:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t76 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB25;

LAB26:    t81 = (t0 + 4888);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    goto LAB27;

LAB28:    t88 = ((char*)((ng4)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 8, t83, 8, t88, 8);
    goto LAB34;

LAB32:    memcpy(t3, t83, 8);
    goto LAB34;

}

static void Cont_11_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t19[8];
    char t30[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;

LAB0:    t1 = (t0 + 7496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 4728);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t38, t7, 8);

LAB10:    memset(t4, 0, 8);
    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t70) != 0)
        goto LAB24;

LAB25:    t77 = (t4 + 4);
    t78 = *((unsigned int *)t4);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB26;

LAB27:    t84 = *((unsigned int *)t4);
    t85 = (~(t84));
    t86 = *((unsigned int *)t77);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t77) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t88, 8);

LAB34:    t89 = (t0 + 10584);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t93, 0, 8);
    t94 = 255U;
    t95 = t94;
    t96 = (t3 + 4);
    t97 = *((unsigned int *)t3);
    t94 = (t94 & t97);
    t98 = *((unsigned int *)t96);
    t95 = (t95 & t98);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 | t94);
    t101 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t101 | t95);
    xsi_driver_vfirst_trans(t89, 0, 7);
    t102 = (t0 + 10312);
    *((int *)t102) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4408);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t23) == 0)
        goto LAB11;

LAB13:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;

LAB14:    memset(t30, 0, 8);
    t31 = (t19 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t31) != 0)
        goto LAB17;

LAB18:    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t7 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB17:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB19:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t76 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB25;

LAB26:    t81 = (t0 + 5048);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    goto LAB27;

LAB28:    t88 = ((char*)((ng4)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 8, t83, 8, t88, 8);
    goto LAB34;

LAB32:    memcpy(t3, t83, 8);
    goto LAB34;

}

static void Always_13_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 7744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);

LAB4:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 7552);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 7552);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Initial_63_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 7992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB4:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 7800);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 7896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 7896);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 7800);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 7800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB13:    t5 = (t0 + 7896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB15:    if (t13 != 0)
        goto LAB16;

LAB11:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB12:    t14 = (t0 + 7896);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 7800);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 7992U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t5 = (t0 + 7992U);
    *((char **)t5) = &&LAB13;
    goto LAB1;

}

static void Initial_68_4(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 8240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 9040);
    t3 = (t0 + 8048);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 9288);
    t5 = (t0 + 8048);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 6168);
    memset(t7, 0, 8);
    *((unsigned int *)t7) = 2;
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    t8 = (t0 + 10424);
    *((int *)t8) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t9 = (t0 + 6168);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    if (*((int *)t11) > 0)
        goto LAB5;

LAB6:    t13 = (t0 + 8048);
    xsi_clean_active_fork_process_list(t13);
    goto LAB1;

LAB5:    t12 = (t0 + 10424);
    *((int *)t12) = 1;
    goto LAB1;

}

static void Initial_79_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);

LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8296);
    xsi_process_wait(t2, 170000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 8296);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB8:    t6 = (t0 + 8392);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB10:    if (t14 != 0)
        goto LAB11;

LAB6:    t7 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t7);

LAB7:    t15 = (t0 + 8392);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 8296);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    goto LAB1;

LAB9:;
LAB11:    t6 = (t0 + 8488U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

}

static void Initial_83_6(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 8736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 9536);
    t3 = (t0 + 8544);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 9784);
    t5 = (t0 + 8544);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 6328);
    memset(t7, 0, 8);
    *((unsigned int *)t7) = 2;
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    t8 = (t0 + 10440);
    *((int *)t8) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t9 = (t0 + 6328);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    if (*((int *)t11) > 0)
        goto LAB5;

LAB6:    t13 = (t0 + 8544);
    xsi_clean_active_fork_process_list(t13);
    goto LAB1;

LAB5:    t12 = (t0 + 10440);
    *((int *)t12) = 1;
    goto LAB1;

}

static void Initial_94_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 8984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 8792);
    xsi_process_wait(t2, 400000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(96, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Forked_70_8(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 9232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9040);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(70, ng0);
    t3 = (t0 + 9040);
    xsi_process_wait(t3, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t8 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t8 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);
    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    goto LAB5;

LAB8:    xsi_set_current_line(71, ng0);

LAB10:    xsi_set_current_line(72, ng0);
    t13 = (t0 + 5208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t16) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t17 = (t16 + 4);
    *((int *)t17) = 0;
    t18 = (t0 + 9040);
    t19 = (t0 + 2144);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t19, t20);
    t21 = (t0 + 5528);
    xsi_vlogvar_assign_value(t21, t15, 0, 0, 4);
    t22 = (t0 + 5688);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 8);

LAB13:    t23 = (t0 + 9136);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t31 = ((int  (*)(char *, char *))t30)(t0, t24);

LAB15:    if (t31 != 0)
        goto LAB16;

LAB11:    t24 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t24);

LAB12:    t32 = (t0 + 9136);
    t33 = *((char **)t32);
    t32 = (t0 + 2144);
    t34 = (t0 + 9040);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB14:;
LAB16:    t23 = (t0 + 9232U);
    *((char **)t23) = &&LAB13;
    goto LAB1;

}

static void Forked_74_9(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 9480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9288);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(74, ng0);
    t3 = (t0 + 9288);
    xsi_process_wait(t3, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t8 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t8 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(74, ng0);
    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 5368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    goto LAB5;

LAB8:    xsi_set_current_line(75, ng0);

LAB10:    xsi_set_current_line(76, ng0);
    t13 = (t0 + 5368);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t16) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t17 = (t16 + 4);
    *((int *)t17) = 0;
    t18 = (t0 + 9288);
    t19 = (t0 + 2576);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t19, t20);
    t21 = (t0 + 5848);
    xsi_vlogvar_assign_value(t21, t15, 0, 0, 4);
    t22 = (t0 + 6008);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 8);

LAB13:    t23 = (t0 + 9384);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t31 = ((int  (*)(char *, char *))t30)(t0, t24);

LAB15:    if (t31 != 0)
        goto LAB16;

LAB11:    t24 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t24);

LAB12:    t32 = (t0 + 9384);
    t33 = *((char **)t32);
    t32 = (t0 + 2576);
    t34 = (t0 + 9288);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB14:;
LAB16:    t23 = (t0 + 9480U);
    *((char **)t23) = &&LAB13;
    goto LAB1;

}

static void Forked_85_10(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 9728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9536);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(85, ng0);
    t3 = (t0 + 9536);
    xsi_process_wait(t3, 200000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t8 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t8 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    goto LAB5;

LAB8:    xsi_set_current_line(86, ng0);

LAB10:    xsi_set_current_line(87, ng0);
    t13 = (t0 + 5208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5208);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 9536);
    t20 = (t0 + 2144);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t20, t21);
    t22 = (t0 + 5528);
    xsi_vlogvar_assign_value(t22, t15, 0, 0, 4);
    t23 = (t0 + 5688);
    xsi_vlogvar_assign_value(t23, t18, 0, 0, 8);

LAB13:    t24 = (t0 + 9632);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB15:    if (t32 != 0)
        goto LAB16;

LAB11:    t25 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t25);

LAB12:    t33 = (t0 + 9632);
    t34 = *((char **)t33);
    t33 = (t0 + 2144);
    t35 = (t0 + 9536);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB14:;
LAB16:    t24 = (t0 + 9728U);
    *((char **)t24) = &&LAB13;
    goto LAB1;

}

static void Forked_89_11(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 9976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9784);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(89, ng0);
    t3 = (t0 + 9784);
    xsi_process_wait(t3, 200000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t8 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t8 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(89, ng0);
    xsi_set_current_line(89, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 5368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    goto LAB5;

LAB8:    xsi_set_current_line(90, ng0);

LAB10:    xsi_set_current_line(91, ng0);
    t13 = (t0 + 5368);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5368);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 9784);
    t20 = (t0 + 2576);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t20, t21);
    t22 = (t0 + 5848);
    xsi_vlogvar_assign_value(t22, t15, 0, 0, 4);
    t23 = (t0 + 6008);
    xsi_vlogvar_assign_value(t23, t18, 0, 0, 8);

LAB13:    t24 = (t0 + 9880);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB15:    if (t32 != 0)
        goto LAB16;

LAB11:    t25 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t25);

LAB12:    t33 = (t0 + 9880);
    t34 = *((char **)t33);
    t33 = (t0 + 2576);
    t35 = (t0 + 9784);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB14:;
LAB16:    t24 = (t0 + 9976U);
    *((char **)t24) = &&LAB13;
    goto LAB1;

}


extern void work_m_00000000001355885467_2433910790_init()
{
	static char *pe[] = {(void *)Cont_10_0,(void *)Cont_11_1,(void *)Always_13_2,(void *)Initial_63_3,(void *)Initial_68_4,(void *)Initial_79_5,(void *)Initial_83_6,(void *)Initial_94_7,(void *)Forked_70_8,(void *)Forked_74_9,(void *)Forked_85_10,(void *)Forked_89_11};
	static char *se[] = {(void *)sp_initialise,(void *)sp_write,(void *)sp_read,(void *)sp_stimulus_0,(void *)sp_stimulus_1};
	xsi_register_didat("work_m_00000000001355885467_2433910790", "isim/truedp_ram_tb_isim_beh.exe.sim/work/m_00000000001355885467_2433910790.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
