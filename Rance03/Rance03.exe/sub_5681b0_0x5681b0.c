// 函数: sub_5681b0
// 地址: 0x5681b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5e60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, &(*U",}{,,}{,")[6], 1)
int32_t var_4 = 0
char* eax_5 = &var_2c

if (var_18 u>= 0x10)
    eax_5 = var_2c.d

char result

if (sub_59d180(arg2, eax_5) != 0)
    result = 1
else
    char* eax_6 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_6 = var_2c.d
    
    char* var_84_1 = eax_6
    int32_t var_88_1 = 0x6e48cc
    void* var_8c_1 = arg2
    sub_561610(arg1)
    result = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_64

if (ebx.b != 0)
    result = 0
else if (sub_59d350(&var_64) == 0)
    result = 0
else
    sub_401f60(&var_2c, &(*U",}{,,}{,")[7])
    int32_t var_4_2 = 1
    int32_t var_4_3 = 0xffffffff
    ebx.b = sub_5615c0(arg1, arg2, &var_2c) == 0
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    if (ebx.b != 0)
        result = 0
    else
        int128_t xmm0_1 = data_709450
        struct sealengine::CFrameMulColor::VTable* const var_60 =
            &sealengine::CFrameMulColor::`vftable'
        int128_t var_5c_1 = xmm0_1
        int32_t var_4_4 = 2
        
        if (sub_55dba0(arg1, arg2, &var_60) == 0)
            result = 0
        else
            sub_401f60(&var_2c, &(*U",}{,,}{,")[4])
            var_4_4.b = 3
            var_4_4.b = 2
            ebx.b = sub_5615c0(arg1, arg2, &var_2c) == 0
            sub_401fb0(&var_2c)
            
            if (ebx.b != 0)
                result = 0
            else
                int32_t var_68 = 1
                
                if (sub_55cb50(arg1, arg2, &var_68) == 0)
                    result = 0
                else
                    sub_401f60(&var_2c, &(*U",}{,,}{,")[5])
                    var_4_4.b = 4
                    var_4_4.b = 2
                    ebx.b = sub_5615c0(arg1, arg2, &var_2c) == 0
                    sub_401fb0(&var_2c)
                    
                    if (ebx.b != 0)
                        result = 0
                    else
                        var_4_4.b = 5
                        void var_4c
                        sub_54e2d0(arg3, sub_54e1d0(&var_4c, var_64, var_68, &var_60))
                        result = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
