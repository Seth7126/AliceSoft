// 函数: sub_688050
// 地址: 0x688050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 4)

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    void* ebx_1 = *i
    int32_t* ecx = *(ebx_1 + 0xc)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
        *(ebx_1 + 0xc) = 0

int32_t result
result.b = 1
return result
