// 函数: sub_685940
// 地址: 0x685940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (*(arg1 + 8) == 0)
    eax.b = 0
    return eax

int32_t* ebx = *(arg1 + 0xc)

if (ebx == 0)
    eax.b = 0
    return eax

int32_t ecx = 0

if (arg2 != 0)
    ecx = 2

int32_t eax_1
eax_1.b = arg3.b != 0
arg2.d = ecx | eax_1
sub_42eb70(arg1 + 0x34, &arg3, &arg2)
void** eax_2 = arg3

if (eax_2 == *(arg1 + 0x34))
    eax_2.b = 0
    return eax_2

int32_t esi = eax_2[5]

if (*(arg1 + 0x3c) != esi)
    (*(*ebx + 0x90))(ebx, esi, 0)
    *(arg1 + 0x3c) = esi

eax_2.b = 1
return eax_2
