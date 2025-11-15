// 函数: sub_5889f0
// 地址: 0x5889f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (arg2.b == 0)
    int32_t* edx_1 = *(arg1 + 0x24)
    *(arg1 + 0x24) = 0
    
    if (edx_1 != 0)
        (*(*edx_1 + 0x1c))(1)
else if (arg4 != 0 && arg3 == 0)
    struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** esi =
        *(arg1 + 0x24)
    struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable*** eax_2
    
    if (esi == 0)
        eax_2 = sub_589bb0(&arg2)
        
        if (arg1 + 0x24 != eax_2)
            struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** 
                edx_2 = *eax_2
            *eax_2 = esi
            int32_t* ecx_3 = *(arg1 + 0x24)
            *(arg1 + 0x24) = edx_2
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 0x1c))(1)
        
        struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** ecx_4 =
            arg2
        
        if (ecx_4 != 0)
            (*ecx_4)->vFunc_7(1)
        
        esi = *(arg1 + 0x24)
        
        if (esi == 0)
            eax_2.b = 0
            return eax_2
    
    if (esi[8].b != 0)
        return sub_5dbc60(*(arg1 + 0x24) + 4, arg4) != 0
    
    sub_5db110(&esi[1])
    sub_5db110(&esi[1])
    esi[2] = 0x10
    esi[3] = 0x10
    
    if (sub_5db1b0(&esi[1], arg5).b == 0)
        eax_2.b = 0
        return eax_2
    
    if (sub_5db420(&esi[1]).b == 0)
        eax_2.b = 0
        return eax_2
    
    if (sub_5db750(&esi[1], arg5).b == 0)
        eax_2.b = 0
        return eax_2
    
    if (sub_5db840(&esi[1]).b == 0)
        eax_2.b = 0
        return eax_2
    
    esi[8].b = 1
    return sub_5dbc60(*(arg1 + 0x24) + 4, arg4) != 0

int32_t eax
eax.b = 1
return eax
