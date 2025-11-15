// 函数: sub_6c32e0
// 地址: 0x6c32e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* esi = arg2
int128_t var_1c = arg3
int128_t* eax_1 = sub_6c3050(&var_1c, arg2, ecx)

if (eax_1 != 0)
    return eax_1

if (esi[0x16] != 1)
    return 0xffffff7d

bool cond:0_1 = esi[1] == 0
esi[0x16] = 2

if (cond:0_1)
    esi[0x16] = 3
    return nullptr

int128_t* edi_1 = sub_6c2ac0(esi)

if (edi_1 == 0)
    return edi_1

*esi = 0
sub_6c31d0(esi)
return edi_1
