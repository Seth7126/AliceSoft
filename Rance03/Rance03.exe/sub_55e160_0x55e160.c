// 函数: sub_55e160
// 地址: 0x55e160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5570
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CFrameMulAlpha::VTable* const var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x1f], 1)
int32_t var_4 = 0
char* eax_6 = &var_28

if (var_14 u>= 0x10)
    eax_6 = var_28.d

char result

if (sub_59d180(arg2, eax_6) != 0)
    result = 1
else
    char* eax_7 = &var_28
    
    if (var_14 u>= 0x10)
        eax_7 = var_28.d
    
    char* var_68_1 = eax_7
    int32_t var_6c_1 = 0x6e48cc
    void* var_70_1 = arg2
    sub_561610(arg1)
    result = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_48

if (ebx.b == 0)
    if (sub_59d350(&var_48) == 0)
        result = 0
    else
        sub_401f60(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x1c])
        int32_t var_4_2 = 1
        int32_t var_4_3 = 0xffffffff
        ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        int32_t var_40
        
        if (ebx.b != 0)
            result = 0
        else if (sub_59d240(&var_40) == 0)
            result = 0
        else
            struct sealengine::CFrameMulAlpha::VTable* const edi_1 = 1
            var_50 = 1
            
            if (sub_59d180(arg2, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x1d]) != 0)
                goto label_55e355
            
            sub_401f60(&var_28, &(*U"===,===,,===,}=,=,=,[]")[0xc])
            int32_t var_4_4 = 2
            int32_t var_4_5 = 0xffffffff
            ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
            sub_401fb0(&var_28)
            
            if (ebx.b != 0)
                result = 0
            else if (sub_55cb50(arg1, arg2, &var_50) == 0)
                result = 0
            else
                sub_401f60(&var_28, &(*U"===,===,,===,}=,=,=,[]")[0xd])
                int32_t var_4_6 = 3
                int32_t var_4_7 = 0xffffffff
                ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
                sub_401fb0(&var_28)
                
                if (ebx.b != 0)
                    result = 0
                else
                    edi_1 = var_50
                label_55e355:
                    int32_t xmm0_1 = var_40
                    var_50 = &sealengine::CFrameMulAlpha::`vftable'
                    int32_t var_4c_1 = xmm0_1
                    int32_t var_4_8 = 4
                    var_4_8.b = 5
                    void var_3c
                    sub_54e3b0(arg3 + 0x1d8, sub_54e230(&var_3c, var_48, edi_1, &var_50))
                    result = 1
else
    result = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
