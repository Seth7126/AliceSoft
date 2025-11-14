// 函数: sub_545f50
// 地址: 0x545f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) == 0 && *(arg1 + 0x14) != 0)
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** eax_3 = sub_69adc6(0x15c)
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** edi_1
    
    if (eax_3 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_5531c0(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    edi_1[0x56] = *(arg1 + 0x64)
    char eax_7
    int32_t ecx_2
    int32_t edx_1
    eax_7, ecx_2, edx_1 = sub_553550(edi_1, *(arg1 + 0x14), *(arg1 + 0x1d), *(arg1 + 0x6c))
    
    if (eax_7 != 0)
        *(arg1 + 0x18) = edi_1
        *(arg1 + 0x1c) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    void** eax_9 = *(arg1 + 0x14) + 0x10
    
    if (eax_9[5] u>= 0x10)
        eax_9 = *eax_9
    
    sub_59f4e0(eax_9, edx_1, ecx_2, 0x6e3b88, eax_9)
    (*edi_1)->vFunc_4(1)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
