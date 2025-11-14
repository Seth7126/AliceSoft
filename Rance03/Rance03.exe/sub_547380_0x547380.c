// 函数: sub_547380
// 地址: 0x547380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
int32_t ebp_2 = (*(arg2 + 8) - *(arg2 + 4)) s>> 2
int32_t result

if (ebp_2 s> 0)
    while (true)
        void* const ecx
        
        if (esi s< 0 || esi s>= (*(arg2 + 8) - *(arg2 + 4)) s>> 2)
            ecx = nullptr
        else
            ecx = *(*(arg2 + 4) + (esi << 2))
        
        if (esi s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
            result = *(arg1 + 4)
            
            if (ecx != 0)
                if (*(result + (esi << 2)) != 0
                        && sub_546cb0(*(result + (esi << 2)), ecx, arg3).b != 0)
                    goto label_5473f4
            else if (*(result + (esi << 2)) == ecx)
            label_5473f4:
                esi += 1
                
                if (esi s>= ebp_2)
                    break
                
                continue
        
        result.b = 0
        return result

result.b = 1
return result
