// 函数: sub_68aaa0
// 地址: 0x68aaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (arg2 u<= 7)
    if (arg4 == 0)
        if (arg3 s>= 0 && arg3 s< (*(arg1 + 8) - *(arg1 + 4)) s>> 3)
            eax = *(arg1 + 4)
        label_68aacb:
            int32_t ecx_1 = *(eax + (arg3 << 3) + 4)
            arg4.d = ecx_1
            
            if (ecx_1 != 0)
                int32_t edi = arg2 << 2
                
                if (*(edi + *(arg1 + 0x1c)) != ecx_1)
                    (*(*arg5 + 0x28))(arg5, arg2, 1, &arg4)
                    *(edi + *(arg1 + 0x1c)) = arg4.d
                
                int32_t eax_5
                eax_5.b = 1
                return eax_5
    else if (arg3 s>= 0 && arg3 s< (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 3)
        eax = *(arg1 + 0x10)
        goto label_68aacb

eax.b = 0
return eax
