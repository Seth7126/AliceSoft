// 函数: sub_5d48a0
// 地址: 0x5d48a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t esi = 0
void* ecx = arg2
uint32_t result = *(ecx + 0xc) u>> 2
uint32_t result_1 = result

if (result s> 0)
    while (true)
        if (esi u< *(arg1 + 0xc) u>> 2)
            int32_t eax_2
            
            if (*(arg1 + 0xc) != 0)
                eax_2 = *(arg1 + 8)
            else
                eax_2 = 0
            
            int32_t ebx_1 = *(eax_2 + (esi << 2))
            
            if (esi u< *(ecx + 0xc) u>> 2)
                int32_t eax_4
                
                if (*(ecx + 0xc) != 0)
                    eax_4 = *(ecx + 8)
                else
                    eax_4 = 0
                
                void* ecx_1 = *(arg1 + 0x1c)
                int32_t ebp_1 = *(eax_4 + (esi << 2))
                void* const edx_1
                
                if (ebx_1 u< (*(ecx_1 + 0xc) - *(ecx_1 + 8)) s>> 2)
                    edx_1 = *(*(ecx_1 + 8) + (ebx_1 << 2))
                else
                    edx_1 = nullptr
                
                if (ebp_1 u< (*(ecx_1 + 0xc) - *(ecx_1 + 8)) s>> 2)
                    result = *(*(ecx_1 + 8) + (ebp_1 << 2))
                else
                    result = 0
                
                if (edx_1 != 0 && result != 0 && sub_5d3d90(edx_1, result).b != 0
                        && sub_5d34a0(arg1, esi, ebx_1).b != 0)
                    esi += 1
                    
                    if (esi s>= result_1)
                        break
                    
                    ecx = arg2
                    continue
        
        result.b = 0
        return result

result.b = 1
return result
