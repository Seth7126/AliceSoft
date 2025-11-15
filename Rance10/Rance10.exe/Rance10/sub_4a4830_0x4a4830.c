// 函数: sub_4a4830
// 地址: 0x4a4830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[7]
*arg1 = &mainwindow::CScreenshotFolderPath::`vftable'
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
int32_t eax_2 = arg1[6]

if (eax_2 u>= 0x10)
    eax_2 = sub_403160(arg1[1], eax_2 + 1, 1)

arg1[6] = 0xf
bool cond:1 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:1)
    arg1[1].b = 0
    return eax_2

char* eax_4 = arg1[1]
*eax_4 = 0
return eax_4
