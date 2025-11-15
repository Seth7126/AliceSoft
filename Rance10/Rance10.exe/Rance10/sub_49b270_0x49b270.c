// 函数: sub_49b270
// 地址: 0x49b270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7305c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_02e00b9f336128314d467c31de26e0e3>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result = arg2
arg2 = result
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_02e00b9f336128314d467c31de26e0e3>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_1 = result
int32_t var_8_1 = 0

if (result != 0)
    var_8_1.b = 1
    *result = &std::_Func_impl<class <lambda_02e00b9f336128314d467c31de26e0e3>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::`vftable'{for `std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>'}
    void* var_18_1 = &result[2]
    operator new[](&result[2], arg1 + 8)

fsbase->NtTib.ExceptionList = ExceptionList
return result
