// 函数: sub_476520
// 地址: 0x476520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 0xc)

for (void** i = *edi; i != edi; i = *i)
    (*(*i[2] + 4))()

int32_t* ecx_1 = *(arg1 + 0xc)
int32_t* result = *ecx_1
*ecx_1 = ecx_1
void* ecx_2 = *(arg1 + 0xc)
*(ecx_2 + 4) = ecx_2
*(arg1 + 0x10) = 0

if (result != *(arg1 + 0xc))
    int32_t* i_1
    
    do
        i_1 = *result
        sub_403160(result, 1, 0xc)
        result = i_1
    while (i_1 != *(arg1 + 0xc))

return result
