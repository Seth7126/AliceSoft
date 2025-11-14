// 函数: sub_563c50
// 地址: 0x563c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_5 = arg3

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

int32_t var_44_1 = (fconvert.d(arg1)).d
void** var_48 = eax_5
char const* const var_4c = "\t%s = %f\r\n\r\n"
int32_t var_28
void** ecx = sub_4691f0(&var_28, "\t%s = %f\r\n\r\n")
int32_t var_4 = 0
int32_t edx = ecx[5]
int32_t edi = ecx[4]
void** eax_7

if (edx u< 0x10)
    eax_7 = ecx
else
    eax_7 = *ecx

if (edx u>= 0x10)
    ecx = *ecx

int32_t var_2c
var_44_1 = var_2c
int32_t result = sub_468ff0(arg2 + 4, *(arg2 + 8), ecx, eax_7 + edi)
int32_t var_14

if (var_14 u>= 0x10)
    var_44_1 = var_28
    result = j__free()

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
