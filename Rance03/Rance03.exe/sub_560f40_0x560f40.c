// 函数: sub_560f40
// 地址: 0x560f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, &(*U"=====,=,=,=,=,=,,==,")[0x12], 1)
int32_t var_4 = 0
char* eax_5 = &var_40

if (var_2c u>= 0x10)
    eax_5 = var_40.d

enum MESSAGEBOX_RESULT result

if (sub_59d180(arg2, eax_5).b != 0)
    result.b = 1
else
    char* eax_6 = &var_40
    
    if (var_2c u>= 0x10)
        eax_6 = var_40.d
    
    char* var_68_1 = eax_6
    int32_t var_6c_1 = 0x6e48cc
    void* var_70_1 = arg2
    sub_561610(arg1)
    result.b = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result.b == 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_48

if (ebx.b == 0)
    if (sub_59d240(&var_48).b == 0)
        result.b = 0
    else
        sub_401f60(&var_40, &(*U"=====,=,=,=,=,=,,==,")[0x13])
        int32_t var_4_2 = 1
        int32_t var_4_3 = 0xffffffff
        ebx.b = sub_5615c0(arg1, arg2, &var_40).b == 0
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        int32_t var_44
        
        if (ebx.b != 0)
            result.b = 0
        else if (sub_59d240(&var_44).b == 0)
            result.b = 0
        else
            void var_28
            sub_401f60(&var_28, &(*U"=====,=,=,=,=,=,,==,")[0x10])
            int32_t var_4_4 = 2
            int32_t var_4_5 = 0xffffffff
            ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
            sub_401fb0(&var_28)
            enum MESSAGEBOX_RESULT var_4c
            
            if (ebx.b != 0)
                result.b = 0
            else if (sub_59d240(&var_4c).b == 0)
                result.b = 0
            else
                enum MESSAGEBOX_RESULT xmm0_1 = var_4c
                *(arg3 + 0xa4) = _mm_unpacklo_ps(var_48, var_44)
                *(arg3 + 0xac) = xmm0_1
                result.b = 1
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
