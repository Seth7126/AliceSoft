// 函数: sub_4addd0
// 地址: 0x4addd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = sub_4ab7c0(arg1 + 0xa0, arg2)
int32_t var_c_1 = eax
void* eax_1 = sub_4f15e0(*(arg1 + 0xb4))

if (eax_1 != 0)
    int32_t edx_1 = *(eax_1 + 8)
    
    if (eax s>= edx_1 && *(eax_1 + 4) + edx_1 s> eax)
        void* result = *(*(eax_1 + 0xc) + ((eax - edx_1) << 2))
        
        if (result != 0)
            int32_t* ecx_4 = *(result + 0x74)
            
            if (ecx_4 != 0 && (*(*ecx_4 + 8))(1) == 0xd)
                return result

return 0
