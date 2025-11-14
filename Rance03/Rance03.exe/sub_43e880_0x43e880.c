// 函数: sub_43e880
// 地址: 0x43e880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x14) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x18)

if (eax_1 != *(arg1 + 0x10) && eax_1 != arg3)
    sub_43e8e0(arg1)

void* eax_2 = *(arg1 + 4)
*(arg1 + 0x18) = arg3
void* esi_1 = *(eax_2 + 4)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x2aaaaaab, *(esi_1 + 0x10) - *(esi_1 + 0xc))
int32_t edx_2 = edx_1 s>> 2
sub_403110(*(esi_1 + 0xc) + ((((edx_2 u>> 0x1f) + edx_2) * 3 - 3) << 3), arg2, nullptr, 0xffffffff)
