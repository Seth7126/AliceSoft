// 函数: sub_4a7380
// 地址: 0x4a7380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4a47d0(*(arg1 + 4), &result_1)
void* esi = *(arg1 + 8)
void var_34
int32_t var_38_1 = sub_453d80(&var_34, &result_1)
sub_4a6350(esi)
int32_t esi_1 = *(*(arg1 + 4) + 0x2c)
int32_t var_2c_1 = esi_1
struct partsengine::CPartsList::VTable** eax_4 = sub_4a52a0(*(arg1 + 8))

if (eax_4 != 0)
    sub_4e7980(eax_4, esi_1)

int32_t esi_2 = *(*(arg1 + 0xc) + 0x2c)
int32_t var_2c_3 = esi_2
struct partsengine::CPartsList::VTable** eax_6 = sub_4a52a0(*(arg1 + 8))

if (eax_6 != 0)
    sub_4e7980(eax_6, esi_2)

(*(**(arg1 + 4) + 4))(eax_2)
(*(**(arg1 + 0xc) + 4))()
int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
