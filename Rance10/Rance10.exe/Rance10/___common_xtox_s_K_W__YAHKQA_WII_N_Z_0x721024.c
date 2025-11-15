// 函数: ??$common_xtox_s@K_W@@YAHKQA_WII_N@Z
// 地址: 0x721024
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
int32_t* eax_1

if (arg2 != 0 && arg3 != 0)
    *arg2 = 0
    int32_t eax_3
    eax_3.b = arg5 != 0
    
    if (arg3 u> eax_3 + 1)
        if (arg4 - 2 u<= 0x22)
            return common_xtox<unsigned long,wchar_t>(arg1, arg2, arg3, arg4, arg5)
        
        eax_1 = __errno()
        result = 0x16
    else
        eax_1 = __errno()
        result = 0x22
else
    eax_1 = __errno()
    result = 0x16

*eax_1 = result
__invalid_parameter_noinfo()
return result
