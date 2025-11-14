// 函数: sub_4c7450
// 地址: 0x4c7450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t* ebx
int32_t* var_40 = ebx
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = 0
*arg4 = 0
int32_t result_1 = sub_4ff540(arg1 + 0x10c)
sub_4c8ce0(arg1 + 0x10c)
int32_t ecx_1 = arg2[4]
int32_t esi_1 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
int32_t result = sub_402110(&var_2c, 0x6da4f5, nullptr)
int32_t edx = ecx_1
int32_t var_4 = 0

if (edx s> 0)
    do
        int32_t* eax_6
        
        if (arg2[5] u< 0x10)
            eax_6 = arg2
        else
            eax_6 = *arg2
        
        ebx.b = *(eax_6 + esi_1)
        
        if (ebx.b != 0xa)
            int32_t ecx_3 = var_18
            
            if (ecx_3 u< 1)
                sub_4023a0(&var_2c, 1, var_1c)
                ecx_3 = var_18
                edx = ecx_1
            
            char* eax_7 = &var_2c
            
            if (ecx_3 u>= 0x10)
                eax_7 = var_2c.d
            
            *eax_7 = ebx.b
            result = &var_2c
            var_1c = 1
            
            if (var_18 u>= 0x10)
                result = var_2c.d
            
            *(result + 1) = 0
            
            if (ebx.b u< 0x81 || ebx.b u> 0x9f)
                ebx.b += 0x20
                
                if (ebx.b u<= 0xf)
                    goto label_4c7574
            else
            label_4c7574:
                esi_1 += 1
                
                if (esi_1 s>= edx)
                    break
                
                int32_t* eax_8
                
                if (arg2[5] u< 0x10)
                    eax_8 = arg2
                else
                    eax_8 = *arg2
                
                sub_4031c0(&var_2c, 1, *(eax_8 + esi_1))
            
            result = sub_514630(&var_2c)
            *arg3 += result
            edx = ecx_1
        else
            result = result_1
            *arg3 = 0
            *arg4 += result
        
        esi_1 += 1
    while (esi_1 s< edx)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
