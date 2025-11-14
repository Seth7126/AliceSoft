// 函数: sub_545350
// 地址: 0x545350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xc) == 0 && *(arg1 + 0x14) != 0)
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** eax_3 = sub_69adc6(0x160)
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** edi_1
    
    if (eax_3 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_583990(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    edi_1[0x57] = *(arg1 + 0x64)
    char eax_6
    int32_t ecx_2
    int32_t edx_1
    eax_6, ecx_2, edx_1 = sub_583c10(edi_1, edi_1, *(arg1 + 0x14), 1, *(arg1 + 0x6c))
    
    if (eax_6 != 0)
        *(arg1 + 0xc) = edi_1
        *(arg1 + 0x10) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    void** eax_8 = *(arg1 + 0x14) + 0x10
    
    if (eax_8[5] u>= 0x10)
        eax_8 = *eax_8
    
    sub_59f4e0(eax_8, edx_1, ecx_2, 0x6e3c2c, eax_8)
    (*edi_1)->vFunc_4(1)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
