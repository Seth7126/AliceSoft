// 函数: sub_616b40
// 地址: 0x616b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
struct _EXCEPTION_REGISTRATION_RECORD** ebx = sub_621850(&arg1[0x52], arg2)
struct _EXCEPTION_REGISTRATION_RECORD** eax

if (ebx s>= 0)
    eax = sub_622720(&arg1[0x52], ebx)
    
    if (eax != 0)
        eax[0xa] = arg3
        
        if (*(arg2 + 0x54) == 0)
            goto label_616b9e
        
        eax = sub_622720(&arg1[0x52], ebx)
        
        if (eax != 0)
            eax[0xb] = arg5
        label_616b9e:
            
            if (sub_6106a0(arg1, ebx).b != 0)
                eax = sub_610850(arg1, arg3)
                
                if (eax.b != 0)
                    int32_t eax_3 = *(arg2 + 0x4c)
                    
                    if (eax_3 s> 0)
                        eax = sub_601050(arg1[0x489], arg4, eax_3)
                    
                    if (eax_3 s<= 0 || eax.b != 0)
                        sub_611e10(arg1, 2, arg1[0x74] - arg1[0x75], *arg2)
                        int32_t eax_6
                        eax_6.b = 1
                        return eax_6

eax.b = 0
return eax
