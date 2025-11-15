// 函数: sub_6b04e0
// 地址: 0x6b04e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t edi_1

if (*(arg3 + 0x250) == 0)
    edi_1 = arg5
    
    if (edi_1 == 0)
        edi_1 = *(arg3 + 0x254)
    
    if (edi_1 == 3 || (edi_1 == 2 && (*(arg3 + 0x11c) & 0x20000000) != 0))
        if (sub_6b0390(arg3, arg4) != 0)
            goto label_6b058c
    else
        sub_6ace40(arg3, arg4)
    label_6b058c:
        
        if (edi_1 == 3)
        label_6b05a2:
            int32_t ecx_2 = *(arg3 + 0x298)
            
            if (ecx_2 == 0)
                goto label_6b05c2
            
            if (ecx_2 != 1)
                if (ecx_2 == 2)
                    *(arg3 + 0x298) = 1
                    sub_6a77d0(arg3, "no space in chunk cache")
                else
                    *(arg3 + 0x298) = ecx_2 - 1
                label_6b05c2:
                    int32_t var_14_2 = ecx_2
                    sub_6b26a0(arg3 + 0x2a0, arg2, arg3, arg3 + 0x2a0)
                    ebx = 1
        else if (edi_1 == 2)
        label_6b0596:
            
            if ((*(arg3 + 0x11c) & 0x20000000) != 0)
                goto label_6b05a2
else if (sub_6b0390(arg3, arg4) != 0)
    int32_t eax_3 = (*(arg3 + 0x250))(arg3, arg3 + 0x2a0)
    
    if (eax_3 s< 0)
        sub_6a7750(arg3, "error in user chunk")
        noreturn
    
    if (eax_3 == 0)
        edi_1 = arg5
        
        if (edi_1 s>= 2)
            goto label_6b058c
        
        if (*(arg3 + 0x254) s< 2)
            sub_6a7780(arg3, "Saving unknown chunk:")
            sub_6a7630(arg3)
        
        goto label_6b0596
    
    ebx = 1
int32_t result = *(arg3 + 0x2a8)

if (result != 0)
    int32_t ecx_4 = *(arg3 + 0x278)
    
    if (ecx_4 == 0)
        result = _free(result)
    else
        result = ecx_4(arg3, result)

*(arg3 + 0x2a8) = 0

if (ebx != 0 || (*(arg3 + 0x11c) & 0x20000000) != 0)
    return result

sub_6a7750(arg3, "unhandled critical chunk")
noreturn
