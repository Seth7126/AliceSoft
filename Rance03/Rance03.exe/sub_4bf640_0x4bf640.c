// 函数: sub_4bf640
// 地址: 0x4bf640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t i = (edi - ebx) s/ 0x5c

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_21 = (edi - ebx) s/ 0x5c
            
            if (eax_21 s> 1)
                eax_21 = sub_4c0f80(eax_21, edi, ebx, arg5)
            
            return sub_4c1060(eax_21, edi, ebx, arg5)
        
        int32_t* var_10
        sub_4c0120(i, ebx, &var_10, edi, arg5)
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = sx.q(esi_2)
        int32_t ecx_2 = (eax_4 - edx_4) s>> 1
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = sx.q(ecx_2)
        esi_2 = ecx_2 + ((eax_7 - edx_5) s>> 1)
        int32_t* var_c
        
        if ((var_10 - ebx) s/ 0x5c s>= (edi - var_c) s/ 0x5c)
            sub_4bf640(esi_2, arg5)
            edi = var_10
        else
            sub_4bf640(esi_2, arg5)
            ebx = var_c
        
        arg3 = edi - ebx
        i = arg3 s/ 0x5c
    while (i s> 0x20)

if (i s<= 1)
    return i

void* var_24_3 = arg3
int32_t var_28_3 = arg5
return sub_4c11f0(ebx, edi)
