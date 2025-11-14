// 函数: sub_64d230
// 地址: 0x64d230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
int32_t ebx = arg2

if (arg4[4] s> 0)
    do
        int32_t eax_5 = arg4[5]
        char* ecx
        
        if (eax_5 u< 0x10)
            ecx = arg4
        else
            ecx = *arg4
        
        char* ecx_1
        
        if (ecx[i] u>= 0x81)
            if (eax_5 u< 0x10)
                ecx_1 = arg4
            else
                ecx_1 = *arg4
        
        int32_t* eax_6
        char* ecx_2
        
        if (ecx[i] u< 0x81 || ecx_1[i] u> 0x9f)
            if (eax_5 u< 0x10)
                ecx_2 = arg4
            else
                ecx_2 = *arg4
            
            if (ecx_2[i] u>= 0xe0)
                if (eax_5 u< 0x10)
                    eax_6 = arg4
                else
                    eax_6 = *arg4
        
        int32_t var_2c
        int32_t var_18
        
        if ((ecx[i] u< 0x81 || ecx_1[i] u> 0x9f) && (ecx_2[i] u< 0xe0 || *(eax_6 + i) u> 0xef))
            int32_t var_4_2 = 1
            sub_64d3d0(arg1, ebx, arg3, sub_403070(arg4, &var_2c, i, 1))
            int32_t var_4_3 = 0xffffffff
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            i += 1
            int32_t eax_10
            int32_t edx_1
            edx_1:eax_10 = sx.q(*(arg1 + 0x14))
            ebx += (eax_10 - edx_1) s>> 1
        else
            int32_t var_4 = 0
            sub_64d3d0(arg1, ebx, arg3, sub_403070(arg4, &var_2c, i, 2))
            int32_t var_4_1 = 0xffffffff
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            i += 2
            ebx += *(arg1 + 0x14)
    while (i s< arg4[4])

int32_t var_30 = 0xf
int32_t var_34 = 0
var_44 = 0
sub_402110(&var_44, U"\n\n\t ", 1)
int32_t var_4_4 = 2
int32_t* result = sub_64d3d0(arg1, ebx, arg3, &var_44)

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
