// 函数: sub_5cd8f0
// 地址: 0x5cd8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
int32_t eax_8 = (arg1[0x5e] - arg1[0x5d]) s>> 2
int32_t* result
void* edx

if (ebx u>= eax_8)
    result = sub_5c24e0(eax_8, edx, arg1, arg1, 0x6e956c)
else
    eax_8 = arg1[0x5d]
    edx = *(eax_8 + (ebx << 2))
    
    if (edx == 0)
        result = sub_5c24e0(eax_8, edx, arg1, arg1, 0x6e956c)
    else
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        var_28 = 0
        int32_t var_4 = 0
        char* edx_1
        
        if (*(edx + 0xc) != 0)
            edx_1 = *(edx + 8)
        else
            edx_1 = nullptr
        
        void* ecx
        
        if (*edx_1 != 0)
            char* ecx_1 = edx_1
            
            do
                eax_8.b = *ecx_1
                ecx_1 = &ecx_1[1]
            while (eax_8.b != 0)
            
            ecx = ecx_1 - &ecx_1[1]
        else
            ecx = nullptr
        
        sub_402110(&var_28, edx_1, ecx)
        int32_t eax_9
        int32_t* ecx_4
        int32_t edx_2
        eax_9, ecx_4, edx_2 = sub_5d5e80(&arg1[0x5b], ebx)
        
        if (eax_9.b != 0)
            int32_t i
            
            do
                i = sub_5c4710(arg1, 1)
                
                if (i == 1)
                    result = sub_5cadc0(arg1, &var_28)
                    break
                
                result = i - 2
            while (i != 2)
        else
            result = sub_5c24e0(eax_9, edx_2, ecx_4, arg1, 0x6e95b0)
        
        if (var_14_1 u>= 0x10)
            result = j__free(var_28.d)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
