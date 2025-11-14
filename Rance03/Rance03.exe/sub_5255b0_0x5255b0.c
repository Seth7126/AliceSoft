// 函数: sub_5255b0
// 地址: 0x5255b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_526010(*(*(arg1 + 0x28) + 4))
void* eax_1 = *(arg1 + 0x28)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg1 + 0x28)
*eax_2 = eax_2
void* eax_3 = *(arg1 + 0x28)
*(eax_3 + 8) = eax_3
void* result = arg1 + 0x10
*(arg1 + 0x2c) = 0
bool cond:0 = *(result + 0x14) u< 0x10
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

return result
