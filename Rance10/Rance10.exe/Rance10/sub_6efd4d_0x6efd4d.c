// 函数: sub_6efd4d
// 地址: 0x6efd4d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = arg2 s>> (*(arg1 + 0x2c)).b

if (edx_1 s>= *(arg1 + 0x3c))
    return 0

int32_t ecx_1 = *(arg1 + 0x38)
int32_t eax_1 = *(arg1 + 0x34)
int32_t* eax_2

if (edx_1 s< ecx_1)
    eax_2 = *(eax_1 + (edx_1 << 2))
else
    eax_2 = *(eax_1 + (ecx_1 << 2) - 4)
    
    if (edx_1 - ecx_1 s>= 0)
        int32_t i_1 = edx_1 - ecx_1 + 1
        int32_t i
        
        do
            eax_2 = eax_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return *(*eax_2 + (((*(arg1 + 0x28) - 1) & arg2) << 2))
