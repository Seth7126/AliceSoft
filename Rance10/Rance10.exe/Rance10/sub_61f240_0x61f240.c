// 函数: sub_61f240
// 地址: 0x61f240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char i_1
int32_t eax_1 = __security_cookie ^ &i_1
void* result_1 = arg2[1]
char* eax_4 = *arg2
void* result = _memchr(eax_4, 0x2a, result_1 - eax_4)

if (result != 0)
    result_1 = result

if (result_1 != arg2[1])
    int32_t var_124_1 = arg4
    char var_104
    sub_406aa0(&var_104, 0x100, 0x76d65c)
    i_1 = 0
    int32_t var_124_2 = i_1.d
    sub_6208d0(arg3, arg3[1], *arg2, result_1)
    char* eax_5 = &var_104
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    
    i_1 = i
    int32_t var_124_3 = i_1.d
    void var_103
    sub_620a00(arg3, arg3[1], &var_104, &(&var_104)[eax_5 - &var_103])
    i_1 = 0
    int32_t var_124_4 = i_1.d
    sub_6208d0(arg3, arg3[1], result_1 + 1, arg2[1])
    i_1 = 0
    int32_t var_124_5 = i_1.d
    sub_620a00(arg3, arg3[1], arg6 + arg5, arg7 + arg5)
    result.b = 1
else
    result.b = 0

@__security_check_cookie@4(eax_1 ^ &i_1)
return result
