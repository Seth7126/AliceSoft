// 函数: sub_5291f0
// 地址: 0x5291f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t i = 0

if (((*(arg1 + 8) - *(arg1 + 4)) & 0xfffffffc) s> 0)
    int32_t ebp_1 = 0
    var_4 = nullptr
    
    do
        if (i s>= 0 && i s< (*(arg1 + 0x2c) - *(arg1 + 0x28)) s>> 2
                && *(*(arg1 + 0x28) + (i << 2)) != 0
                && i s< (*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x1c
                && *(*(arg1 + 0x40) + ebp_1 + 0x18) != 0)
            (*(*arg2 + 0xc4))(0)
            (*(*arg2 + 0xc8))(0)
            float xmm0_1 = *(*(arg1 + 0x40) + ebp_1 + 0x14)
            xmm0_1 - 1f
            int32_t eax_12
            eax_12:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                | (xmm0_1 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            char eax_17
            int32_t* ecx_4
            
            if (not(p_2))
                ecx_4 = *(*(*(arg1 + 4) + (i << 2)) + 0x10)
                
                if (ecx_4 != 0)
                    eax_17 = (*(*ecx_4 + 0x28))()
            
            if (p_2 || (ecx_4 != 0 && eax_17 != 0))
                (*(*arg2 + 0xbc))(1)
                int32_t* ecx_7 = *(*(*(arg1 + 4) + (i << 2)) + 0x10)
                
                if (ecx_7 != 0)
                    (*(*ecx_7 + 0x28))()
            else
                (*(*arg2 + 0xbc))(0)
            
            if ((*(**(*(arg1 + 0x28) + (i << 2)) + 0x2c))(0, 1, 0, 1) == 0)
                return false
            
            void* ecx_10 = *(arg1 + 0x34) + var_4
            
            if (*(ecx_10 + 4) == 0)
                return false
            
            if (sub_59bb80(ecx_10) == 0)
                return false
        
        i += 1
        ebp_1 += 0x1c
        var_4 += 0x2c
    while (i s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)

int32_t result
result.b = 1
return result
