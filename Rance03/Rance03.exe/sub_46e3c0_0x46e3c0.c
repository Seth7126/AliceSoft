// 函数: sub_46e3c0
// 地址: 0x46e3c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4e0

if (esi == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

if (*(esi + 0x20) == 0)
    struct ibis::CMouseCursor::VTable** eax_4 = sub_69adc6(0x40)
    struct ibis::CMouseCursor::VTable** var_10_1 = eax_4
    int32_t var_4 = 0
    struct ibis::CMouseCursor::VTable** eax_5
    
    if (eax_4 == 0)
        eax_5 = nullptr
    else
        eax_5 = sub_46d6c0(eax_4)
    
    *(esi + 0x20) = eax_5

fsbase->NtTib.ExceptionList = ExceptionList
return *(esi + 0x20)
