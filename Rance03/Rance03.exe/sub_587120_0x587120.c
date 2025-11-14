// 函数: sub_587120
// 地址: 0x587120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x214) == 0)
    struct sealengine::CReignView::VTable** eax_3 = sub_69adc6(0x52c)
    struct sealengine::CReignView::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct sealengine::CReignView::VTable** ecx_1
    
    if (eax_3 == 0)
        ecx_1 = nullptr
    else
        ecx_1 = sub_58a120(eax_3, *(arg1 + 0x238))
    
    int32_t var_4_1 = 0xffffffff
    char eax_5 = *(arg1 + 0x23c)
    *(arg1 + 0x214) = ecx_1
    sub_58c380(ecx_1, eax_5)
    *(*(arg1 + 0x214) + 0x510) = *(arg1 + 0x21c)
    *(*(arg1 + 0x214) + 0x514) = *(arg1 + 0x220)
    char result = sub_58a5f0(*(arg1 + 0x214), arg1, arg1 + 4, *(arg1 + 0x210))
    
    if (result == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 1
