// 函数: sub_59e430
// 地址: 0x59e430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = *(arg1 + 8)

for (int32_t* i = *(arg1 + 4); i != edi; i = &i[5])
    (**i)(0)

*(arg1 + 8) = *(arg1 + 4)
sub_59e970(*(*(arg1 + 0x10) + 4))
void* eax_4 = *(arg1 + 0x10)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x10)
*eax_5 = eax_5
void* result = *(arg1 + 0x10)
*(result + 8) = result
*(arg1 + 0x14) = 0
return result
