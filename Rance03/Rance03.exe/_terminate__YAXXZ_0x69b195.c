// 函数: ?terminate@@YAXXZ
// 地址: 0x69b195
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 8
int32_t var_8 = 0x747c50
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747c50 ^ __security_cookie_1
int32_t var_2c = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_2c
void* const var_30 = &data_69b1a1
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1 = __getptd()[0x1e]

if (eax_1 != 0)
    int32_t var_8_1 = 0
    eax_1()
    int32_t var_8_2 = 0xfffffffe

_abort()
noreturn
