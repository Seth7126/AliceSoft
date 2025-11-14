// 函数: sub_5a6160
// 地址: 0x5a6160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    result = (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2
    
    if (arg3 s< result)
        result = *(esi_1 + 0x50)
        void* ecx = result[arg3]
        
        if (ecx != 0 && arg2 s>= 0)
            result = (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2
            
            if (arg2 s< result)
                result = *(ecx + 0x1c)
                void* ecx_1 = result[arg2]
                
                if (ecx_1 != 0)
                    int32_t var_34
                    char* ecx_2 = sub_543680(ecx_1, &var_34)
                    int32_t var_c_1 = 0
                    
                    if (*(ecx_2 + 0x14) u>= 0x10)
                        ecx_2 = *ecx_2
                    
                    result = (*(*arg4 + 4))(ecx_2)
                    int32_t var_20
                    
                    if (var_20 u>= 0x10)
                        result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
