// 函数: sub_546b70
// 地址: 0x546b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x48) == 0)
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** eax_3
    int32_t ecx
    eax_3, ecx = sub_69adc6(0x70)
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** edi_1
    
    if (eax_3 == 0)
        edi_1 = nullptr
    else
        struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** eax_4
        eax_4, ecx = sub_569e60(eax_3)
        edi_1 = eax_4
    
    int32_t var_4_1 = 0xffffffff
    edi_1[0x1a] = *(arg1 + 0x68)
    edi_1[0x1b] = *(arg1 + 0x64)
    int32_t var_20_1 = *(arg1 + 0x6c)
    char eax_7
    int32_t ecx_3
    int32_t edx_1
    eax_7, ecx_3, edx_1 = sub_56a090(edi_1, *(arg1 + 0x50), ecx)
    
    if (eax_7 != 0)
        *(arg1 + 0x48) = edi_1
        *(arg1 + 0x4c) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    void** eax_9 = *(arg1 + 0x50) + 0x2c
    
    if (eax_9[5] u>= 0x10)
        eax_9 = *eax_9
    
    sub_59f4e0(eax_9, edx_1, ecx_3, 0x6e3b50, eax_9)
    sub_529c30(edi_1)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
