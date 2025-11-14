// 函数: sub_424aa0
// 地址: 0x424aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4d08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* const var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0xe0)
int32_t arg_c
int32_t eax_6 = arg_c
void* const edx

if (arg3 s< 0 || arg3 s>= (*(esi + 0x2c) - *(esi + 0x28)) s>> 2)
    edx = 0xffffffff
else
    edx = *(*(esi + 0x28) + (arg3 << 2))

int32_t edi = 0
var_74 = edx
int32_t result
void* var_6c

if (*(arg1 + 0xfc) == 0)
label_424ba2:
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    void* const esi_1 = var_74
    int32_t var_c_2 = 1
    char* eax_18 = (*(**(*(arg1 + 0xe0) + 0xc) + 0x1c))(esi_1)
    int32_t result_1
    
    if (eax_18 == 0)
        result_1 = 0
    else
        void* ecx_6
        
        if (*eax_18 != 0)
            char* ecx_7 = eax_18
            var_6c = &ecx_7[1]
            void* eax_19
            
            do
                eax_19.b = *ecx_7
                ecx_7 = &ecx_7[1]
            while (eax_19.b != 0)
            ecx_6 = ecx_7 - var_6c
        else
            ecx_6 = nullptr
        
        sub_402110(&var_34, eax_18, ecx_6)
        int32_t edi_3 = edi
            + sub_430e80(arg1, arg2, &arg_c, arg4, &var_34, *(*(arg1 + 0xe0) + 0x14))
            + sub_4310e0(arg1, arg2, &arg_c, arg4)
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        char var_64 = 0
        var_c_2.b = 2
        void* eax_23 = *(arg1 + 0xe0)
        var_74 = eax_23
        
        if (sub_42cc20(eax_23, esi_1, &var_6c) == 0)
            result_1 = 0
        else
            int32_t eax_26 = (*(**(var_74 + 0xc) + 0x18))(esi_1)
            sub_42f0d0(var_74, eax_26, var_6c, &var_64)
            int32_t eax_29 = (*(**(*(arg1 + 0xe0) + 0xc) + 0x18))(esi_1)
            result_1 = edi_3 + sub_430d20(arg1, arg2, &arg_c, arg4, &var_64, sub_430c60(eax_29))
            sub_431190(arg1, arg2, eax_6, arg4, result_1, arg3, eax_29)
        
        if (var_50_1 u>= 0x10)
            j__free(var_64.d)
        
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    result = result_1
else
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t var_c_1 = 0
    void* eax_12 = (*(**(esi + 0xc) + 0x18))(edx)
    
    if (sub_42cc20(esi, var_74, &var_6c) != 0)
        sub_42d4b0(esi, eax_12, var_6c, &var_4c)
        edi = sub_430d80(arg1, arg2, &arg_c, arg4, &var_4c, 0xc00000, *(*(arg1 + 0xe0) + 0x10))
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c.d)
        
        goto label_424ba2
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)
    
    result = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
