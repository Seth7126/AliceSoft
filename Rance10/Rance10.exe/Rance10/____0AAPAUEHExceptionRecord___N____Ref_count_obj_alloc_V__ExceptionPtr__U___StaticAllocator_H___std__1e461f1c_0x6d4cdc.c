// 函数: ??$?0AAPAUEHExceptionRecord@@_N@?$_Ref_count_obj_alloc@V__ExceptionPtr@@U?$_StaticAllocator@H@@@std@@QAE@ABU?$_StaticAllocator@H@@AAPAUEHExceptionRecord@@$$QA_N@Z
// 地址: 0x6d4cdc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc
int32_t (* var_c)(void* arg1) = sub_749453
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_1 = &data_6d4ce8
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Ref_count_base::std::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int32_t> >::VTable
    ** var_14 = arg1
arg1[1] = 1
arg1[2] = 1
int32_t var_8 = 0
*arg1 = &std::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int32_t> >::`vftable'{for `std::_Ref_count_base'}
_memset(&arg1[3], 0, 0x54)
void* var_18 = &arg1[3]
void* var_1c = &arg1[3]
var_8.b = 1

if (arg1 != 0xfffffff4)
    __ExceptionPtr::__ExceptionPtr(&arg1[3], *arg2, *arg3)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d4d37
return arg1
