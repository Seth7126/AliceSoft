// 函数: sub_403320
// 地址: 0x403320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[5]

if (eax u>= 0x10)
    eax = sub_403160(*arg1, eax + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax

char* eax_2 = *arg1
*eax_2 = 0
return eax_2
