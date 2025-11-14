// 函数: __EH_prolog3
// 地址: 0x10002b5d
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax
int32_t var_4 = eax
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t arg_4
void* esp = &ExceptionList - arg_4
int32_t entry_ebx
*(esp - 4) = entry_ebx
*(esp - 8) = arg1
*(esp - 0xc) = arg2
int32_t ebp
arg_4 = ebp
*(esp - 0x10) = __security_cookie ^ &arg_4
*(esp - 0x14) = __return_addr
__return_addr = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
