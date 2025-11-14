// 函数: sub_466c50
// 地址: 0x466c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9098
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = nullptr
int32_t var_10 = 0
var_14 = sub_458490()
int32_t var_4 = 0
int32_t ebx
ebx.b = sub_466d10(arg1, &var_14)
sub_4671d0(arg1, &var_14)
int32_t* ecx_2 = var_14
void var_18
sub_4673f0(&var_14, &var_18, *ecx_2, ecx_2)
j__free(var_14)
int32_t result
result.b = ebx.b == 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
