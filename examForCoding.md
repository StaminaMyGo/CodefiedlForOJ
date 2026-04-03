
-----------------------常用头文件和函数说明（含ASCII码表）-----------------------

发布时间:  2020-05-08 22:50:39.0

内容


系统允许使用的头文件
stdio.h   math.h   string.h   malloc.h   stdlib.h   map   set   list   deque
queue   stack   cmath   vector   bitset   cstdio   ctype.h   string   iomanip
cstring   utility   sstream   iostream   algorithm   cstdlib   functional

系统禁用的函数
system   getenv

关于在GCC编译环境使用整型绝对值函abs的问题
在GCC中，使用abs绝对值函数，需要包含头文件 stdlib.h
注：fabs函数，则需要包含头文math.h


ASCII表
    ASCII（American Standard Code for Information Interchange，美国信息互换标准代码，ASCⅡ）是基于拉丁字母的一套电脑编码系统。
它主要用于显示现代英语和其他西欧语言。它是现今最通用的单字节编码系统，并等同于国际标准ISO/IEC 646。
　　ASCII第一次以规范标准的型态发表是在1967年，最后一次更新则是在1986年，共定义了128个字符，其中33个字符无法显示，
且这33个字符多数都已是陈废的控制字符，控制字符的用途主要是用来操控已经处理过的文字，在33个字符之外的是95个可显示的字符。
ASCII控制字符
二进制	十进制	十六进制	缩写	可以显示的表示法	名称/意义
0000 0000	0	00	NUL	␀	空字符（Null）
0000 0001	1	01	SOH	␁	标题开始
0000 0010	2	02	STX	␂	本文开始
0000 0011	3	03	ETX	␃	本文结束
0000 0100	4	04	EOT	␄	传输结束
0000 0101	5	05	ENQ	␅	请求
0000 0110	6	06	ACK	␆	确认回应
0000 0111	7	07	BEL	␇	响铃
0000 1000	8	08	BS	␈	退格
0000 1001	9	09	HT	␉	水平定位符号
0000 1010	10	0A	LF	␊	换行键
0000 1011	11	0B	VT	␋	垂直定位符号
0000 1100	12	0C	FF	␌	换页键
0000 1101	13	0D	CR	␍	归位键
0000 1110	14	0E	SO	␎	取消变换（Shift out）
0000 1111	15	0F	SI	␏	启用变换（Shift in）
0001 0000	16	10	DLE	␐	跳出数据通讯
0001 0001	17	11	DC1	␑	设备控制一（XON 启用软件速度控制）
0001 0010	18	12	DC2	␒	设备控制二
0001 0011	19	13	DC3	␓	设备控制三（XOFF 停用软件速度控制）
0001 0100	20	14	DC4	␔	设备控制四
0001 0101	21	15	NAK	␕	确认失败回应
0001 0110	22	16	SYN	␖	同步用暂停
0001 0111	23	17	ETB	␗	区块传输结束
0001 1000	24	18	CAN	␘	取消
0001 1001	25	19	EM	␙	连接介质中断
0001 1010	26	1A	SUB	␚	替换
0001 1011	27	1B	ESC	␛	跳出
0001 1100	28	1C	FS	␜	文件分割符
0001 1101	29	1D	GS	␝	组群分隔符
0001 1110	30	1E	RS	␞	记录分隔符
0001 1111	31	1F	US	␟	单元分隔符
0111 1111	127	7F	DEL	␡	删除



ASCII可显示字符
二进制	十进制	十六进制	图形
0010 0000	32	20	（空格）(␠)
0010 0001	33	21	!
0010 0010	34	22	"
0010 0011	35	23	#
0010 0100	36	24	$
0010 0101	37	25	 %
0010 0110	38	26	&
0010 0111	39	27	'
0010 1000	40	28	(
0010 1001	41	29	)
0010 1010	42	2A	*
0010 1011	43	2B	+
0010 1100	44	2C	,
0010 1101	45	2D	-
0010 1110	46	2E	.
0010 1111	47	2F	/
0011 0000	48	30	0
0011 0001	49	31	1
0011 0010	50	32	2
0011 0011	51	33	3
0011 0100	52	34	4
0011 0101	53	35	5
0011 0110	54	36	6
0011 0111	55	37	7
0011 1000	56	38	8
0011 1001	57	39	9
0011 1010	58	3A	:
0011 1011	59	3B	;
0011 1100	60	3C	<
0011 1101	61	3D	=
0011 1110	62	3E	>
0011 1111	63	3F	?
二进制	十进制	十六进制	图形
0100 0000	64	40	@
0100 0001	65	41	A
0100 0010	66	42	B
0100 0011	67	43	C
0100 0100	68	44	D
0100 0101	69	45	E
0100 0110	70	46	F
0100 0111	71	47	G
0100 1000	72	48	H
0100 1001	73	49	I
0100 1010	74	4A	J
0100 1011	75	4B	K
0100 1100	76	4C	L
0100 1101	77	4D	M
0100 1110	78	4E	N
0100 1111	79	4F	O
0101 0000	80	50	P
0101 0001	81	51	Q
0101 0010	82	52	R
0101 0011	83	53	S
0101 0100	84	54	T
0101 0101	85	55	U
0101 0110	86	56	V
0101 0111	87	57	W
0101 1000	88	58	X
0101 1001	89	59	Y
0101 1010	90	5A	Z
0101 1011	91	5B	[
0101 1100	92	5C	\
0101 1101	93	5D	]
0101 1110	94	5E	^
0101 1111	95	5F	_
二进制	十进制	十六进制	图形
0110 0000	96	60	`
0110 0001	97	61	a
0110 0010	98	62	b
0110 0011	99	63	c
0110 0100	100	64	d
0110 0101	101	65	e
0110 0110	102	66	f
0110 0111	103	67	g
0110 1000	104	68	h
0110 1001	105	69	i
0110 1010	106	6A	j
0110 1011	107	6B	k
0110 1100	108	6C	l
0110 1101	109	6D	m
0110 1110	110	6E	n
0110 1111	111	6F	o
0111 0000	112	70	p
0111 0001	113	71	q
0111 0010	114	72	r
0111 0011	115	73	s
0111 0100	116	74	t
0111 0101	117	75	u
0111 0110	118	76	v
0111 0111	119	77	w
0111 1000	120	78	x
0111 1001	121	79	y
0111 1010	122	7A	z
0111 1011	123	7B	{
0111 1100	124	7C	|
0111 1101	125	7D	}
0111 1110	126	7E	~






常用函数
一、数学函数
    调用数学函数时，要求在源文件中包下以下命令行：
　　#include <math.h>
　　函数原型说明	　　功能	　　返回值　　	　　说明　　
 int abs( int x)	　　求整数x的绝对值	计算结果	
 double fabs(double x)　　	　　求双精度实数x的绝对值	计算结果	
 double acos(double x)　	　　计算(x)的反余弦值	计算结果	x在-1～1范围内
 double asin(double x)　　	　　计算(x)的反正弦值	计算结果	x在-1～1范围内
 double atan(double x)　	　　计算(x)的反正切值	计算结果	
 double atan2(double x)　	　　计算(x/y)的反正切值	计算结果	
 double cos(double x)　　	　　计算cos(x)的值	计算结果	x的单位为弧度
 double cosh(double x)　　	　　计算双曲余弦cosh(x)的值	计算结果	
 double exp(double x)　　	　　求ex的值	计算结果	
 double fabs(double x)　　	　　求双精度实数x的绝对值	计算结果	
 double floor(double x)　　	　　求不大于双精度实数x的最大整数	计算结果	双精度数形式
 double fmod(double x,double y)	　　求x/y整除后的双精度余数	计算结果	
 double frexp(double val,int *exp)	把双精度val分解尾数和指数，即val=x*2n，n存放在exp所指的变量中	返回尾数x
0.5≤x<1	val=0时返回0
 double log(double x)　　	　　求㏑x	计算结果	　　x>0
 double log10(double x)　　	　　求log10x	计算结果	　　x>0
 double modf(double val,double *ip)	把双精度val分解成整数部分和小数部分，整数部分存放在ip所指的变量中	返回小数部分	
 double pow(double x,double y)	计算xy的值	计算结果	
 double sin(double x)　　	计算sin(x)的值	计算结果	 x的单位为弧度　　
 double sinh(double x)　　	计算x的双曲正弦函数sinh(x)的值	计算结果	
 double sqrt(double x)	计算x的开方	计算结果	　　x≥0
 double tan(double x)	计算tan(x)	计算结果	
 double tanh(double x)	计算x的双曲正切函数tanh(x)的值　　	计算结果	

二、字符函数
    调用字符函数时，要求在源文件中包下以下命令行：
　　#include <ctype.h>
　　函数原型说明　　	　　功能	　　返回值
int isalnum(int ch)	检查ch是否为字母或数字	是，返回1；否则返回0
int isalpha(int ch)	检查ch是否为字母	是，返回1；否则返回0
int iscntrl(int ch)	检查ch是否为控制字符	是，返回1；否则返回0
　int isdigit(int ch)	检查ch是否为数字	是，返回1；否则返回0
　int isgraph(int ch)	检查ch是否为ASCII码值在ox21到ox7e的可打印字符（即不包含空格字符）	是，返回1；否则返回0
　int islower(int ch)	检查ch是否为小写字母	是，返回1；否则返回0
　int isprint(int ch)	检查ch是否为包含空格符在内的可打印字符	是，返回1；否则返回0　
　int ispunct(int ch)	检查ch是否为除了空格、字母、数字之外的可打印字符	是，返回1；否则返回0
　int isspace(int ch)	检查ch是否为空格、制表或换行符	是，返回1；否则返回0
　int isupper(int ch)	检查ch是否为大写字母	是，返回1；否则返回0
　int isxdigit(int ch)	检查ch是否为16进制数	是，返回1；否则返回0
　int tolower(int ch)	把ch中的字母转换成小写字母	返回对应的小写字母
　int toupper(int ch)	把ch中的字母转换成大写字母	返回对应的大写字母

三、字符串函数
　　调用字符函数时，要求在源文件中包下以下命令行：
　　#include <string.h>
　　函数原型说明	　　功能	　　返回值
char *strcat(char *s1,char *s2)	　　把字符串s2接到s1后面	　　s1所指地址
char *strchr(char *s,int ch)	　　在s所指字符串中，找出第一次出现字符ch的位置	　　返回找到的字符的地址，找不到返回NULL
int strcmp(char *s1,char *s2)	　　对s1和s2所指字符串进行比较　	　　s1<s2,返回负数；s1= =s2,返回0；s1>s2,返回正数
char *strcpy(char *s1,char *s2)	　　把s2指向的串复制到s1指向的空间　	　　s1 所指地址
unsigned strlen(char *s)	　　求字符串s的长度　	返回串中字符（不计最后的'\0'）个数
char *strstr(char *s1,char *s2)	　　在s1所指字符串中，找出字符串s2第一次出现的位置　	返回找到的字符串的地址，找不到返回NULL

四、输入输出函数
　　调用字符函数时，要求在源文件中包下以下命令行：
　　#include <stdio.h>
函数原型说明	　　功能	　　返回值
void clearer(FILE *fp)	清除与文件指针fp有关的所有出错信息　	　　无
int fclose(FILE *fp)	关闭fp所指的文件，释放文件缓冲区　	　　出错返回非0，否则返回0
int feof (FILE *fp)	检查文件是否结束　	遇文件结束返回非0，否则返回0
int fgetc (FILE *fp)	从fp所指的文件中取得下一个字符　	出错返回EOF，否则返回所读字符
char *fgets(char *buf,int n, FILE *fp)	从fp所指的文件中读取一个长度为n-1的字符串，将其存入buf所指存储区	返回buf所指地址，若遇文件结束或出错返回NULL
FILE *fopen(char *filename,char *mode)	以mode指定的方式打开名为filename的文件	成功，返回文件指针（文件信息区的起始地址），否则返回NULL
int fprintf(FILE *fp, char *format, args,…)	把args,…的值以format指定的格式输出到fp指定的文件中	实际输出的字符数
int fputc(char ch, FILE *fp)	把ch中字符输出到fp指定的文件中　	成功返回该字符，否则返回EOF
int fputs(char *str, FILE *fp)	把str所指字符串输出到fp所指文件　	成功返回非负整数，否则返回-1（EOF）
int fread(char *pt,unsigned size,unsigned n, FILE *fp)	从fp所指文件中读取长度size为n个数据项存到pt所指文件　	读取的数据项个数
int fscanf (FILE *fp, char *format,args,…)	从fp所指的文件中按format指定的格式把输入数据存入到args,…所指的内存中　	已输入的数据个数，遇文件结束或出错返回0
int fseek (FILE *fp,long offer,int base)	移动fp所指文件的位置指针　	成功返回当前位置，否则返回非0
long ftell (FILE *fp)	求出fp所指文件当前的读写位置	读写位置，出错返回-1L
int fwrite(char *pt,unsigned size,unsigned n, FILE *fp)	把pt所指向的n*size个字节输入到fp所指文件	输出的数据项个数
int getc (FILE *fp)	　从fp所指文件中读取一个字符　	返回所读字符，若出错或文件结束返回EOF
int getchar(void)	从标准输入设备读取下一个字符	返回所读字符，若出错或文件结束返回-1
char *gets(char *s)	从标准设备读取一行字符串放入s所指存储区，用’\0’替换读入的换行符	返回s,出错返回NULL
int printf(char *format,args,…)	把args,…的值以format指定的格式输出到标准输出设备	输出字符的个数
int putc (int ch, FILE *fp)　　	同fputc　	同fputc
int putchar(char ch)	把ch输出到标准输出设备　	返回输出的字符，若出错则返回EOF
int puts(char *str)	把str所指字符串输出到标准设备，将’\0’转成回车换行符	返回换行符，若出错，返回EOF
int rename(char *oldname,char *newname)	把oldname所指文件名改为newname所指文件名	成功返回0，出错返回-1
void rewind(FILE *fp)	将文件位置指针置于文件开头	无
int scanf(char *format,args,…)	从标准输入设备按format指定的格式把输入数据存入到args,…所指的内存中	已输入的数据的个数

五、动态分配函数和随机函数
　　调用字符函数时，要求在源文件中包下以下命令行：
　　#include <stdlib.h>
函数原型说明	　　功能	　　返回值
void *calloc(unsigned n,unsigned size)　	分配n个数据项的内存空间，每个数据项的大小为size个字节	分配内存单元的起始地址；如不成功，返回0
void *free(void *p)	释放p所指的内存区　	无
void *malloc(unsigned size)	分配size个字节的存储空间	分配内存空间的地址；如不成功，返回0
void *realloc(void *p,unsigned size)	把p所指内存区的大小改为size个字节　	新分配内存空间的地址；如不成功，返回0
int rand(void)	产生0～32767的随机整数	返回一个随机整数
void exit(int state)	程序终止执行，返回调用过程，state为0正常终止，非0非正常终止	无




作者 admin
 
Version 1.0 | Designer：Chen Xiang-ji, Ke Hong-zheng | © 2009-2026 Unlimited Studio
粤ICP备05008874号
