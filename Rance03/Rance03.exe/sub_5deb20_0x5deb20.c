// 函数: sub_5deb20
// 地址: 0x5deb20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d50c

if (ecx != 0)
    int32_t __saved_esi
    (*(*ecx + 4))(__security_cookie ^ &__saved_esi)
    data_75d50c = 0

struct IVM::sys43vm::CJaffaVM::VTable** eax_4 = sub_69adc6(0x12c0)
struct IVM::sys43vm::CJaffaVM::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct IVM::sys43vm::CJaffaVM::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_5bfa00(eax_4)

data_75d50c = result
result[2] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
