// 函数: __EH_prolog3_GS
// 地址: 0x6e8cf1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
int32_t eax_2 = __security_cookie ^ &arg_4
*(esp - 0x10) = eax_2
int32_t var_c = eax_2
*(esp - 0x14) = __return_addr
__return_addr = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
