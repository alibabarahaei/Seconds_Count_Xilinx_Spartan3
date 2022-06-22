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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *STD_TEXTIO;
char *XILINXCORELIB_P_1837083571;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *XILINXCORELIB_P_2147798235;
char *XILINXCORELIB_P_0914797037;
char *XILINXCORELIB_P_0558180590;
char *IEEE_P_1242562249;
char *UNISIM_P_0947159679;
char *XILINXCORELIB_P_3381355550;
char *XILINXCORELIB_P_1433929353;
char *XILINXCORELIB_P_0661866964;
char *XILINXCORELIB_P_3106367597;
char *XILINXCORELIB_P_0624651749;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    unisim_p_0947159679_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    xilinxcorelib_p_1837083571_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    xilinxcorelib_p_2147798235_init();
    xilinxcorelib_p_0914797037_init();
    xilinxcorelib_p_0558180590_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_1433929353_init();
    xilinxcorelib_p_0661866964_init();
    xilinxcorelib_p_3106367597_init();
    xilinxcorelib_p_0624651749_init();
    xilinxcorelib_a_3143202986_3212880686_init();
    xilinxcorelib_a_0829167203_3212880686_init();
    xilinxcorelib_a_2282842213_3212880686_init();
    xilinxcorelib_a_0140084197_3212880686_init();
    xilinxcorelib_a_0349694986_3212880686_init();
    xilinxcorelib_a_2839730722_3212880686_init();
    work_a_0550436089_3407525729_init();
    xilinxcorelib_a_0411438876_3212880686_init();
    xilinxcorelib_a_2085728976_3212880686_init();
    xilinxcorelib_a_1234821329_3212880686_init();
    xilinxcorelib_a_2621959933_3212880686_init();
    xilinxcorelib_a_3115550107_3212880686_init();
    work_a_2970122717_1931672551_init();
    xilinxcorelib_a_0374599252_3212880686_init();
    xilinxcorelib_a_0625579957_3212880686_init();
    xilinxcorelib_a_1474134404_3212880686_init();
    work_a_2318914433_2320915852_init();
    unisim_a_0680745308_3966425309_init();
    unisim_a_2566042487_0395351916_init();
    unisim_a_1717296735_4086321779_init();
    work_a_1201161955_3212880686_init();


    xsi_register_tops("work_a_1201161955_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    XILINXCORELIB_P_2147798235 = xsi_get_engine_memory("xilinxcorelib_p_2147798235");
    XILINXCORELIB_P_0914797037 = xsi_get_engine_memory("xilinxcorelib_p_0914797037");
    XILINXCORELIB_P_0558180590 = xsi_get_engine_memory("xilinxcorelib_p_0558180590");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    XILINXCORELIB_P_1433929353 = xsi_get_engine_memory("xilinxcorelib_p_1433929353");
    XILINXCORELIB_P_0661866964 = xsi_get_engine_memory("xilinxcorelib_p_0661866964");
    XILINXCORELIB_P_3106367597 = xsi_get_engine_memory("xilinxcorelib_p_3106367597");
    XILINXCORELIB_P_0624651749 = xsi_get_engine_memory("xilinxcorelib_p_0624651749");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");

    return xsi_run_simulation(argc, argv);

}
