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
 *
 *
 *
