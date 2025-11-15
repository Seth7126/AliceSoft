// 函数: sub_5f74f0
// 地址: 0x5f74f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73815e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg3
int32_t ebx = 0
int32_t var_50 = 0

if ((*(*arg2 + 8))(eax_2) s> 0)
    int32_t eax_18
    
    do
        void* eax_7 = (*(*arg2 + 8))()
        int32_t eax_9 = (*(*arg2 + 8))()
        int32_t edi_2
        
        if (eax_9 s> 0)
            struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
                * var_40
            struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
                ** eax_10 = sub_5f4440(eax_9, arg2, &var_40, arg4)
            struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
                ** var_64_2 = eax_10
            int32_t var_8_1 = 0
            edi_2 = sub_5f62a0(eax_10, ebx, arg2, eax_7)
            int32_t var_8_2 = 1
            int32_t* var_1c
            
            if (var_1c != 0)
                (*(*var_1c + 0x10))(var_1c != &var_40)
                var_1c = nullptr
            
            int32_t var_8_3 = 0xffffffff
        
        if (eax_9 s<= 0 || edi_2 s< 0)
            edi_2 = (*(*arg2 + 8))()
        
        if (ebx s< edi_2)
            int32_t i_1 = edi_2 - ebx
            int32_t i
            
            do
                (*(*arg2 + 0x50))(ebx)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        ebx += 1
        eax_18 = (*(*arg2 + 8))()
    while (ebx s< eax_18)

int32_t eax_20 = (*(*arg2 + 0x28))()
void* ecx_10 = data_7fcbb0
*arg3 = 0xffffffff
arg3[2] = eax_20
arg3[4] = 0

if (ecx_10 != 0)
    char eax_21
    
    if (eax_20 != 0xffffffff)
        eax_21 = sub_621d30(ecx_10, eax_20)
    
    if (eax_20 == 0xffffffff || eax_21 != 0)
        *arg3 = 0x50

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
