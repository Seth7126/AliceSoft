// 函数: sub_5eff10
// 地址: 0x5eff10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbd80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_38 = &fileimage::CFileImageAnalyser::`vftable'
char* ecx = *arg1
void* eax_8 = arg1[1]
int32_t var_4 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
var_4.b = 1
uint32_t* ebx

if (sub_468d00(&var_38, &var_28).b == 0)
    ebx.b = 0
else if (sub_40c250(&var_28, "FNA").b == 0 || &ecx[4] u> eax_8
        || (((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)) != 0
        || &ecx[8] u> eax_8)
    ebx.b = 0
else
    uint32_t* var_34_1 = &ecx[8]
    
    if (sub_468b70(&var_38, arg2).b == 0 || *arg2 u< 4)
        ebx.b = 0
    else
        ebx.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

uint32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
