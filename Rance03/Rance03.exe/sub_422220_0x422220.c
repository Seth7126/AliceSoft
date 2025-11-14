// 函数: sub_422220
// 地址: 0x422220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_c
int32_t eax_5 = arg_c
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
void* esi = *(arg1 + 0xe0)
int32_t __saved_edi
int32_t result

if (sub_42cf20(esi, (*(**(esi + 8) + 8))(__security_cookie ^ &__saved_edi), arg3, &var_34) != 0)
    int32_t eax_9 = sub_430d80(arg1, arg2, &arg_c, arg4, &var_34, 0xc00000, *(arg1 + 0xf8))
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    var_c_1.b = 1
    void* esi_1 = *(arg1 + 0xe0)
    char* eax_13 =
        (*(**(esi_1 + 0xc) + 0x10))((*(**(esi_1 + 8) + 0x18))((*(**(esi_1 + 8) + 8))()), arg3)
    
    if (eax_13 == 0)
        result = 0
    else
        void* ecx_6
        
        if (*eax_13 != 0)
            char* ecx_7 = eax_13
            void* eax_14
            
            do
                eax_14.b = *ecx_7
                ecx_7 = &ecx_7[1]
            while (eax_14.b != 0)
            ecx_6 = ecx_7 - &ecx_7[1]
        else
            ecx_6 = nullptr
        
        sub_402110(&var_4c, eax_13, ecx_6)
        int32_t edi_3 = eax_9 + sub_430e80(arg1, arg2, &arg_c, arg4, &var_4c, *(arg1 + 0xfc))
            + sub_4310e0(arg1, arg2, &arg_c, arg4)
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        char var_64 = 0
        var_c_1.b = 2
        
        if (sub_42ce70(*(arg1 + 0xe0), arg3, &var_64) == 0)
            result = 0
        else
            void* esi_3 = *(arg1 + 0xe0)
            int32_t eax_21 = (*(**(esi_3 + 0xc) + 0xc))(
                (*(**(esi_3 + 8) + 0x18))((*(**(esi_3 + 8) + 8))()), arg3)
            result = edi_3 + sub_430d20(arg1, arg2, &arg_c, arg4, &var_64, sub_430c60(eax_21))
            sub_431190(arg1, arg2, eax_5, arg4, result, arg3, eax_21)
        
        if (var_50_1 u>= 0x10)
            j__free(var_64.d)
        
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_38_2 = 0xf
    int32_t var_3c_2 = 0
    var_4c = 0
else
    result = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
