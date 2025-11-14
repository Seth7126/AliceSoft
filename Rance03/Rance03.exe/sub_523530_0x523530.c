// 函数: sub_523530
// 地址: 0x523530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xc) == *(arg1 + 0x10))
    int32_t eax
    eax.b = 1
    return eax

void* eax_2 = (*(**(arg1 + 0x24) + 0x18))()
void* var_4 = eax_2

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

int32_t* esi = *(arg1 + 0xc)
int32_t ebp = 0
void* ebx_1 = *(arg1 + 0x10) - esi
int32_t var_8 = 0
uint32_t ebx_3 = (ebx_1 + 3) u>> 2

if (esi u> *(arg1 + 0x10))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_521f30(*esi, &var_4, &var_8, *(arg1 + 0x28), *(arg1 + 0x2c), arg2, arg3, arg4)
        ebp += 1
        esi = &esi[1]
    while (ebp != ebx_3)

return (*(**(arg1 + 0x24) + 0x1c))() != 0
