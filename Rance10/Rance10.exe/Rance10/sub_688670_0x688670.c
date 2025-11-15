// 函数: sub_688670
// 地址: 0x688670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(arg1 + 4)
int32_t edi = *(arg1 + 8)

while (esi != edi)
    void* ebx_1 = *esi
    int32_t* ecx = *(ebx_1 + 0xc)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
        *(ebx_1 + 0xc) = 0
    
    esi = &esi[1]
    *(ebx_1 + 0x21) = 0

int32_t result
result.b = 1
return result
