// 函数: sub_688580
// 地址: 0x688580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 4)

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    void* ebx_1 = *i
    int32_t* ecx = *(ebx_1 + 0x10)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
        *(ebx_1 + 0x10) = 0
    
    int32_t* ecx_1 = *(ebx_1 + 0xc)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
        *(ebx_1 + 0xc) = 0

int32_t result
result.b = 1
return result
