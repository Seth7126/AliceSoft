// 函数: sub_438f10
// 地址: 0x438f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6038
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t ebx
int32_t var_3c = ebx
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0

while (*(arg1 + 0x10) u> *(arg1 + 8))
    char* eax_6 = *(arg1 + 8)
    ebx.b = *eax_6
    char var_4c_2
    
    if ((ebx.b u< 0x81 || ebx.b u> 0x9f) && (ebx.b u< 0xe0 || ebx.b u> 0xef))
        if (sub_439710(arg1) != 0)
            break
        
        var_4c_2 = ebx.b
    else
        if (ebx.b == 0x81 && eax_6[1] == 0x40)
            break
        
        sub_4031c0(&var_2c, 1, ebx.b)
        *(arg1 + 8) += 1
        char* eax_7 = *(arg1 + 8)
        
        if (*(arg1 + 0x10) u> eax_7)
            eax_7.b = *eax_7
            var_4c_2 = eax_7.b
        else
            var_4c_2 = 0
    
    sub_4031c0(&var_2c, 1, var_4c_2)
    *(arg1 + 8) += 1

*arg2 = &advengine::CToken::`vftable'
arg2[1] = 1
arg2[7] = 0xf
arg2[6] = 0
arg2[2].b = 0
sub_401ff0(&arg2[2], &var_2c, 0, 0xffffffff)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return arg2
