// 函数: sub_425790
// 地址: 0x425790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 4)
int32_t result

if (ecx != 0)
    result.b = (*(*ecx + 8))() == 1
    
    if (result.b != 0)
        void* edi = *(arg1 + 4)
        
        if (arg3 s>= 0)
            int32_t eax_1
            int32_t edx_1
            edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(edi + 0x2c) - *(edi + 0x28))
            int32_t edx_2 = edx_1 s>> 2
            
            if ((edx_2 u>> 0x1f) + edx_2 s> arg3)
                return sub_42d680(*(edi + 0x28) + arg3 * 0x18, arg2, arg4, arg5)
        
        result.b = 0
        return result

result.b = 0
return result
