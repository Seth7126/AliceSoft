// 函数: sub_55d4d0
// 地址: 0x55d4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1 + 0xd8
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t* ecx

if (esi[5] u< 0x10)
    ecx = esi
else
    ecx = *esi

int32_t ebx = arg2[4]
int32_t eax_1 = ebx
int32_t ebp = esi[4]

if (ebp u< ebx)
    eax_1 = ebp

int32_t result = sub_406ac0(eax_1, edx, ecx, eax_1)

if (result == 0 && ebp u>= ebx && ebp u<= ebx)
    return result

bool cond:1_1 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:1_1))
    esi = *esi

*esi = 0
return sub_55d600(arg1, arg2)
