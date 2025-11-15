// 函数: sub_616a80
// 地址: 0x616a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** ebx = sub_621850(&arg1[0x52], arg2)
struct _EXCEPTION_REGISTRATION_RECORD** eax

if (ebx s>= 0)
    if (*(arg2 + 0x54) == 0)
        goto label_616ac7
    
    eax = sub_622720(&arg1[0x52], ebx)
    
    if (eax != 0)
        eax[0xb] = arg4
    label_616ac7:
        eax = sub_6106a0(arg1, ebx)
        
        if (eax.b != 0)
            int32_t eax_2 = *(arg2 + 0x4c)
            
            if (eax_2 s> 0)
                eax = sub_601050(arg1[0x489], arg3, eax_2)
            
            if (eax_2 s<= 0 || eax.b != 0)
                int32_t edx = *arg2
                int32_t ecx_6 = arg1[0x74] - arg1[0x75]
                *arg1[0x386] = 1
                arg1[0x386] += 4
                *arg1[0x182] = ecx_6
                arg1[0x182] += 4
                arg1[0x74] = arg1[0x75] + edx
                int32_t eax_6
                eax_6.b = 1
                return eax_6

eax.b = 0
return eax
