// 函数: sub_472950
// 地址: 0x472950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9a81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_74 = 0
int32_t* ecx

if (*(arg1 + 0x914) != 0)
    ecx = *(arg1 + 0x918)

uint8_t result

if (*(arg1 + 0x914) == 0 || ecx == 0)
    result = 0
else
    int32_t var_28
    sub_401f60(&var_28, (*(*ecx + 0x18))(eax_4))
    int32_t var_4 = 0
    var_4.b = 1
    char var_70
    void* eax_9 = (*(**(arg1 + 0x914) + 8))(sub_4028a0(&var_70, &var_28))
    char var_58
    char* eax_10 = sub_421670(eax_9.b, eax_9, &var_58)
    var_4.b = 2
    void** var_40
    sub_410ad0(eax_10, eax_10, &var_40, &data_74f5cc)
    int32_t var_44
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0
    int32_t var_5c
    
    if (var_5c u>= 0x10)
        j__free(var_70.d)
    
    int32_t var_5c_1 = 0xf
    int32_t var_60_1 = 0
    var_70 = 0
    var_4.b = 6
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    int32_t var_2c
    int32_t ebx
    
    if (sub_605500(&var_40) != 0)
        var_70.d = 0
        int32_t var_6c_1 = 0
        int32_t var_68_1 = 0
        var_58.d = &filesystem::CFile::`vftable'
        int32_t var_54_1 = 0xffffffff
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        var_4.b = 8
        var_74 = 1
        char eax_11 = sub_604a80(&var_40, &var_70)
        int32_t esi_1 = var_70.d
        
        if (eax_11 == 0 || esi_1 == var_6c_1)
            ebx.b = 1
        else
            ebx.b = 0
        
        int32_t var_4_1 = 7
        sub_604940(&var_58)
        
        if (ebx.b == 0)
            if (sub_472ba0(arg1, &var_70) != 0)
                ebx.b = 1
            else
                void** eax_13 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_13 = var_40
                
                void** var_88_9 = eax_13
                sub_64b530(0x6dd480)
                ebx.b = 0
        else
            void** eax_12 = &var_40
            
            if (var_2c u>= 0x10)
                eax_12 = var_40
            
            void** var_88_7 = eax_12
            sub_64b530(0x6dd4ac)
            ebx.b = 0
        
        if (esi_1 != 0)
            j__free(esi_1)
    else
        ebx.b = 1
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
