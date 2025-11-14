// 函数: sub_5d6df0
// 地址: 0x5d6df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg3 + 0x24)
uint32_t ecx_1 = *(arg3 + 0xc) u>> 2
int32_t result

if (edx s>= 0)
    void* esi_1 = *(arg1 + 4)
    
    if (edx u< (*(esi_1 + 0xf4) - *(esi_1 + 0xf0)) s>> 4)
        int32_t edx_1 = edx << 4
        
        if (edx_1 != neg.d(*(esi_1 + 0xf0)))
            result = *(edx_1 + *(esi_1 + 0xf0) + 4)
            int32_t result_1 = result
            
            if (result != 0)
                int32_t esi_2 = 0
                
                if (ecx_1 s> 0)
                    int32_t edi_1 = 0
                    
                    do
                        int32_t ecx_2
                        
                        if (*(arg3 + 0xc) != 0)
                            ecx_2 = *(arg3 + 8)
                        else
                            ecx_2 = 0
                        
                        if (sub_5d6ea0(arg1, arg2, esi_2, *(ecx_2 + (esi_2 << 2)), 
                                *(result + 0x20) + edi_1).b == 0)
                            goto label_5d6e92
                        
                        result = result_1
                        esi_2 += 1
                        edi_1 += 0x28
                    while (esi_2 s< ecx_1)
                
                result.b = 1
                return result

label_5d6e92:
result.b = 0
return result
