// 函数: sub_5471a0
// 地址: 0x5471a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
int32_t ebx_2 = (*(arg2 + 8) - *(arg2 + 4)) s>> 2
int32_t result

if (ebx_2 s> 0)
    while (true)
        int32_t edx_1
        
        if (esi s< 0 || esi s>= (*(arg2 + 8) - *(arg2 + 4)) s>> 2)
            edx_1 = 0
        else
            edx_1 = *(*(arg2 + 4) + (esi << 2))
        
        if (esi s>= 0 && esi s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
            enum MESSAGEBOX_RESULT ecx = *(*(arg1 + 4) + (esi << 2))
            
            if (ecx != 0)
                result =
                    sub_544ff0(ecx, edx_1, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)
            
            if (ecx == 0 || result.b != 0)
                esi += 1
                
                if (esi s>= ebx_2)
                    break
                
                continue
        
        result.b = 0
        return result

result.b = 1
return result
