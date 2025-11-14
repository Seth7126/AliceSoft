// 函数: sub_570600
// 地址: 0x570600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
sub_5706e0(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s>= 0)
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x1a6d01a7, *(arg2 + 0x18) - *(arg2 + 0x14))
    int32_t edx_2 = edx_1 s>> 6
    
    if (arg3 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t eax_3 = arg3 * 0x26c
        result = eax_3 + *(arg2 + 0x14)
        
        if (eax_3 != neg.d(*(arg2 + 0x14)))
            *(arg1 + 4) = arg3
            sub_568b50(arg1 + 8, result)
            sub_570740(arg1, arg4, arg5, arg6)
            
            if (*(arg1 + 0xbc) == 4)
                *(arg1 + 0x30c) = sub_5616b0(arg2, arg1 + 0xc0)
            
            switch (*(arg1 + 0xc))
                case nullptr
                    *(arg1 + 0x370) = *(arg1 + 0x380)
                    
                    if (sub_556dd0(arg1 + 0x31c, arg2, arg3).b != 0)
                        result.b = 1
                        return result
                case 1
                    if (sub_5716f0(arg1, arg3, arg2, arg7).b != 0)
                        result.b = 1
                        return result
                case 2, 3
                    result.b = 1
                    return result

result.b = 0
return result
