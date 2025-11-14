// 函数: sub_4847b0
// 地址: 0x4847b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[1] != 0)
    struct partsengine::CRect::VTable* const var_3c = &partsengine::CRect::`vftable'
    int32_t eax_3 = *(arg2 + 0x20)
    int32_t ecx_1 = *(arg2 + 0x10)
    int32_t edx_1 = *(arg2 + 0x14)
    int32_t ebp_1 = *(arg2 + 0x1c)
    int32_t edi_1 = *(arg2 + 0x2c)
    struct partsengine::CSpriteEngineWrapper::VTable* ebx_1 = *(arg2 + 0x30)
    int32_t eax_4 = *(arg2 + 0xc)
    void* eax_5 = *(arg2 + 0x18)
    int32_t eax_6 = *(arg2 + 8)
    int32_t var_38_1 = eax_4
    int32_t var_34_1 = ecx_1
    int32_t var_30_1 = edx_1
    void* var_2c_1 = eax_5
    int32_t var_4 = 0
    void var_28
    sub_505680(&var_28)
    var_4.b = 1
    
    if (sub_505c40(&var_28, arg2 + 0xa4, &var_3c) == 0)
        struct partsengine::CSpriteEngineWrapper::VTable* var_68_2 = ebx_1
        int32_t var_6c_2 = edi_1
        int32_t var_70_1 = eax_3
        int32_t var_74_1 = ebp_1
        void* var_78_1 = eax_5
        int32_t var_7c_1 = edx_1
        int32_t var_80_1 = ecx_1
        int32_t var_84_1 = eax_4
        sub_455870(0x6df7a8)
        ebx_1.b = 0
    else if (eax_6 == 1)
        if (sub_506100(&var_28, edi_1, ebx_1) != 0)
            goto label_48491b
        
        struct partsengine::CSpriteEngineWrapper::VTable* var_68_4 = ebx_1
        int32_t var_6c_4 = edi_1
        int32_t var_70_2 = eax_3
        int32_t var_74_2 = ebp_1
        void* var_78_2 = eax_5
        int32_t var_7c_2 = edx_1
        int32_t var_80_2 = ecx_1
        int32_t var_84_2 = eax_4
        sub_455870(0x6df860)
        ebx_1.b = 0
    else if (eax_6 != 2)
    label_48491b:
        void* var_24
        void* eax_14 = var_24
        int32_t ecx_6
        
        if (eax_14 != 0)
            ecx_6 = *(eax_14 + 0x1c)
            eax_14 = *(eax_14 + 0x18)
        else
            ecx_6 = 0
        
        int32_t var_68_7 = ecx_6
        void* var_6c_7 = eax_14
        int32_t var_78_4 = sub_506650(&var_28)
        int32_t var_7c_4 = eax_3
        
        if (sub_5075e0(arg1, ebp_1) != 0)
            ebx_1.b = 1
        else
            struct partsengine::CSpriteEngineWrapper::VTable* var_68_8 = ebx_1
            int32_t var_6c_8 = edi_1
            int32_t var_70_4 = eax_3
            int32_t var_74_4 = ebp_1
            void* var_78_5 = eax_5
            int32_t var_7c_5 = edx_1
            int32_t var_80_5 = ecx_1
            int32_t var_84_4 = eax_4
            sub_455870(0x6df9d0)
            ebx_1.b = 0
    else
        if (sub_506280(&var_28, edi_1, ebx_1) != 0)
            goto label_48491b
        
        struct partsengine::CSpriteEngineWrapper::VTable* var_68_6 = ebx_1
        int32_t var_6c_6 = edi_1
        int32_t var_70_3 = eax_3
        int32_t var_74_3 = ebp_1
        void* var_78_3 = eax_5
        int32_t var_7c_3 = edx_1
        int32_t var_80_3 = ecx_1
        int32_t var_84_3 = eax_4
        sub_455870(0x6df918)
        ebx_1.b = 0
    
    var_4.b = 0
    sub_505790(&var_28)
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
