// 函数: sub_49b400
// 地址: 0x49b400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730609
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* result = sub_6e810c(0x38)
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_1 = result
int32_t var_8_1 = 0
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_4 = result_1
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_3 = result_1
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_2 = result_1
var_8_1.b = 1

if (result_1 != 0)
    var_8_1.b = 2
    *result_1 = &std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::`vftable'{for `std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>'}
    void* var_24_1 = &result_1[2]
    result = operator new[](&result_1[2], arg2)

*(arg1 + 0x24) = result_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
