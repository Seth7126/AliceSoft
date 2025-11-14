// 函数: sub_53e990
// 地址: 0x53e990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c45f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_a0
int32_t eax_2 = __security_cookie ^ &var_a0
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x24) != 0
*(arg1 + 0x1cc) = 0
bool result

if (cond:0)
    char var_70
    char* eax_5 = sub_402bc0(&var_70, arg1 + 0x14)
    int32_t var_4 = 0
    char var_58[0x10]
    char* eax_6 = sub_4028a0(&var_58, arg1 + 0x14)
    var_4.b = 1
    void* var_40
    char* eax_7 = sub_410a20(eax_6, eax_6, &var_40, eax_5)
    int32_t var_44
    
    if (var_44 u>= 0x10)
        eax_7 = j__free(var_58[0].d)
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58[0] = 0
    var_4.b = 4
    int32_t var_5c
    
    if (var_5c u>= 0x10)
        eax_7 = j__free(var_70.d)
    
    int32_t var_5c_1 = 0xf
    int32_t var_60_1 = 0
    var_70 = 0
    int32_t* eax_8 = sub_410930(eax_7, &var_40, &var_a0, ".png")
    var_4.b = 5
    void* edi_2 = *(arg1 + 0x200)
    
    if (sub_590700(edi_2, eax_8) == 0)
        result = sub_525610(edi_2 + 0x30, eax_8) != 0
    else
        result = true
    
    var_4.b = 4
    void* ebx
    ebx.b = result == 0
    int32_t var_8c
    
    if (var_8c u>= 0x10)
        j__free(var_a0)
    
    if (ebx.b == 0)
        int32_t esi_2 = 1
        
        while (true)
            int32_t var_b8_7 = esi_2
            sub_4691f0(&var_a0, "[%d]")
            var_4.b = 6
            int32_t var_28
            int32_t* eax_10 = sub_40d1c0(&var_a0, &var_40, &var_28, &var_a0)
            var_4.b = 7
            char var_88
            char* eax_11 = sub_410a80(eax_10.b, eax_10, &var_88, ".png")
            var_4.b = 8
            ebx = *(arg1 + 0x200)
            
            if (sub_590700(ebx, eax_11) == 0)
                result = sub_525610(ebx + 0x30, eax_11) != 0
            else
                result = true
            
            ebx.b = result == 0
            int32_t var_74
            
            if (var_74 u>= 0x10)
                j__free(var_88.d)
            
            var_4.b = 6
            var_74 = 0xf
            int32_t var_78_1 = 0
            var_88 = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            if (ebx.b != 0)
                break
            
            var_4.b = 4
            
            if (var_8c u>= 0x10)
                j__free(var_a0)
            
            esi_2 += 1
        
        if (var_8c u>= 0x10)
            j__free(var_a0)
        
        *(arg1 + 0x1cc) = esi_2
        ebx.b = 1
    else
        *(arg1 + 0x1cc) = 0
        ebx.b = 0
    
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    result = ebx.b
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a0)
return result
