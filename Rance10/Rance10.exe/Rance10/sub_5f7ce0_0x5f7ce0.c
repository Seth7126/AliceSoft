// 函数: sub_5f7ce0
// 地址: 0x5f7ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72713e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_40 = arg1
int32_t var_44 = 0
int32_t var_8_1 = 0
struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_03c9793e1a1f528142547c7509bfb13b>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
    * var_3c
int32_t eax_5 = (*(*arg2 + 8))(sub_5f31d0(&var_3c, arg2), eax_2)
sub_5f60f0(eax_5, 0, arg2, eax_5)
int32_t var_8_2 = 1
int32_t* var_18

if (var_18 != 0)
    (*(*var_18 + 0x10))(var_18 != &var_3c)
    int32_t var_18_1 = 0

int32_t var_8_3 = 0xffffffff
int32_t eax_9 = (*(*arg2 + 0x28))()
void* ecx_5 = data_7fcbb0
*arg1 = 0xffffffff
arg1[2] = eax_9
arg1[4] = 0

if (ecx_5 != 0)
    char eax_10
    
    if (eax_9 != 0xffffffff)
        eax_10 = sub_621d30(ecx_5, eax_9)
    
    if (eax_9 == 0xffffffff || eax_10 != 0)
        *arg1 = 0x50

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
