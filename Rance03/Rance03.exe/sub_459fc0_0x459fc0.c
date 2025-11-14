// 函数: sub_459fc0
// 地址: 0x459fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8060
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
void* ebx
void* var_74 = ebx
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t* esi = nullptr
uint32_t var_6c = 0
int32_t* var_68 = nullptr
int32_t var_64 = 0
int32_t var_60 = 0
var_4.b = 1
char var_58

if (*(arg2 + 4) + 8 u<= *(arg2 + 8))
    if (sub_468c20(arg2, &var_28, 4) == 0)
        ebx.b = 0
    else if (sub_468b20(arg2, &var_6c) == 0)
        ebx.b = 0
    else
        ebx = var_6c
        
        if (*(arg2 + 4) + ebx u<= *(arg2 + 8))
            sub_403540(&var_68, ebx)
            esi = var_68
            
            if (sub_468dd0(arg2, esi, ebx) == 0)
                ebx.b = 0
            else
                var_58.d = &fileimage::CFileImageAnalyser::`vftable'
                int32_t* var_54_1 = esi
                void* var_50_1 = var_64
                int32_t var_2c_1 = 0xf
                int32_t var_30_1 = 0
                char var_40 = 0
                var_4.b = 5
                
                if (sub_468c20(&var_58, &var_40, 4) == 0)
                    ebx.b = 0
                    sub_401fb0(&var_40)
                else if (sub_40c250(&var_40, "EXTF") == 0)
                    ebx.b = 0
                    sub_401fb0(&var_40)
                else
                    var_6c = 0
                    
                    if (sub_468b20(&var_58, &var_6c) == 0 || var_6c != 1)
                        ebx.b = 0
                        sub_401fb0(&var_40)
                    else if (sub_468b20(&var_58, arg3) == 0)
                        ebx.b = 0
                        sub_401fb0(&var_40)
                    else
                        ebx.b = 1
                        sub_401fb0(&var_40)
        else
            sub_401f60(&var_58, 0x6dbbd4)
            var_4.b = 3
            sub_456a00(*(arg1 + 4), &var_58)
            sub_401fb0(&var_58)
            ebx.b = 0
else
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0
    sub_402110(&var_58, 0x6dbc08, 0x31)
    var_4.b = 2
    sub_456a00(*(arg1 + 4), &var_58)
    
    if (var_44_1 u>= 0x10)
        j__free(var_58.d)
    
    ebx.b = 0

if (esi != 0)
    j__free(esi)

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return ebx.b
