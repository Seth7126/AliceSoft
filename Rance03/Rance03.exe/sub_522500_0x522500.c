// 函数: sub_522500
// 地址: 0x522500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (arg2 != 0)
    void* ecx = *(arg1 + 0xdc)
    
    if (ecx != 0)
        void* edx_1 = *(arg2 + 0xdc)
        
        if (edx_1 != 0 && *(ecx + 8) == *(edx_1 + 8))
            result.b = *(ecx + 0xc)
            
            if (result.b == *(edx_1 + 0xc))
                result.b = *(arg1 + 0x60) == *(arg2 + 0x60)
                
                if (result.b != 0)
                    result.b = *(arg1 + 0xd4)
                    result.b = result.b == *(arg2 + 0xd4)
                    
                    if (result.b != 0)
                        result.b = *(arg1 + 0xcc) == *(arg2 + 0xcc)
                        
                        if (result.b != 0 && sub_5225f0(arg1, arg2).b != 0
                                && sub_522630(arg1, arg2).b != 0)
                            result.b = *(arg1 + 0x24) == *(arg2 + 0x24)
                            
                            if (result.b != 0 && sub_522670(arg1, arg2).b != 0)
                                result.b = *(arg1 + 0x20) == *(arg2 + 0x20)
                                
                                if (result.b != 0)
                                    result.b = *(arg1 + 0xd0) == *(arg2 + 0xd0)
                                    
                                    if (result.b != 0)
                                        result.b = *(arg1 + 0x5d)
                                        result.b = result.b == *(arg2 + 0x5d)
                                        result.b = result.b != 0
                                        return result

result.b = 0
return result
