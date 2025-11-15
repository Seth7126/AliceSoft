// 函数: sub_605a70
// 地址: 0x605a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7427e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_54 = arg1
int32_t* var_4c = arg2
enum MESSAGEBOX_RESULT result

if (arg3 s>= 0)
    void* ebx
    
    if (arg3 s< (*(arg1 + 0x2c) - *(arg1 + 0x28)) s/ 0x1c)
        int32_t* esi_1 = *(arg1 + 0x28) + arg3 * 0x1c
        int32_t ecx_9 = *var_4c
        
        if (ecx_9 s>= 0 && *esi_1 == (esi_1[2] - esi_1[1]) s>> 2)
            int32_t* edi_1 = sub_622840(arg4, ecx_9)
            
            if (edi_1 != 0)
                if (edi_1[0xe].b != 0)
                    result = (*(*edi_1 + 4))(eax_2)
                
                if (edi_1[0xe].b != 0 && result.b == 0)
                    result.b = 0
                else if (*esi_1 s<= 0)
                    result.b = 1
                else if (sub_605bf0(edi_1, esi_1, arg4).b == 0)
                    result.b = 0
                else
                    result = sub_622840(arg4, *var_4c)
                    
                    if (result == 0)
                        result.b = 0
                    else
                        int32_t var_50 = 0
                        result = sub_605d60(*esi_1, esi_1, result, &var_50, arg4)
            else
                void var_48
                sub_403360(&var_48, "CGlobalLoader::WriteArray()\n")
                int32_t var_8_2 = 1
                ebx.b = sub_6c52e0(&var_48)
                sub_403320(&var_48)
                result.b = ebx.b
        else
            result.b = 0
    else
        void* var_30
        sub_403360(&var_30, "WriteArray error")
        int32_t var_8_1 = 0
        ebx.b = sub_6c52e0(&var_30).b
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
