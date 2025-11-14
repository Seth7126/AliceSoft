// 函数: sub_453080
// 地址: 0x453080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x48) - *(arg1 + 0x44))
    int32_t edx_2 = edx_1 s>> 2
    
    if ((edx_2 u>> 0x1f) + edx_2 s> arg2)
        void* edx_3 = *(arg1 + 0x44) + arg2 * 0x18
        eax = arg3
        
        if (eax s>= 0 && eax s< (*(edx_3 + 8) - *(edx_3 + 4)) s>> 2)
            int32_t* ecx_7 = *(edx_3 + 4) + (eax << 2)
            int32_t temp1_1
            
            do
                int32_t edx_4 = *ecx_7
                
                if (edx_4 != 0xffffffff)
                    *arg4 = edx_4
                    int32_t* eax_5
                    eax_5.b = 1
                    return eax_5
                
                ecx_7 -= 4
                temp1_1 = eax
                eax -= 1
            while (temp1_1 - 1 s>= 0)

eax.b = 0
return eax
