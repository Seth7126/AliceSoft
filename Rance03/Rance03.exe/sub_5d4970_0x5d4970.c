// 函数: sub_5d4970
// 地址: 0x5d4970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
uint32_t ebp_1 = *(arg2 + 0xc) u>> 2
uint32_t result

if (ebp_1 s> 0)
    while (true)
        if (esi u< *(arg2 + 0xc) u>> 2)
            int32_t eax_1
            
            if (*(arg2 + 0xc) != 0)
                eax_1 = *(arg2 + 8)
            else
                eax_1 = 0
            
            if (esi u< *(arg1 + 0xc) u>> 2)
                int32_t eax_3
                
                if (*(arg1 + 0xc) != 0)
                    eax_3 = *(arg1 + 8)
                else
                    eax_3 = 0
                
                if (sub_5d7290(*(arg1 + 0x1c), *(eax_3 + (esi << 2)), *(eax_1 + (esi << 2))).b != 0)
                    esi += 1
                    
                    if (esi s>= ebp_1)
                        break
                    
                    continue
        
        result.b = 0
        return result

result.b = 1
return result
