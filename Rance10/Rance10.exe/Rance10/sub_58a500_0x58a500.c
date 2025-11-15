// 函数: sub_58a500
// 地址: 0x58a500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1 + (arg2 << 2)
struct sealengine::CInstanceView::VTable** result

if (*arg3 != 0)
    if (*esi == 0)
        void arg_10
        struct sealengine::CInstanceView::VTable*** eax_3 =
            sub_58a6e0(&arg1[6], &arg1[5], &arg2, &arg1[6], &arg_10, arg1[3], &arg1[4])
        
        if (esi != eax_3)
            struct sealengine::CInstanceView::VTable** edx_1 = *eax_3
            *eax_3 = nullptr
            int32_t* ecx_2 = *esi
            *esi = edx_1
            
            if (ecx_2 != 0)
                (**ecx_2)(1)
        
        struct sealengine::CInstanceView::VTable** ecx_3 = arg2
        
        if (ecx_3 != 0)
            (*ecx_3)->vFunc_0(1)
    
    result = sub_587a80(*esi, arg3, arg4, arg5)
    
    if (result.b == 0)
        return result
else
    int32_t* ecx = *esi
    *esi = 0
    
    if (ecx != 0)
        (**ecx)(1)

result.b = 1
return result
