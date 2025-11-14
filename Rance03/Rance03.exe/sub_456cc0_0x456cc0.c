// 函数: sub_456cc0
// 地址: 0x456cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_69adc6(0x60)
int32_t var_10 = eax_3
int32_t var_4 = 0
struct exfile::CDefineData::VTable** eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_460690(eax_3)

int32_t var_4_1 = 0xffffffff
var_10 = eax_4
sub_412de0(arg1 + 4, &var_10)
fsbase->NtTib.ExceptionList = ExceptionList
return *(*(arg1 + 4) + ((*(arg1 + 8) - *(arg1 + 4)) s>> 2 << 2) - 4)
