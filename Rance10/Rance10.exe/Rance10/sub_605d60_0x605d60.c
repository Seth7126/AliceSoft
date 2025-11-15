// 函数: sub_605d60
// 地址: 0x605d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t ebx = *arg4
int32_t ecx_2 = arg1 - 1
int32_t eax_2 = (*(arg2 + 0x14) - *(arg2 + 0x10)) s>> 4
int32_t var_4 = ecx
arg1 = ecx_2

if (ebx s>= eax_2)
    eax_2.b = 0
    return eax_2

uint32_t eax_7

if (ecx_2 != 0)
    int32_t i = 0
    
    if ((*(*(arg3 + 0x20) + 8))() s> 0)
        while (i u< *(arg3 + 0x14) u>> 2)
            eax_7 = sub_622840(arg5, *(*(arg3 + 0x10) + (i << 2)))
            
            if (eax_7 == 0)
                break
            
            if (sub_605d60(arg1, arg2, eax_7, arg4, arg5).b == 0)
                break
            
            i += 1
            
            if (i s>= (*(*(arg3 + 0x20) + 8))())
                int32_t eax_20
                eax_20.b = 1
                return eax_20
        
        eax_7.b = 0
        return eax_7
else
    *arg4 = ebx + 1
    int32_t i_1 = 0
    void* ebx_2 = (ebx << 4) + *(arg2 + 0x10)
    
    if (((*(ebx_2 + 8) - *(ebx_2 + 4)) & 0xfffffffc) s> 0)
        while (i_1 u< *(arg3 + 0x14) u>> 2)
            arg1 = *(*(arg3 + 0x10) + (i_1 << 2))
            
            if (sub_605890((**(arg3 + 0x20))(), &arg1, *(*(ebx_2 + 4) + (i_1 << 2)), arg5).b == 0)
                break
            
            if (i_1 u>= *(arg3 + 0x14) u>> 2)
                break
            
            *(*(arg3 + 0x10) + (i_1 << 2)) = arg1
            i_1 += 1
            
            if (i_1 s>= (*(ebx_2 + 8) - *(ebx_2 + 4)) s>> 2)
                goto label_605e27
        
        eax_7.b = 0
        return eax_7
label_605e27:
int32_t eax_5
eax_5.b = 1
return eax_5
