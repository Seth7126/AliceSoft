// 函数: sub_474240
// 地址: 0x474240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t esi = *(arg1 + 0x14)

if (esi != 0)
    int32_t eax_11
    uint32_t edx_3
    edx_3:eax_11 = mulu.dp.d(arg2, 0x3e8)
    return __alldiv(eax_11, edx_3, esi, 0)

uint32_t esi_1 = *(arg1 + 0x18)

if (esi_1 == 0)
    esi_1 = 4
    uint32_t eax_3 = (*(arg1 + 0x1c) * *(arg1 + 0xc)) u>> 3
    
    if (eax_3 != 0)
        esi_1 = eax_3

int32_t ecx = *(arg1 + 0x10)

if (ecx == 0)
    ecx = 0xac44

int32_t eax_8
uint32_t edx_2
edx_2:eax_8 = mulu.dp.d(divu.dp.d(0:(arg2 - 1 + esi_1), esi_1), 0x3e8)
return __aulldiv(eax_8, edx_2, ecx, 0)
