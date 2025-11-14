// 函数: sub_4a9f80
// 地址: 0x4a9f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcd38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_38 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4fc
struct fileimage::CFileImageMaker::VTable* const var_20 = &fileimage::CFileImageMaker::`vftable'
int32_t result_1 = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
char var_25 = 7
sub_414b60(&result_1, &var_25)
var_25 = 0
sub_414b60(&result_1, &var_25)
var_25 = 0
sub_414b60(&result_1, &var_25)
var_25 = 0
sub_414b60(&result_1, &var_25)
int32_t ebx

if (sub_4d6e30(esi + 0x74, &var_20) != 0)
    ebx.b = sub_4a9670(&result_1, arg1)
else
    ebx.b = 0

int32_t result = result_1
var_20 = &fileimage::CFileImageMaker::`vftable'

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
