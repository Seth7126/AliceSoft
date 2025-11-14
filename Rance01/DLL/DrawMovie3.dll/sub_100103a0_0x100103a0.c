// 函数: sub_100103a0
// 地址: 0x100103a0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 == 0)
    return 0x80004003

int16_t* edx = *(arg1 + 0x30)

if (edx == 0)
    *arg2 = 0
else
    int32_t esi_1 = 0x80
    int16_t* eax_2 = arg2
    
    while (true)
        if (esi_1 != 0x80000082)
            int16_t ecx_2 = *edx
            
            if (ecx_2 != 0)
                *eax_2 = ecx_2
                eax_2 = &eax_2[1]
                edx = &edx[1]
                int32_t temp1_1 = esi_1
                esi_1 -= 1
                
                if (temp1_1 != 1)
                    continue
                
                *(eax_2 - 2) = 0
                break
        
        if (esi_1 == 0)
            eax_2 -= 2
        
        *eax_2 = 0
        break

*(arg2 + 0x100) = *(arg1 + 0x34)

if (*(arg1 + 0x34) != 0)
    int32_t* eax_4 = *(arg1 + 0x34)
    (*(*eax_4 + 4))(eax_4)

return 0
