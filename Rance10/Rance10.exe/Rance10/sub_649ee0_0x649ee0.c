// 函数: sub_649ee0
// 地址: 0x649ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t __saved_ebp
    (*(*ecx + 4))(__security_cookie ^ &__saved_ebp)
    __builtin_memset(arg1 + 4, 0, 0x14)

void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t var_14 = 0
sub_404370(&var_20, &var_14)
var_14 = 4
sub_404370(&var_20, &var_14)
var_14 = 6
sub_404370(&var_20, &var_14)
char eax_4 = sub_649fd0(arg1, arg2, &var_20, arg3)
void* edx = var_20
int32_t ebx
ebx.b = eax_4

if (edx != 0)
    sub_403160(edx, (var_18 - edx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
