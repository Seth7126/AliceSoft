// 函数: sub_452540
// 地址: 0x452540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_418220(*(*(arg1 + 0x3c) + 4))
void* eax_1 = *(arg1 + 0x3c)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg1 + 0x3c)
*eax_2 = eax_2
void* eax_3 = *(arg1 + 0x3c)
*(eax_3 + 8) = eax_3
*(arg1 + 0x40) = 0

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x28))(1)

int32_t result = *(arg1 + 0x30)
*(arg1 + 0x34) = result
return result
