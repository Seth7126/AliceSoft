// 函数: sub_5464b0
// 地址: 0x5464b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    int32_t* ecx = *(arg1 + 0x20)
    
    if (ecx != 0)
        (*(*ecx + 0x10))(1)
        *(arg1 + 0x20) = 0
else if (*(arg1 + 0x18) != 0 && *(arg1 + 0x1c) == 0)
    struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** eax_3
    
    if (*(arg1 + 0x20) == 0)
        struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** eax_2 =
            sub_69adc6(0x5c)
        
        if (eax_2 == 0)
            eax_3 = nullptr
        else
            eax_3 = sub_5567c0(eax_2)
        
        *(arg1 + 0x20) = eax_3
    
    if (*(arg1 + 0x20) != 0 || eax_3 != 0)
        void* ecx_2 = *(arg1 + 0x20)
        
        if (*(ecx_2 + 0x18) == 0)
            eax_3 = sub_556900(ecx_2, arg3)
        
        if (*(ecx_2 + 0x18) != 0 || eax_3.b != 0)
            return sub_59aa90(*(arg1 + 0x20) + 4, *(arg1 + 0x18) + 0x144) != 0
    
    eax_3.b = 0
    return eax_3

int32_t eax
eax.b = 1
return eax
