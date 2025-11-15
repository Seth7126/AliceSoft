// 函数: sub_49b0d0
// 地址: 0x49b0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
bool result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &std::_Func_impl<class <lambda_02d5b639f7b3d4fc4d706992ee04a6c4>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::`vftable'{for `std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>'}
int32_t var_8_1 = 0
int32_t* ecx = arg1[0xd]

if (ecx != 0)
    result = (*(*ecx + 0x10))(ecx != &arg1[4])
    arg1[0xd] = 0

*arg1 = &std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::`vftable'

if (arg2 != 0)
    result = sub_403160(arg1, 1, 0x38)

fsbase->NtTib.ExceptionList = ExceptionList
return result
