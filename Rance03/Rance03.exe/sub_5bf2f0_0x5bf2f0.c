// 函数: sub_5bf2f0
// 地址: 0x5bf2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9810
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CMemoryImageAnalyser::VTable* const var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx

if (*(arg1 + 0xc) != 0)
    edx = *(arg1 + 8)
else
    edx = 0

int32_t esi = *(arg1 + 0xc)
void* eax_5

if (esi != 0)
    eax_5 = *(arg1 + 8)
else
    eax_5 = nullptr

var_38 = &sys43vm::CMemoryImageAnalyser::`vftable'
int32_t var_4 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
var_4.b = 1
int32_t ebx

if (sub_5d14f0(&var_38, &var_28, 3).b == 0)
    ebx.b = 0
else if (sub_40c250(&var_28, 0x6e61c0).b == 0 || eax_5 + 1 u> esi + edx)
    ebx.b = 0
else
    uint32_t* var_34_1 = eax_5 + 1
    uint32_t var_2c
    
    if (sub_468b20(&var_38, &var_2c).b == 0 || var_2c != 0)
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
