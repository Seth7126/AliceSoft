// 函数: sub_40dfb0
// 地址: 0x40dfb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727aa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* ebx = nullptr
arg2.b = 0
void* result_1 = nullptr
char var_45 = 0
void* result

if (edi[4] u<= 0)
label_40e114:
    *arg3 = ebx
    result = result_1
else
    while (true)
        int32_t ecx = edi[5]
        char* eax_3
        
        if (ecx u< 0x10)
            eax_3 = edi
        else
            eax_3 = *edi
        
        arg2:1.b = arg4
        
        if (*(eax_3 + result_1) == arg2:1.b)
            goto label_40e114
        
        int32_t* eax_4
        
        if (ecx u< 0x10)
            eax_4 = edi
        else
            eax_4 = *edi
        
        eax_4.b = *(eax_4 + result_1)
        
        if (eax_4.b == 0x20 || eax_4.b == 9 || eax_4.b == 0xd || eax_4.b == 0xa)
            result_1 += 1
        else
            int32_t* var_4c = nullptr
            void** ecx_1 = edi
            
            if (arg2.b == 0)
                char var_2c
                char* eax_9 = sub_405480(ecx_1, &var_2c, result_1, 0xffffffff)
                int32_t var_8_3 = 1
                void* eax_10
                eax_10, arg2 = sub_40e620(eax_9, &var_45, &var_4c, eax_9)
                result_1 += eax_10
                int32_t var_8_4 = 0xffffffff
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c.d, var_18 + 1, 1)
                
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
            else
                void* var_44
                char* eax_5 = sub_405480(ecx_1, &var_44, result_1, 0xffffffff)
                int32_t var_8_1 = 0
                void* eax_6
                eax_6, arg2 = sub_40e150(eax_5, &var_45, &var_4c, eax_5)
                result_1 += eax_6
                int32_t var_8_2 = 0xffffffff
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
            
            int32_t* ecx_4 = var_4c
            arg2.b = var_45 == 0
            var_45 = arg2.b
            
            if (ecx_4 == 0)
                if (ebx != 0)
                    (*(*ebx + 8))(1)
                
                result = nullptr
                break
            
            if (ebx != 0)
                int32_t* eax_14
                eax_14, arg2 = (**ebx)(ecx_4)
                ebx = eax_14
                
                if (ebx == 0)
                    result = nullptr
                    break
                
                arg2.b = var_45
            else
                ebx = ecx_4
        
        if (result_1 u>= edi[4])
            goto label_40e114

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
