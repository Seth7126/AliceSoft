// 函数: sub_689750
// 地址: 0x689750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1351
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg2
int32_t var_4 = 0
int32_t var_68 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
char* result_2 = result
*result = 0
sub_402110(result, 0x6da92b, nullptr)
int32_t var_4_1 = 0
int32_t ebp_2 = (*(arg1 + 0x2c) - *(arg1 + 0x28)) s>> 2
int32_t var_68_1 = 1
int32_t esi = ebp_2 - 1

if (ebp_2 - 1 s>= 0)
    int32_t temp2_1
    
    do
        int32_t ebx
        
        if ((*(arg1 + 0x2c) - *(arg1 + 0x28)) s>> 2 s> esi)
            ebx = *(*(arg1 + 0x28) + (esi << 2))
        else
            ebx = 0xffffffff
        
        int32_t var_48_1 = 0xf
        void* const edx_1 = &data_703848
        int32_t var_4c_1 = 0
        
        if (esi == ebp_2 - 1)
            edx_1 = &data_6da92a
        
        char var_5c = 0
        void* eax_9
        
        if (*edx_1 != 0)
            void* const eax_10 = edx_1
            var_6c = eax_10 + 1
            void* ecx_1
            
            do
                ecx_1.b = *eax_10
                eax_10 += 1
            while (ecx_1.b != 0)
            eax_9 = eax_10 - var_6c
        else
            eax_9 = nullptr
        
        sub_402110(&var_5c, edx_1, eax_9)
        int32_t var_4_2 = 1
        char var_44
        sub_689300(&var_44, ebx)
        var_4_2.b = 2
        var_4_2.b = 3
        result = result_1
        int32_t var_2c
        sub_403110(result, sub_40d1c0(&var_44, &var_5c, &var_2c, &var_44), nullptr, 0xffffffff)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        int32_t var_30
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        var_4_2.b = 0
        var_30 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_48_1 u>= 0x10)
            j__free(var_5c.d)
        
        temp2_1 = esi
        esi -= 1
    while (temp2_1 - 1 s>= 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
