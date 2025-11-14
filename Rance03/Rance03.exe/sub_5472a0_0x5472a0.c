// 函数: sub_5472a0
// 地址: 0x5472a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t esi = 0
int32_t ebp_2 = (*(arg3 + 8) - *(arg3 + 4)) s>> 2
int32_t result

if (ebp_2 s> 0)
    while (true)
        if (esi s>= 0 && esi s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
            void* ecx = *(*(arg1 + 4) + (esi << 2))
            
            if (ecx == 0)
            label_547315:
                esi += 1
                
                if (esi s>= ebp_2)
                    break
                
                continue
            else
                if (esi s>= (*(arg3 + 8) - *(arg3 + 4)) s>> 2)
                    result = 0
                else
                    result = *(*(arg3 + 4) + (esi << 2))
                
                if (*(ecx + 4) != 8 || *(ecx + 0x48) == 0 || *(ecx + 0x4c) != 0)
                    goto label_547315
                
                int32_t ecx_2
                int32_t edx_1
                result, ecx_2, edx_1 = sub_56adb0(*(ecx + 0x48), result, arg4)
                
                if (result.b != 0)
                    goto label_547315
                
                sub_59f4e0(result, edx_1, ecx_2, 0x6e3bf0, arg2)
        
        result.b = 0
        return result

result.b = 1
return result
