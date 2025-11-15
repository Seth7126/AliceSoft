// 函数: sub_67a5c0
// 地址: 0x67a5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
int32_t result = *(arg1 + 0x5c)
void* ebp = (result << 1) + 4

if (*(arg1 + 0x64) s> 0)
    int32_t* edi_1 = *(arg1 + 0x1c0) + 0x44
    
    do
        result = (*(*(arg1 + 4) + 4))(arg1, 1, ebp)
        *edi_1 = result
        edi_1 = &edi_1[1]
        i += 1
    while (i s< *(arg1 + 0x64))

return result
