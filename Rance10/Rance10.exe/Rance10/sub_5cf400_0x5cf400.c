// 函数: sub_5cf400
// 地址: 0x5cf400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
int32_t* var_4c = arg3
__Smtx_lock_shared(arg1 + 0x34)
int32_t esi_1 = *(arg1 + 0x30)
__Smtx_unlock_shared(arg1 + 0x34)
char* result

if (esi_1 == 0)
    result.b = 1
else
    __Smtx_lock_shared(arg1 + 0x34)
    int32_t* eax_4 = *(arg1 + 0x30)
    __Smtx_unlock_shared(arg1 + 0x34)
    void** ecx
    
    if (ebx[5] u< 0x10)
        ecx = ebx
    else
        ecx = *ebx
    
    if ((*(*eax_4 + 0x10))(ecx).b == 0)
        result.b = 1
    else
        __Smtx_lock_shared(arg1 + 0x34)
        int32_t* edi_2 = *(arg1 + 0x30)
        __Smtx_unlock_shared(arg1 + 0x34)
        void** ecx_2
        
        if (ebx[5] u< 0x10)
            ecx_2 = ebx
        else
            ecx_2 = *ebx
        
        result = (*(*edi_2 + 0xc))(ecx_2)
        *var_4c = result
        
        if (result != 0)
            result.b = 1
        else
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            var_4c = ebx
            void var_2c
            sub_403360(&var_2c, 0x76a6f4)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_44
            sub_5e01e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
