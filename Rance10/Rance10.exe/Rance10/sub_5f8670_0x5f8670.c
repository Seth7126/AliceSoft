// 函数: sub_5f8670
// 地址: 0x5f8670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7420c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_54 = arg3
void* ebx = nullptr
int32_t var_64 = 0
int32_t* esi = nullptr
void* var_4c = nullptr
int32_t* var_48 = nullptr
int32_t var_44 = 0
int32_t var_8_1 = 0
struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
    * var_40
sub_5f4440(arg3, arg2, &var_40, arg4)
var_8_1.b = 1
int32_t eax_5 = (*(*arg2 + 8))(eax_2)
int32_t edi_1 = 0
int32_t var_50 = 0
int32_t* var_1c

if (eax_5 s> 0)
    do
        int32_t var_58 = edi_1
        
        if (var_1c == 0)
            sub_6d090a()
            noreturn
        
        if ((*(*var_1c + 8))(&var_58) != 0)
            if (&var_50 u>= esi || ebx u> &var_50)
                if (esi == var_44)
                    sub_404610(&var_4c, 1)
                    esi = var_48
                
                if (esi != 0)
                    *esi = edi_1
            else
                void* eax_9 = var_4c
                int32_t ebx_2 = (&var_50 - eax_9) s>> 2
                
                if (esi == var_44)
                    sub_404610(&var_4c, 1)
                    esi = var_48
                    eax_9 = var_4c
                
                if (esi != 0)
                    *esi = *(eax_9 + (ebx_2 << 2))
            
            esi = &esi[1]
            var_48 = esi
        
        ebx = var_4c
        edi_1 += 1
        var_50 = edi_1
    while (edi_1 s< eax_5)

int32_t eax_12 = (*(*arg2 + 0x28))(&var_4c)
sub_602090(eax_12, eax_12, arg3)
var_8_1.b = 2

if (var_1c != 0)
    (*(*var_1c + 0x10))(var_1c != &var_40)
    int32_t var_1c_1 = 0

void* edx_2 = var_4c

if (edx_2 != 0)
    sub_403160(edx_2, (var_44 - edx_2) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
