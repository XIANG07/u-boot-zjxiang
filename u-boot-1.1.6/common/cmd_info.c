/******************************************************************
* Author:zjxiang
* u-boot,打印zjxiang修改u-boot信息
* Date:2018-02-08
*******************************************************************/
#include <common.h>
#include <command.h>

/* 增加新的命令 - hello             */  
/* 执行hello命令，打印hello world！ */  
int do_info(cmd_tbl_t * cmdtp, int flag, int argc, char *argv[])  
{  
    printf("u-boot-1.1.6\n");
	printf("zjxiang 2018-02-08\n");
  
    return 0;  
}  
  
/* name,maxargs,repeatable,command,"usage","help" */  
U_BOOT_CMD(  
    info, 1, 1, do_info,  
    "Usage - print zjxiang migration u-boot info",  //使用概要
    "[args..]\n"  
    "info command help.  Long description.\n"  
); 




