// 函数: sub_458c50
// 地址: 0x458c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_456e00(&arg1[0xc])
void* ecx_1 = arg1[7]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[9] - ecx_1) s>> 2, 4)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t eax_5 = arg1[5]

if (eax_5 u>= 0x10)
    eax_5 = sub_403160(*arg1, eax_5 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_5

char* eax_6 = *arg1
*eax_6 = 0
return eax_6
