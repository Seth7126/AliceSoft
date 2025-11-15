// 函数: sub_46ef90
// 地址: 0x46ef90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i_1 = arg1
int32_t* esi = *(arg1 + 4)
int32_t result = 0
void* i = *esi
i_1 = i

for (; i != esi; i = i_1)
    int32_t edi_1 = *(*(i + 0x28) + 0x34)
    sub_429080(&i_1)
    int32_t result_1 = result + 1
    
    if (edi_1 != 6)
        result_1 = result
    
    result = result_1

return result
