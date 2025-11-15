// 函数: sub_58fd00
// 地址: 0x58fd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[8]

if (edi != 0)
    sub_403160(edi, (arg1[0xa] - edi) s/ 0x1c, 0x1c)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t eax_6 = arg1[5]

if (eax_6 u>= 0x10)
    eax_6 = sub_403160(*arg1, eax_6 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_6

char* eax_7 = *arg1
*eax_7 = 0
return eax_7
