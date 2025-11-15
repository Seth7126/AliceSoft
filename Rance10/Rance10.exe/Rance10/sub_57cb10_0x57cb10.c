// 函数: sub_57cb10
// 地址: 0x57cb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i_1 = arg1
int32_t edx = *(arg1 + 0x10)
*(arg1 + 0x1c) = *(arg1 + 0x18)
sub_42c9c0(arg1 + 0x18, edx)
int32_t* esi = *(arg1 + 0xc)
void* i = *esi
i_1 = i

for (; i != esi; i = i_1)
    int32_t edi_1 = *(i + 0x14)
    int32_t ebp_1 = *(i + 0x10)
    
    if (edi_1 s>= 0 && edi_1 s< (**(arg1 + 0x14))())
        *(*(arg1 + 0x18) + (edi_1 << 2)) = ebp_1
    
    sub_429080(&i_1)

return i
