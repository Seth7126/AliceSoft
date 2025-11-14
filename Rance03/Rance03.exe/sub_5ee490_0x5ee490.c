// 函数: sub_5ee490
// 地址: 0x5ee490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 8) == 0xffffffff)
    int32_t result
    result.b = 0
    return result

int32_t eax = *(arg1 + 0x10)
void** esi = arg2
int32_t ecx = esi[4]

if (eax u> ecx)
    sub_4031c0(esi, eax - ecx, 0)
else
    bool cond:0_1 = esi[5] u< 0x10
    esi[4] = eax
    
    if (cond:0_1)
        *(esi + eax) = 0
    else
        (*esi)[eax] = 0

uint32_t eax_2 = esi[4]

if (esi[5] u>= 0x10)
    esi = *esi

return sub_604e90(arg1 + 4, esi, eax_2)
