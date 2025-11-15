// 函数: ??$thread_start@P6GIPAX@Z@@YGKQAX@Z
// 地址: 0x7038b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0x10
int32_t var_8 = 0x7de390
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0x7de390 ^ __security_cookie_1
int32_t eax_6 = __security_cookie_1 ^ &var_4
int32_t var_20 = eax_6
int32_t var_34 = eax_6
int32_t* var_1c = &var_34
void* const var_38_2 = &data_7038bc
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == 0)
    ExitThread(GetLastError())
    noreturn

void* eax_1
int32_t ecx
eax_1, ecx = sub_714cce()
*(eax_1 + 0x360) = arg1

if (___acrt_is_packaged_app(ecx) != 0)
    int32_t eax_3 = ___acrt_RoInitialize@4(1)
    char eax_4 = (neg.d(eax_3)).b
    arg1[4].b = sbb.b(eax_4, eax_4, eax_3 != 0) + 1

int32_t var_8_1 = 0
__endthreadex((*arg1)(arg1[1]))
noreturn
