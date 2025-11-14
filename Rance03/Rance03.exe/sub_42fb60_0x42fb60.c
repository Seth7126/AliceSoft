// 函数: sub_42fb60
// 地址: 0x42fb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = arg1
void* var_40 = eax_5
int32_t ebx = arg2
int32_t result = 0
int32_t esi = 0
int32_t result_1 = 0

if (ebx s> 0)
    do
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        int32_t var_c_1 = 0
        char* eax_9 = (*(**(var_40 + 0xc) + 0x10))(
            (*(**(var_40 + 8) + 0x18))((*(**(eax_5 + 8) + 8))(eax_4)), esi)
        
        if (eax_9 != 0)
            void* eax_10
            
            if (*eax_9 != 0)
                char* eax_11 = eax_9
                char i
                
                do
                    i = *eax_11
                    eax_11 = &eax_11[1]
                while (i != 0)
                eax_10 = eax_11 - &eax_11[1]
                ebx = arg2
            else
                eax_10 = nullptr
            
            sub_402110(&var_34, eax_9, eax_10)
        
        int32_t var_38
        int32_t* ecx_6 = &var_38
        var_38 = var_24_1
        
        if (result s>= var_24_1)
            ecx_6 = &result_1
        
        result = *ecx_6
        int32_t var_c_2 = 0xffffffff
        result_1 = result
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        eax_5 = var_40
        esi += 1
    while (esi s< ebx)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
