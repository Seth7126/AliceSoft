// 函数: sub_5aec60
// 地址: 0x5aec60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
int32_t* ebx = arg3
int32_t i = (edi - ebx) s/ 0x1c

if (i s> 0x20)
    int32_t ebp_1 = arg4
    
    do
        if (ebp_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_21 = (edi - ebx) s/ 0x1c
            
            if (eax_21 s> 1)
                eax_21 = sub_5b0210(eax_21, edi, ebx, arg5)
            
            return sub_5b02c0(eax_21, edi, ebx, arg5)
        
        int32_t* var_c
        sub_5af560(i, ebx, &var_c, edi, arg5)
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = sx.q(ebp_1)
        int32_t ebp_3 = (eax_4 - edx_4) s>> 1
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = sx.q(ebp_3)
        ebp_1 = ebp_3 + ((eax_7 - edx_5) s>> 1)
        int32_t* var_8
        
        if ((var_c - ebx) s/ 0x1c s>= (edi - var_8) s/ 0x1c)
            sub_5aec60(ebp_1, arg5)
            edi = var_c
        else
            sub_5aec60(ebp_1, arg5)
            ebx = var_8
        
        arg3 = edi - ebx
        i = arg3 s/ 0x1c
    while (i s> 0x20)

if (i s<= 1)
    return i

void* var_20_3 = arg3
int32_t var_24_3 = arg5
return sub_5b0320(ebx, edi)
