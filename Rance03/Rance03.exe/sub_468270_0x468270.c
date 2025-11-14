// 函数: sub_468270
// 地址: 0x468270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1c) == 0)
    struct exfile::CDefineData::VTable** eax_3 = sub_69adc6(0x60)
    struct exfile::CDefineData::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct exfile::CDefineData::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_460690(eax_3)
    
    *(arg1 + 0x1c) = eax_4

fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 0x1c)
