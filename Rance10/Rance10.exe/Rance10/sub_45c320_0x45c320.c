// 函数: sub_45c320
// 地址: 0x45c320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx
int32_t* edx

if (arg1 != 3)
    if (arg1 != 0)
    label_45c330:
        
        if (arg2 != 0x10)
        label_45c3a5:
            sub_45c210(arg2, edx, ecx, arg3, arg4, arg5, arg6)
            int32_t eax_4
            eax_4.b = 1
            return eax_4
        
        if (arg6 != 0)
            int32_t eax
            eax.b = 0
            return eax
        
        sub_45c170(arg2, edx, ecx, arg3, arg4, arg5)
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    
    if (arg2 != 8)
        if (arg2 != 0x10)
            goto label_45c3a5
        
        sub_45c100(arg2, edx, ecx, arg3, arg4, arg5)
        int32_t eax_2
        eax_2.b = 1
        return eax_2
else if (arg2 != 8)
    goto label_45c330

sub_45c090(arg2, edx, ecx, arg3, arg4, arg5)
int32_t eax_1
eax_1.b = 1
return eax_1
