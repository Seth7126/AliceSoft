// 函数: sub_5e0a80
// 地址: 0x5e0a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cabd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_esi
int32_t var_4c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_50 = arg1 + 4
*(arg1 + 8) = *(arg1 + 4)
sub_5e0ff0(arg1 + 4)
*(arg1 + 0x10) = 0
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
sub_402110(&var_40, "DPAnalysis", 0xa)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_5e0cc0(arg1, &var_40) == 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

bool result

if (ebx.b == 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    sub_402110(&var_40, "DPVariable", 0xa)
    int32_t var_4_2 = 1
    int32_t var_4_3 = 0xffffffff
    ebx.b = sub_5e0cc0(arg1, &var_40) == 0
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    if (ebx.b != 0)
        result = false
    else
        sub_401f60(&var_40, "DPLogViewer")
        int32_t var_4_4 = 2
        int32_t var_4_5 = 0xffffffff
        ebx.b = sub_5e0cc0(arg1, &var_40) == 0
        
        if (var_2c_1 u>= 0x10)
            j__free(var_40.d)
        
        if (ebx.b != 0)
            result = false
        else
            sub_401f60(&var_40, "DPParts")
            int32_t var_4_6 = 3
            int32_t var_4_7 = 0xffffffff
            ebx.b = sub_5e0cc0(arg1, &var_40) == 0
            
            if (var_2c_1 u>= 0x10)
                j__free(var_40.d)
            
            if (ebx.b != 0)
                result = false
            else
                void var_28
                sub_401f60(&var_28, "DPSound")
                int32_t var_4_8 = 4
                ebx.b = sub_5e0cc0(arg1, &var_28) == 0
                sub_401fb0(&var_28)
                result = ebx.b == 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
