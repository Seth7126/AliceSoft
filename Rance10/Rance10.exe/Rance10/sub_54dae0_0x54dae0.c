// 函数: sub_54dae0
// 地址: 0x54dae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax

if (arg2 s<= 0)
    eax.b = 0
    return eax

if (arg3 s<= 0)
    eax.b = 0
    return eax

int32_t* ecx = arg1[2]

if (ecx != 0)
    eax = (*(*ecx + 8))(arg2, arg3, 0x20)
    
    if (eax != 0)
        int32_t* ecx_1 = arg1[4]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 0x64))(eax, 0, 0, arg2, arg3, arg4, arg5, arg6, arg7)
        
        if (*arg1 == 0)
            sub_54d770(arg1)
        
        sub_450940(*arg1, eax)
        *(arg1 + 0x16) = 0
        (*(*eax + 4))()
        int32_t eax_4
        eax_4.b = 1
        return eax_4

eax.b = 0
return eax
