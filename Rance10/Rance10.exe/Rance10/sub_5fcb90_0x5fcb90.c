// 函数: sub_5fcb90
// 地址: 0x5fcb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7422c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
struct sys43vm::CCallFuncCount::VTable** eax_3
int32_t ecx
eax_3, ecx = sub_467970(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
struct sys43vm::CCallFuncCount::VTable** var_1c = eax_3
int32_t var_3c = ecx
sub_5fdf90(eax_3, arg1[1], *arg1, eax_3)
int32_t eax_4 = arg1[1]
void* i = *arg1
char var_18
var_18.d = eax_4
void* ecx_3 = eax_4 - i

if (i != 0)
    for (; i != var_18.d; i += 0x38)
        (**i)(0)
    
    void* esi = *arg1
    sub_403160(esi, (arg1[2] - esi) s/ 0x38, 0x38)

arg1[2] = &eax_3[arg2 * 0xe]
void* result = &eax_3[ecx_3 s/ 0x38 * 0xe]
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
