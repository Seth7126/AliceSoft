// 函数: sub_54f960
// 地址: 0x54f960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax

if (arg2 s<= 0 || arg3 s<= 0)
    eax.b = 0
    return eax

int32_t* edi = arg1[2]

if (edi != 0)
    eax = (*(*edi + 0xc))(arg2, arg3, 0x20)
    
    if (eax != 0)
        if (*arg1 == 0)
            sub_54d770(arg1)
        
        sub_450940(*arg1, eax)
        *(arg1 + 0x16) = 0
        (*(*eax + 4))()
        int32_t eax_3
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
