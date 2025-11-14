// 函数: sub_632b10
// 地址: 0x632b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 0
int32_t edi_1

if (*(arg3 + 0x250) == 0)
    edi_1 = arg5
    
    if (edi_1 == 0)
        edi_1 = *(arg3 + 0x254)
    
    if (edi_1 == 3 || (edi_1 == 2 && (*(arg3 + 0x11c) & 0x20000000) != 0))
        if (sub_6329f0(arg3, arg4) != 0)
            goto label_632bc9
    else
        sub_62fcc0(arg3, arg4)
    label_632bc9:
        
        if (edi_1 == 3)
        label_632bdf:
            int32_t ecx_2 = *(arg3 + 0x298)
            
            if (ecx_2 == 0)
                goto label_632bfb
            
            if (ecx_2 != 1)
                if (ecx_2 == 2)
                    *(arg3 + 0x298) = 1
                    sub_62a7c0(arg3, "no space in chunk cache")
                else
                    *(arg3 + 0x298) = ecx_2 - 1
                label_632bfb:
                    int32_t var_14_2 = ecx_2
                    sub_634d00(arg3 + 0x2a0, arg2, arg3, arg3 + 0x2a0)
                    ebx = 1
        else if (edi_1 == 2)
        label_632bd3:
            
            if ((*(arg3 + 0x11c) & 0x20000000) != 0)
                goto label_632bdf
else if (sub_6329f0(arg3, arg4) != 0)
    int32_t eax_3 = (*(arg3 + 0x250))(arg3, arg3 + 0x2a0)
    
    if (eax_3 s< 0)
        sub_62a740(arg3, "error in user chunk")
        noreturn
    
    if (eax_3 == 0)
        edi_1 = arg5
        
        if (edi_1 s>= 2)
            goto label_632bc9
        
        if (*(arg3 + 0x254) s< 2)
            sub_62a770(arg3, "Saving unknown chunk:")
            
            if ((*(arg3 + 0x78) & 0x200000) == 0)
                sub_62a520(arg3, 
                    "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks")
                noreturn
            
            sub_62a550(arg3, 
                "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks")
        
        goto label_632bd3
    
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

sub_62a740(arg3, "unhandled critical chunk")
noreturn
