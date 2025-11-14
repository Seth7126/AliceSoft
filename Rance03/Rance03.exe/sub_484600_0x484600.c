// 函数: sub_484600
// 地址: 0x484600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 4) != 0)
    struct partsengine::CRect::VTable* const var_3c = &partsengine::CRect::`vftable'
    int32_t ecx_1 = *(arg2 + 0xc)
    int32_t eax_3 = *(arg2 + 0x30)
    int32_t edx_1 = *(arg2 + 0x2c)
    int32_t ebx_1 = *(arg2 + 0x1c)
    int32_t ebp_1 = *(arg2 + 0x20)
    int32_t ecx_2 = *(arg2 + 0x10)
    int32_t ecx_3 = *(arg2 + 0x14)
    int32_t var_44 = ecx_3
    void* ecx_4 = *(arg2 + 0x18)
    int32_t var_48 = eax_3
    void* var_4c = ecx_4
    int32_t* ecx_5 = &var_4c
    
    if (eax_3 s>= ecx_4)
        ecx_5 = &var_48
    
    int32_t var_40 = edx_1
    int32_t* eax_4 = &var_44
    
    if (edx_1 s>= ecx_3)
        eax_4 = &var_40
    
    int32_t var_38_1 = ecx_1
    int32_t var_34_1 = ecx_2
    int32_t var_30_1 = *eax_4
    int32_t var_2c_1 = *ecx_5
    int32_t var_4 = 0
    struct partsengine::CLLSprite::VTable* var_28
    sub_505680(&var_28)
    var_4.b = 1
    
    if (sub_505c40(&var_28, arg2 + 0xa4, &var_3c) != 0)
        void* var_24
        void* eax_8 = var_24
        int32_t ecx_9
        
        if (eax_8 != 0)
            ecx_9 = *(eax_8 + 0x1c)
            eax_8 = *(eax_8 + 0x18)
        else
            ecx_9 = 0
        
        int32_t var_78_3 = ecx_9
        void* var_7c_3 = eax_8
        int32_t var_88_2 = sub_506650(&var_28)
        int32_t var_8c_2 = ebp_1
        
        if (sub_5075e0(arg1, ebx_1) != 0)
            ebx_1.b = 1
        else
            int32_t var_78_4 = eax_3
            int32_t var_7c_4 = edx_1
            int32_t var_80_2 = ebp_1
            int32_t var_84_2 = ebx_1
            void* var_88_3 = ecx_4
            int32_t var_8c_3 = ecx_3
            int32_t var_90_3 = ecx_2
            int32_t var_94_2 = ecx_1
            sub_455870(0x6df2c8)
            ebx_1.b = 0
    else
        int32_t var_78_2 = eax_3
        int32_t var_7c_2 = edx_1
        int32_t var_80_1 = ebp_1
        int32_t var_84_1 = ebx_1
        void* var_88_1 = ecx_4
        int32_t var_8c_1 = ecx_3
        int32_t var_90_1 = ecx_2
        int32_t var_94_1 = ecx_1
        sub_455870(0x6df218)
        ebx_1.b = 0
    
    var_4.b = 0
    sub_505790(&var_28)
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
