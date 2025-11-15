// 函数: sub_624e70
// 地址: 0x624e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[6]

if (ecx != 0)
    sub_403160(ecx, arg1[8] - ecx, 1)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t eax_4 = arg1[5]

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(*arg1, eax_4 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_4

char* eax_5 = *arg1
*eax_5 = 0
return eax_5
