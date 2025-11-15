// 函数: sub_41c1e0
// 地址: 0x41c1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi_1 = *(arg2 + 8) - *(arg2 + 4)
BOOL var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "Sys4xVMParts", 0xc)
int32_t var_8_1 = 0
bool cond:0 = sub_6cde00(arg1, &var_2c, edi_1 + 4) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

BOOL lpBaseAddress

if (cond:0 == 0)
    **(arg1 + 8) = edi_1
    sub_700660(*(arg1 + 8) + 4, *(arg2 + 4), edi_1)
    lpBaseAddress = *(arg1 + 8)
    
    if (lpBaseAddress != 0)
        UnmapViewOfFile(lpBaseAddress)
        *(arg1 + 8) = 0
    
    lpBaseAddress.b = 1
else
    lpBaseAddress.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return lpBaseAddress
