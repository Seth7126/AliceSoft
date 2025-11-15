// 函数: sub_4d4e60
// 地址: 0x4d4e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734010
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int128_t* eax_3
int32_t ecx
eax_3, ecx = sub_4d4f70(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int128_t* var_1c = eax_3
int32_t var_3c = ecx
sub_4d51f0(eax_3, arg1[1], *arg1, eax_3)
int32_t eax_4 = arg1[1]
void* i = *arg1
char var_18
var_18.d = eax_4
void* ecx_3 = eax_4 - i

if (i != 0)
    for (; i != var_18.d; i += 0xcc)
        sub_4aa740(i)
    
    void* esi = *arg1
    sub_403160(esi, (arg1[2] - esi) s/ 0xcc, 0xcc)

arg1[2] = arg2 * 0xcc + eax_3
void* result = ecx_3 s/ 0xcc * 0xcc + eax_3
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
