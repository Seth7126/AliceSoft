// 函数: sub_612e20
// 地址: 0x612e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_28
int32_t eax_1 = __security_cookie ^ &var_28
struct _EXCEPTION_REGISTRATION_RECORD** var_10 = 0xf
int32_t var_14 = 0
char var_24 = 0
sub_403490(&var_24, "0()", 3)
sub_60c2a0(&arg1[0x3e], &var_28, &var_24)
int32_t ebx
ebx.b = var_28 != arg1[0x3f]

if (var_10 u>= 0x10)
    sub_403160(var_24.d, var_10 + 1, 1)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebx.b != 0)
    result = sub_610e90(arg1)
    
    if (result.b == 0)
        @__security_check_cookie@4(eax_1 ^ &var_28)
        return result
    
    while (arg1[0x7a].b != 0)
        int16_t* eax_4 = arg1[0x74]
        uint32_t var_34_1 = zx.d(*eax_4)
        arg1[0x74] = &eax_4[1]
        sub_611160(arg1)
    
    arg1[0x7a].b = 1

result.b = 1
@__security_check_cookie@4(eax_1 ^ &var_28)
return result
