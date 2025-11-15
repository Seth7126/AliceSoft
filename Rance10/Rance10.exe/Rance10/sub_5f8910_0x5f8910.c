// 函数: sub_5f8910
// 地址: 0x5f8910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7420fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_1e899f64b5d29f23ff3aad2477923712>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
    * var_3c
sub_5f59e0(&var_3c, arg1)
int32_t var_8_1 = 0
int32_t ebx = 0
int32_t result = (*(*arg1 + 8))(eax_2)
int32_t* var_18

if (result s> 0)
    do
        int32_t esi_1 = ebx + 1
        
        if (esi_1 s< (*(*arg1 + 8))())
            int32_t eax_12
            
            do
                int32_t var_40 = esi_1
                int32_t var_44 = ebx
                
                if (var_18 == 0)
                    sub_6d090a()
                    noreturn
                
                if ((*(*var_18 + 8))(&var_44, &var_40) != 0)
                    (*(*arg1 + 0x50))(esi_1)
                    esi_1 -= 1
                
                esi_1 += 1
                eax_12 = (*(*arg1 + 8))()
            while (esi_1 s< eax_12)
        
        ebx += 1
        result = (*(*arg1 + 8))()
    while (ebx s< result)

int32_t var_8_2 = 1

if (var_18 != 0)
    result = (*(*var_18 + 0x10))(var_18 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
