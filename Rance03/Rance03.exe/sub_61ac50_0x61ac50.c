// 函数: sub_61ac50
// 地址: 0x61ac50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0xb] s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_24
sub_453d80(&var_24, &arg1[4])
int32_t var_4 = 0
int32_t var_18
sub_459330(&var_18, &arg1[7])
var_4.b = 1
int32_t ebx = var_18
void* edx = *arg1
int32_t edi = var_24
char var_25
int32_t var_14
int32_t var_20

if (ebx != var_14)
    if ((*(edx + 0xc))(arg1[0xb], edi, (var_20 - edi) s>> 2, ebx) != 0)
        var_25 = 1
    else
        var_25 = 0
else if ((*(edx + 8))(arg1[0xb], edi, (var_20 - edi) s>> 2, zx.d(arg1[0xf].b)) == 0)
    var_25 = 0
else
    var_25 = 1

if (ebx != 0)
    j__free(ebx)

if (edi != 0)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return var_25
