// 函数: sub_49ba20
// 地址: 0x49ba20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730851
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result = sub_6e810c(0x38)
int32_t var_8_1 = 0
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_3 = result
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_2 = result
struct std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>::std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::VTable
    ** result_1 = result
var_8_1.b = 1

if (result != 0)
    *result = &std::_Func_impl<class <lambda_ae5a95ada1030ad1465b4f26485ef2c0>,class std::allocator<int32_t>,void,struct HWND__*,uint32_t,uint32_t,long>::`vftable'{for `std::_Func_base<void, struct HWND__*, uint32_t, uint32_t, long>'}
    void* var_24_1 = &result[2]
    result[2] = *(arg1 + 8)
    void* var_24_2 = &result[4]
    result[0xd] = 0
    var_8_1.b = 3
    int32_t* ecx_1 = *(arg1 + 0x34)
    
    if (ecx_1 != 0)
        result[0xd] = (**ecx_1)(&result[4])

fsbase->NtTib.ExceptionList = ExceptionList
return result
