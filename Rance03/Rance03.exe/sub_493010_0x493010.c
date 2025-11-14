// 函数: sub_493010
// 地址: 0x493010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5

if (arg3[5] u< 0x10)
    eax_5 = arg3
else
    eax_5 = *arg3

int32_t* eax_6 = sub_449cc0(data_75d4c8, eax_5)
int32_t* eax_7 = sub_4937f0(arg1, arg2)

if (eax_7 != 0)
    (*(*eax_7 + 4))(eax_4)

char* esi = sub_69adc6(0x1c)

if (esi == 0)
    esi = nullptr
else
    *(esi + 0x14) = 0xf
    *(esi + 0x10) = 0
    *esi = 0

int32_t* var_50

if (esi != arg3)
    var_50 = arg3
    sub_401ff0(esi, var_50, 0, 0xffffffff)

int32_t var_48_2 = arg2
*(esi + 0x18) = eax_6
int32_t var_4 = 0
int32_t var_28
void* result = sub_4535b0(arg1 + 0x20, sub_487b00(&var_28, var_50))
*result = esi
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
