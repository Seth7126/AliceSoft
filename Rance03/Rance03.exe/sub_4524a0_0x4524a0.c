// 函数: sub_4524a0
// 地址: 0x4524a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_418220(*(*(arg1 + 0x14) + 4))
void* eax_1 = *(arg1 + 0x14)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg1 + 0x14)
*eax_2 = eax_2
void* eax_3 = *(arg1 + 0x14)
*(eax_3 + 8) = eax_3
*(arg1 + 0x18) = 0

for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x44))(1)

int32_t result = *(arg1 + 8)
*(arg1 + 0xc) = result
return result
