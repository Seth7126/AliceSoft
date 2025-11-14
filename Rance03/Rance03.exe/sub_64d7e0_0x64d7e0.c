// 函数: sub_64d7e0
// 地址: 0x64d7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cea38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CClipboard::VTable* const var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_c_1 = 0
int32_t eax_5 = arg1[0x45]

if (eax_5 != arg1[0x47] || arg1[0x46] != arg1[0x48])
    sub_64daf0(arg1, &var_64)

BOOL result

if ((eax_5 != arg1[0x47] || arg1[0x46] != arg1[0x48]) && var_54 != 0)
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t esi_1 = 0
    var_c_1.b = 2
    
    if (var_54 s> 0)
        do
            int32_t ecx_9 = var_50
            char* eax_17 = &var_64
            char* edx_5 = var_64.d
            
            if (ecx_9 u>= 0x10)
                eax_17 = edx_5
            
            if (eax_17[esi_1] == 0xa)
                char* eax_18
                
                if (esi_1 != 0)
                    eax_18 = &var_64
                    
                    if (ecx_9 u>= 0x10)
                        eax_18 = edx_5
                
                if (esi_1 == 0 || eax_18[esi_1 - 1] != 0xd)
                    sub_4031c0(&var_4c, 1, 0xd)
                    edx_5 = var_64.d
                    ecx_9 = var_50
            
            char* eax_19 = &var_64
            
            if (ecx_9 u>= 0x10)
                eax_19 = edx_5
            
            sub_4031c0(&var_4c, 1, eax_19[esi_1])
            esi_1 += 1
        while (esi_1 s< var_54)
    
    var_6c = &win32only::CClipboard::`vftable'
    char var_68_1 = 0
    result = sub_696f50(&var_6c, &var_4c)
    
    if (var_38_1 u>= 0x10)
        result = j__free(var_4c.d)
    
    int32_t var_38_2 = 0xf
    int32_t var_3c_2 = 0
    var_4c = 0
else
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    var_c_1.b = 1
    int32_t i = 0
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x2aaaaaab, arg1[0x2f] - arg1[0x2e])
    int32_t edx_2 = edx_1 s>> 2
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t edi_2 = 0
        int32_t edx_4
        
        do
            sub_403110(&var_34, arg1[0x2e] + edi_2, nullptr, 0xffffffff)
            sub_4057c0(&var_34, 0x70079c, 2)
            i += 1
            int32_t eax_13
            int32_t edx_3
            edx_3:eax_13 = muls.dp.d(0x2aaaaaab, arg1[0x2f] - arg1[0x2e])
            edi_2 += 0x18
            edx_4 = edx_3 s>> 2
        while (i s< (edx_4 u>> 0x1f) + edx_4)
    
    var_6c = &win32only::CClipboard::`vftable'
    char var_68 = 0
    result = sub_696f50(&var_6c, &var_34)
    
    if (var_20_1 u>= 0x10)
        result = j__free(var_34.d)

if (var_50 u>= 0x10)
    result = j__free(var_64.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
