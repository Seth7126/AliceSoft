// 函数: sub_5f7dc0
// 地址: 0x5f7dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72717e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_44 = arg3
int32_t var_48 = 0
int32_t var_8_1 = 0
struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_85061ee4442d8424e6f0bbfa3b0986a6>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
    * var_40
int32_t eax_6 = (*(*arg2 + 8))(sub_5f3600(arg4, arg2, &var_40, arg4), eax_2)
sub_5f60f0(eax_6, 0, arg2, eax_6)
int32_t var_8_2 = 1
int32_t* var_1c

if (var_1c != 0)
    (*(*var_1c + 0x10))(var_1c != &var_40)
    int32_t var_1c_1 = 0

int32_t var_8_3 = 0xffffffff
int32_t eax_10 = (*(*arg2 + 0x28))()
void* ecx_5 = data_7fcbb0
*arg3 = 0xffffffff
arg3[2] = eax_10
arg3[4] = 0

if (ecx_5 != 0)
    char eax_11
    
    if (eax_10 != 0xffffffff)
        eax_11 = sub_621d30(ecx_5, eax_10)
    
    if (eax_10 == 0xffffffff || eax_11 != 0)
        *arg3 = 0x50

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
