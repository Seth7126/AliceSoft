// 函数: sub_406a30
// 地址: 0x406a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b30c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* ebx = nullptr
arg2.b = 0
void* result_1 = nullptr
char var_55 = 0
void* result

if (edi[4] u<= 0)
label_406bad:
    *arg3 = ebx
    result = result_1
else
    while (true)
        int32_t ecx = edi[5]
        char* eax_5
        
        if (ecx u< 0x10)
            eax_5 = edi
        else
            eax_5 = *edi
        
        arg2:1.b = arg4
        
        if (*(eax_5 + result_1) == arg2:1.b)
            goto label_406bad
        
        int32_t* eax_6
        
        if (ecx u< 0x10)
            eax_6 = edi
        else
            eax_6 = *edi
        
        eax_6.b = *(eax_6 + result_1)
        
        if (eax_6.b == 0x20 || eax_6.b == 9 || eax_6.b == 0xd || eax_6.b == 0xa)
            result_1 += 1
        else
            int32_t* var_54 = nullptr
            void** ecx_1 = edi
            
            if (arg2.b == 0)
                char var_4c
                char* eax_9 = sub_403070(ecx_1, &var_4c, result_1, 0xffffffff)
                int32_t var_c_3 = 1
                void* eax_10
                eax_10, arg2 = sub_407330(eax_9, &var_55, &var_54, eax_9)
                int32_t var_c_4 = 0xffffffff
                result_1 += eax_10
                int32_t var_38
                
                if (var_38 u>= 0x10)
                    j__free(var_4c.d)
                
                var_38 = 0xf
                int32_t var_3c_1 = 0
                var_4c = 0
            else
                int32_t var_34
                char* eax_7 = sub_403070(ecx_1, &var_34, result_1, 0xffffffff)
                int32_t var_c_1 = 0
                void* eax_8
                eax_8, arg2 = sub_406be0(eax_7, &var_55, &var_54, eax_7)
                int32_t var_c_2 = 0xffffffff
                result_1 += eax_8
                int32_t var_20
                
                if (var_20 u>= 0x10)
                    j__free(var_34)
            
            int32_t* ecx_4 = var_54
            arg2.b = var_55 == 0
            var_55 = arg2.b
            
            if (ecx_4 == 0)
                if (ebx != 0)
                    (*(*ebx + 8))(1)
                
                result = nullptr
                break
            
            if (ebx != 0)
                int32_t* eax_12
                eax_12, arg2 = (**ebx)(ecx_4)
                ebx = eax_12
                
                if (ebx == 0)
                    result = nullptr
                    break
                
                arg2.b = var_55
            else
                ebx = ecx_4
        
        if (result_1 u>= edi[4])
            goto label_406bad

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
