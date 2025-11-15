// 函数: sub_587c40
// 地址: 0x587c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable*** result

switch (*(arg1 + 4) - 1)
    case nullptr, 9
        int32_t* ecx = *(arg1 + 0xc)
        void* const edx_1
        
        if (ecx != 0)
            void* eax_2
            eax_2, ecx = (*(*ecx + 0x18))()
            edx_1 = eax_2
        else
            edx_1 = nullptr
        
        ecx.b = *(arg1 + 0x10)
        ecx.b = ecx.b != 0
        int32_t eax_3
        eax_3.b = *(arg2 + 8) != 0
        result = sub_5889f0(arg1, zx.d(eax_3.b), ecx.b, edx_1, arg3)
        
        if (result.b == 0)
            return result
    case 1, 0xa
        int32_t* ecx_2 = *(arg1 + 0x1c)
        void* const edx_2
        
        if (ecx_2 != 0)
            void* eax_6
            eax_6, ecx_2 = (*(*ecx_2 + 0x18))()
            edx_2 = eax_6
        else
            edx_2 = nullptr
        
        ecx_2.b = *(arg1 + 0x20)
        ecx_2.b = ecx_2.b != 0
        int32_t eax_7
        eax_7.b = *(arg2 + 8) != 0
        result = sub_5889f0(arg1, zx.d(eax_7.b), ecx_2.b, edx_2, arg3)
        
        if (result.b == 0)
            return result
    case 7
        int32_t* ecx_4 = *(arg1 + 0x4c)
        void* edx_3
        
        if (ecx_4 != 0)
            void* eax_10
            eax_10, ecx_4 = (*(*ecx_4 + 0x18))()
            edx_3 = eax_10
        else
            edx_3 = nullptr
        
        ecx_4.b = *(arg1 + 0x50)
        ecx_4.b = ecx_4.b != 0
        int32_t eax_11
        eax_11.b = *(arg2 + 8) != 0
        result = sub_5889f0(arg1, zx.d(eax_11.b), ecx_4.b, edx_3, arg3)
        
        if (result.b == 0)
            return result

result.b = 1
return result
