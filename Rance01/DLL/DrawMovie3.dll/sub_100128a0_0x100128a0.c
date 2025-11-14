// 函数: sub_100128a0
// 地址: 0x100128a0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (sub_10001000(arg2, 0x1001c318) == 0)
    int32_t result = sub_10001000(arg1, arg2)
    
    if (result == 0)
        return result

int32_t eax_1 = sub_10001000(&arg2[4], 0x1001c318)
int32_t eax_3

if (eax_1 == 0)
    eax_3 = sub_10001000(&arg1[4], &arg2[4])

if (eax_1 != 0 || eax_3 != 0)
    if (sub_10001000(&arg2[0xb], 0x1001c318) != 0)
        return 1
    
    int32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_10001000(&arg1[0xb], &arg2[0xb])
    
    if (eax_5 != 0)
        int32_t i = arg1[0x10]
        
        if (i == arg2[0x10])
            if (i == 0)
                return 1
            
            int32_t* ecx_1 = arg2[0x11]
            int32_t* esi_1 = arg1[0x11]
            
            while (i u>= 4)
                if (*esi_1 != *ecx_1)
                    return 0
                
                i -= 4
                ecx_1 = &ecx_1[1]
                esi_1 = &esi_1[1]
            
            if (i == 0)
                return 1
            
            edx_1.b = *ecx_1
            
            if (edx_1.b == *esi_1)
                if (i u<= 1)
                    return 1
                
                edx_1.b = *(ecx_1 + 1)
                
                if (edx_1.b == *(esi_1 + 1))
                    if (i u<= 2)
                        return 1
                    
                    i.b = *(ecx_1 + 2)
                    
                    if (i.b == *(esi_1 + 2))
                        return 1

return 0
