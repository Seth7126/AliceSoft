// 函数: sub_46e480
// 地址: 0x46e480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4e0

if (*(esi + 0x20) == 0)
    struct ibis::CMouseCursor::VTable** eax_3 = sub_69adc6(0x40)
    struct ibis::CMouseCursor::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    
    if (eax_3 == 0)
        result = nullptr
    else
        result = sub_46d6c0(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    *(esi + 0x20) = result

void* ecx_2 = *(esi + 0x20)

if (ecx_2 != 0)
    result = sub_46d9b0(ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
