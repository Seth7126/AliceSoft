// 函数: sub_581770
// 地址: 0x581770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[0x11]

if (ecx != 0)
    sub_403160(ecx, (arg1[0x13] - ecx) s>> 6, 0x40)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

int32_t eax_4 = arg1[0xf]
void* esi = &arg1[0xa]

if (eax_4 u>= 0x10)
    sub_403160(*esi, eax_4 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
sub_586960(&arg1[7])
return sub_5817f0(arg1) __tailcall
