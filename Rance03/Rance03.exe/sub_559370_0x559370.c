// 函数: sub_559370
// 地址: 0x559370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c50bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_f0
int32_t eax_2 = __security_cookie ^ &var_f0
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = *(arg1 + 0x50)
var_f0 = arg4
int32_t result

if (ebx s< 0 || ebx s>= (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 2)
    result.b = 1
else
    int32_t* ebx_1 = *(*(arg1 + 0x44) + (ebx << 2))
    
    if (ebx_1 == 0)
        result.b = 1
    else
        void var_ec
        sub_535530(&var_ec)
        int32_t var_4 = 0
        result = *(arg1 + 0xc)
        char var_9f_1 = 0
        int32_t* var_74_1 = ebx_1
        char var_58_1 = 1
        int32_t var_108_1
        int32_t eax_10
        
        if (result == 0)
            bool cond:0_1 = (*(*ebx_1 + 0x18))(eax_4) == 0
            eax_10 = *arg3
            
            var_108_1 = cond:0_1 ? 0 : 1
            
            goto label_559455
        
        if (result != 1)
            if (result == 2)
                var_108_1 = 5
                goto label_559451
            
            if (result == 3)
                var_108_1 = 4
                goto label_559451
            
            result.b = 0
        else
            var_108_1 = 3
        label_559451:
            eax_10 = *arg3
        label_559455:
            (*(eax_10 + 0xbc))(var_108_1)
            result.b = *(arg1 + 0x20)
            void* ecx_4 = *(arg2 + 0x114)
            char var_18_1 = result.b
            int128_t var_8c_1 = *(arg1 + 0x10)
            
            if (ecx_4 == 0)
                result.b = 0
            else if (sub_591a70(ecx_4, &var_ec, arg2 + 4, arg2 + 0x108).b == 0)
                result.b = 0
            else if ((*(*var_f0 + 0x28))(arg5, arg6).b != 0)
                result.b = 1
            else
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f0)
return result
