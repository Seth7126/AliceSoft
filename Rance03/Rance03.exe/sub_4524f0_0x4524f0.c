// 函数: sub_4524f0
// 地址: 0x4524f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_418220(*(*(arg1 + 0x28) + 4))
void* eax_1 = *(arg1 + 0x28)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg1 + 0x28)
*eax_2 = eax_2
void* eax_3 = *(arg1 + 0x28)
*(eax_3 + 8) = eax_3
*(arg1 + 0x2c) = 0

for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x18))(1)

int32_t result = *(arg1 + 0x1c)
*(arg1 + 0x20) = result
return result
