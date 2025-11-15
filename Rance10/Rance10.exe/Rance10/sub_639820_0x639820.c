// 函数: sub_639820
// 地址: 0x639820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
int32_t result

for (int32_t i = 0; i u< 0x100; i += 1)
    void* ecx = *(arg1 + 0xc)
    
    if (arg3.w == 0xffff)
        uint32_t edx_1 = zx.d(i.w)
        
        if (edx_1 != 0x5f)
            result = (*(**(ecx + 4) + 0x10))(0x107, edx_1)
        
        if (edx_1 == 0x5f || result.b != 0)
            result.b = 1
    else
        result = (*(**(ecx + 4) + 0x10))(arg3, i)
    
    if (result.b != arg4)
        if (*(edi + 0x18) == 0)
            void* eax_4 = sub_6e810c(0x20)
            arg2 = eax_4
            __builtin_memset(eax_4, 0, 0x20)
            *(edi + 0x18) = eax_4
        
        result = i & 7
        char* edx_4 = (i u>> 3) + *(edi + 0x18)
        *edx_4 |= (1 << (result u% 0x20)).b

return result
