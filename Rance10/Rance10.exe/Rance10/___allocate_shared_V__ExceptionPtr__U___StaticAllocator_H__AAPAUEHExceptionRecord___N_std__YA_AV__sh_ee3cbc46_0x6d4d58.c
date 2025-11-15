// 函数: ??$allocate_shared@V__ExceptionPtr@@U?$_StaticAllocator@H@@AAPAUEHExceptionRecord@@_N@std@@YA?AV?$shared_ptr@V__ExceptionPtr@@@0@ABU?$_StaticAllocator@H@@AAPAUEHExceptionRecord@@$$QA_N@Z
// 地址: 0x6d4d58
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x10
int32_t (* var_c)(void* arg1) = sub_74947c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_30
void* const var_34_2 = &data_6d4d64
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t ecx
int32_t edx
struct std::_Ref_count_base::std::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int32_t> >::VTable
    ** eax = _StaticAlloc(&ExceptionList, edx, ecx, 0x60)
int32_t var_8 = 0
struct std::_Ref_count_base::std::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int32_t> >::VTable
    ** var_1c = eax
struct std::_Ref_count_base::std::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int32_t> >::VTable
    ** var_20 = eax
var_8.b = 1

if (eax != 0)
    int32_t var_34 = arg4
    public: __thiscall std::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int>>::_Ref_count_obj_alloc<class __ExceptionPtr, struct _StaticAllocator<int>><struct EHExceptionRecord *&, bool>(struct _StaticAllocator<int> const &, struct EHExceptionRecord *&, bool &&)(
        eax, arg2, arg3)

*arg1 = 0
arg1[1] = 0
sub_6d5365(arg1, &eax[3], eax)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d4daf
return arg1
