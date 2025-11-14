// 函数: sub_6301b0
// 地址: 0x6301b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = 0xffffffff
int32_t* var_8 = arg5
void* eax = *(arg3 + 0x29c)

if (eax != 0 && eax u< 0xffffffff)
    ecx = eax

if (ecx u< arg4 + 1)
    if (*(arg3 + 0x9c) == 0)
        *(arg3 + 0x9c) = "insufficient memory"
    
    return 0xfffffffc

void* ecx_1 = ecx + 0xffffffff - arg4

if (ecx_1 u< *arg5)
    *arg5 = ecx_1

void* edi = sub_62ff50(arg3, *(arg3 + 0x11c))

if (edi != 0)
    if (edi == 1)
        return 0xfffffff9
    
    return edi

void* eax_5 = arg2 - arg4
void* edx_2 = *(arg3 + 0x2b8) + arg4
void* var_10 = eax_5
int32_t edi_2

if (*(arg3 + 0x80) != *(arg3 + 0x11c))
    *(arg3 + 0x9c) = "zstream unclaimed"
    edi_2 = 0xfffffffe
else
    int32_t edi_1 = sub_630090(&var_10, edx_2, arg3, &var_10, edi, arg5)
    
    if (edi_1 != 1)
        *(arg3 + 0x80) = 0
        
        if (edi_1 == 0)
            return 0xfffffff9
        
        return edi_1
    
    if (sub_623910(arg3 + 0x84) != 0)
        sub_627c20(arg3, 1)
        *(arg3 + 0x80) = 0
        return 0xfffffff9
    
    int32_t eax_10 = *arg5
    
    if (eax_10 + 1 == neg.d(arg4))
    label_630368:
        edi_2 = 0xfffffffc
        
        if (*(arg3 + 0x9c) == 0)
            *(arg3 + 0x9c) = "insufficient memory"
            *(arg3 + 0x80) = 0
            return 0xfffffffc
    else
        int32_t* ebp_1 = sub_62ab50(arg3, eax_10 + 1 + arg4)
        
        if (ebp_1 == 0)
            goto label_630368
        
        if (*(arg3 + 0x80) != *(arg3 + 0x11c))
            *(arg3 + 0x9c) = "zstream unclaimed"
            edi_2 = 0xfffffffe
        else
            edi_2 = sub_630090(&var_10, *(arg3 + 0x2b8) + arg4, arg3, &var_10, arg4 + ebp_1, var_8)
            
            if (edi_2 == 1)
                void* eax_18 = *var_8
                
                if (eax_10 != eax_18)
                    edi_2 = 0xfffffff9
                else
                    *(eax_18 + arg4 + ebp_1) = 0
                    
                    if (arg4 != 0)
                        sub_69d850(ebp_1, *(arg3 + 0x2b8), arg4)
                    
                    int32_t* eax_19 = *(arg3 + 0x2b8)
                    *(arg3 + 0x2b8) = ebp_1
                    *(arg3 + 0x2bc) = eax_10 + 1 + arg4
                    ebp_1 = eax_19
            else if (edi_2 == 0)
                edi_2 = 0xfffffff9
        
        sub_62ace0(arg3, ebp_1)
        
        if (edi_2 == 1 && eax_5 != var_10)
            sub_62a7c0(arg3, "extra compressed data")
            *(arg3 + 0x80) = 0
            return edi_2

*(arg3 + 0x80) = 0
return edi_2
