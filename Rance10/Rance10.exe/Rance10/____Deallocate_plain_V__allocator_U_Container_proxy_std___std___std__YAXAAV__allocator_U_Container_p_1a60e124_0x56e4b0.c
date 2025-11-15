// 函数: ??$_Deallocate_plain@V?$allocator@U_Container_proxy@std@@@std@@@std@@YAXAAV?$allocator@U_Container_proxy@std@@@0@QAU_Container_proxy@0@@Z
// 地址: 0x56e4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = `eh vector vbase constructor iterator'(arg1, 0x10, 3, sub_56dbf0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
