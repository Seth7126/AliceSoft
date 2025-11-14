// 函数: sub_5d4760
// 地址: 0x5d4760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg2 + 0x38)
uint32_t result

if (ecx == *(arg1 + 0x38))
    uint32_t edx_2 = *(arg2 + 0xc) u>> 2
    
    if (edx_2 == *(arg1 + 0xc) u>> 2)
        if (ecx != 0)
            int32_t esi = 0
            
            if (edx_2 s> 0)
                while (true)
                    if (esi u< *(arg1 + 0xc) u>> 2)
                        int32_t eax_5
                        
                        if (*(arg1 + 0xc) != 0)
                            eax_5 = *(arg1 + 8)
                        else
                            eax_5 = 0
                        
                        int32_t edx_3 = *(eax_5 + (esi << 2))
                        
                        if (esi u< *(arg2 + 0xc) u>> 2)
                            int32_t eax_7
                            
                            if (*(arg2 + 0xc) != 0)
                                eax_7 = *(arg2 + 8)
                            else
                                eax_7 = 0
                            
                            void* ecx_4 = *(arg1 + 0x1c)
                            int32_t ebp_1 = *(eax_7 + (esi << 2))
                            int32_t edx_4
                            
                            if (edx_3 u< (*(ecx_4 + 0xc) - *(ecx_4 + 8)) s>> 2)
                                edx_4 = *(*(ecx_4 + 8) + (edx_3 << 2))
                            else
                                edx_4 = 0
                            
                            if (ebp_1 u< (*(ecx_4 + 0xc) - *(ecx_4 + 8)) s>> 2)
                                result = *(*(ecx_4 + 8) + (ebp_1 << 2))
                            else
                                result = 0
                            
                            if (edx_4 != 0 && result != 0 && sub_5d4760(result).b != 0)
                                esi += 1
                                
                                if (esi s>= edx_2)
                                    break
                                
                                continue
                    
                    result.b = 0
                    return result
            
            result.b = 1
            return result
        
        switch (*(arg2 + 0x3c) - 0x10)
            case 0, 8
                if (sub_5d48a0(arg1, arg2).b != 0)
                    result.b = 1
                    return result
            case 1, 9
                result = sub_5d4970(arg1, arg2)
                
                if (result.b == 0)
                    return result
                
                result.b = 1
                return result
            default
                result = sub_5d49e0(arg1, arg2)
                
                if (result.b == 0)
                    return result
                
                result.b = 1
                return result

result.b = 0
return result
