// 函数: sub_443460
// 地址: 0x443460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 4
int32_t* edi = *(arg1 + 4)
uint32_t edx_2 = (*(arg1 + 8) + 7) u>> 3
int32_t esi = 0
int32_t ebp = 0
int32_t* eax_1 = &var_14
int32_t var_18 = 0
int32_t ecx_2 = edi[1] - edx_2 - *edi
int32_t var_10 = ecx_2

if (ecx_2 u<= 4)
    eax_1 = &var_10

uint32_t ebx = 0
int32_t ecx_3 = 0
int32_t eax_2 = *eax_1
var_14 = eax_2

if (eax_2 u>= 2)
    int32_t eax_3 = *edi
    int32_t edi_2 = var_14 - 2
    var_10 = eax_3
    void* ebx_2 = eax_3 + 1 + edx_2
    int32_t i_1 = (edi_2 u>> 1) + 1
    int32_t ecx_4 = i_1 * 2
    int32_t i
    
    do
        uint32_t eax_4 = zx.d(*(eax_3 + edx_2))
        ebx_2 += 2
        edx_2 += 2
        char ecx_6 = esi.b + 8
        ebp += eax_4 << esi.b
        esi += 0x10
        var_18 += zx.d(*(ebx_2 - 2)) << ecx_6
        eax_3 = var_10
        i = i_1
        i_1 -= 1
    while (i != 1)
    esi = var_18
    ebx = 0
    ecx_3 = ecx_4
    eax_2 = var_14

if (ecx_3 u< eax_2)
    ebx = zx.d(*(*edi + edx_2)) << (ecx_3 << 3).b
    edx_2 += 1

*(arg1 + 8) = edx_2 << 3
return esi + ebp + ebx
