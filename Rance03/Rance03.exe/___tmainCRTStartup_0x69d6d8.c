// 函数: ___tmainCRTStartup
// 地址: 0x69d6d8
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0x14
int32_t var_8 = 0x747e50
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0x747e50 ^ __security_cookie_1
int32_t var_38 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_69d6e4
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t esi = zx.d(sub_69f786())
__initp_misc_rand_s(2)
int32_t var_20 = 0

if (sub_6a546b() == 0)
    _fast_error_exit(0x1c)
    noreturn

if (__mtinit() == 0)
    _fast_error_exit(0x10)
    noreturn

__RTC_Initialize()
int32_t var_8_1 = 0

if (sub_6a3e49() s< 0)
    _fast_error_exit(0x1b)
    noreturn

data_75df48 = GetCommandLineA()
PSTR eax_5
int32_t ecx_1
eax_5, ecx_1 = ___crtGetEnvironmentStringsA()
data_75c94c = eax_5

if (__setargv(ecx_1) s< 0)
    __amsg_exit(8)
    noreturn

if (__setenvp() s< 0)
    __amsg_exit(9)
    noreturn

int32_t eax_8 = sub_69cfeb(1)

if (eax_8 != 0)
    __amsg_exit(eax_8)
    noreturn

HMODULE status = sub_699f10(&__dos_header, 0, __wincmdln(), esi)
HMODULE status_1 = status
_exit(status)
noreturn
