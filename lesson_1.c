// 第一节 APDU指令

/*		在 git remote add jason git@github.com:MakeLinuxYeah/CPUCard.git时
 *	出现错误：fatal: Not a git repository (or any of the parent directories): .git
 *	只需要git init一下，接着再次执行即可。
 *
 *		在出现"error: 无法推送一些引用到 'git@github.com:MakeLinuxYeah/CPUCard.git'
 *	提示：更新被拒绝，因为远程仓库包含您本地尚不存在的提交"时，使用命令
 *		git push -u jason +master
 *	强行提交即可.
 */

/*
 *	前言 
 *		APDU指令，即 Application Protocol data unit, 是智能卡与智能卡读卡器之间传
 *	送的信息单元。
 *	
 *	一、命令分类：
 *		COS命令由具体应用可分为4中命令报文结构：
 *	  1）CLA  INS  P1  P2  00
 *	  2）CLA  INS  P1  P2  Le
 *	  3）CLA  INS  P1  P2  Lc  Data
 *	  4）CLA  INS  P1  P2  Lc  Data  Le
 *
 *	二、响应报文
 *		响应数据  响应状态码
 *		  Data    SW1  SW2
 *
 *		Data：返回给用户的数据，即命令的执行结果
 *		SW1、SW2：返回命令处理的状态
 *
 *
 *	三、命令集
 *	  1）Read Binary
 *		功能：用于读取二进制文件部分或全部内容。
 *		命令报文：
 *					表1 Read Binary命令报文
 *		--------------------------------------------------------------
 *		|代码 |							值							 |
 *		--------------------------------------------------------------
 *		|CLA  |			"00"或"04"									 |
 *		|INS  |				"B0"									 |				
 *		|P1   |				见表2                                    |
 *		|P2   |		从文件中读取的第一个字节的偏移地址				 |
 *		|Lc   |		不存在;(CLA=04时例外)							 |
 *		|Data |		不存在;(CLA=04时，应包括MAC)					 |
 *		|Le   |				"00"									 |
 *		--------------------------------------------------------------
 *
 *					表2 命令引用控制参数(P1)
 *		--------------------------------------------------------------
 *		|bit8|bit7|bit6|bit5|bit4|bit3|bit2|bit1|	含义	         |
 *		--------------------------------------------------------------
 *		| X  |    |    |    |    |    |    |    |   读取模式：		 |	
 *		| 1  |    |    |    |    |    |    |    |   用SFI模式        | 
 *		|    | 0  | 0  |    |    |    |    |    |   RFU模式(若bit8=1)| 
 *		|    |    |	   | X  | X  | X  | X  | X  | SFI(取值范围21-30) |    	
 *      --------------------------------------------------------------
 *	
 *	 注：SFI，短文见标识符
 *	     RFU，预留
 */
 


