// 函数: sub_4aa370
// 地址: 0x4aa370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcd98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4fc
struct fileimage::CFileImageMaker::VTable* const var_1c = &fileimage::CFileImageMaker::`vftable'
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
char var_21 = 7
sub_414b60(&result_1, &var_21)
var_21 = 0
sub_414b60(&result_1, &var_21)
var_21 = 0
sub_414b60(&result_1, &var_21)
var_21 = 0
sub_414b60(&result_1, &var_21)
int32_t ebx

if (sub_4d8450(esi + 0x74, arg1, &var_1c) != 0)
    ebx.b = sub_4a9670(&result_1, arg2)
else
    ebx.b = 0

int32_t result = result_1
var_1c = &fileimage::CFileImageMaker::`vftable'

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
