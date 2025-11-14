// 函数: sub_4ac380
// 地址: 0x4ac380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd070
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t __saved_edi
    (**ecx)(__security_cookie ^ &__saved_edi)
    void* eax_4 = sub_4a4020(*(arg1 + 4))
    void* eax_5 = *(arg1 + 4)
    *(arg1 + 8) = *(eax_4 + 0x38)
    
    if (*(eax_5 + 0x84) != 0)
        *(eax_5 + 0x84) = 0
        *(eax_5 + 0x70) = 1
    
    if (*(eax_4 + 0x30) != 0)
        void* eax_6 = *(eax_4 + 0x34)
        *(eax_4 + 0x30) = 0
        *(eax_6 + 0x14) = 1
    
    void* eax_7 = *(arg1 + 4)
    
    if (*(eax_7 + 0x47c) != 1)
        *(eax_7 + 0x47c) = 1
        *(eax_7 + 0x70) = 1
    
    struct partsengine::CSpriteEngineWrapper::VTable* const var_14_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    var_4.b = 1
    void* const ebx_1 = data_75d514
    int32_t ebp_1
    
    if (ebx_1 != 0)
        if (sub_5ed1f0(ebx_1) != 0)
            ebp_1 = (*(**(ebx_1 + 0x2c) + 0x1c))()
        else
            ebp_1 = 0
        
        ebx_1 = data_75d514
        
        if (ebx_1 != 0)
            if (sub_5ed1f0(ebx_1) != 0)
                ebx_1 = (*(**(ebx_1 + 0x2c) + 0x18))()
            else
                ebx_1 = nullptr
    else
        ebp_1 = 0
    
    void* edi_2 = *(eax_4 + 0x34)
    
    if ((*(**(*(edi_2 + 0x28) + 4) + 8))() != 0x11)
        (*(**(*(edi_2 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** eax_18 =
            sub_69adc6(0x40)
        struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** ecx_11
        
        if (eax_18 == 0)
            ecx_11 = nullptr
        else
            ecx_11 = sub_512770(eax_18)
        
        *(*(edi_2 + 0x28) + 4) = ecx_11
        *(edi_2 + 0x14) = 1
    
    void* eax_21 = *(edi_2 + 0x28)
    int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(ebx_1))
    void* eax_22 = *(eax_21 + 4)
    int32_t var_4_1 = 0xffffffff
    *(eax_22 + 0x3c) = 1
    *(eax_22 + 8) = 0
    *(eax_22 + 0xc) = 0
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ebp_1))
    *(eax_22 + 0x14) = 0
    *(eax_22 + 0x10) = xmm1_2
    *(eax_22 + 0x18) = 0
    *(eax_22 + 0x1c) = xmm0_2
    *(eax_22 + 0x20) = xmm1_2
    *(eax_22 + 0x24) = xmm0_2
    sub_4a33c0(*(arg1 + 4), 0, 0, 0)
    result = *(arg1 + 8)
    *(arg1 + 0x54) = result
    *(arg1 + 0x64) = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
