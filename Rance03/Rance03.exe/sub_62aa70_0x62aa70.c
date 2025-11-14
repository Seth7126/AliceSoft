// 函数: sub_62aa70
// 地址: 0x62aa70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_338
int32_t result = __security_cookie ^ &var_338
int32_t result_1 = result

if (arg1 != 0)
    int32_t var_348_1 = 0x328
    char var_34c_1 = 0
    void var_334
    struct _EXCEPTION_REGISTRATION_RECORD* esi_2 = __builtin_memcpy(&var_334, arg1, 0x328)
    _memset(arg1, var_34c_1, var_348_1)
    int32_t var_bc
    
    if (var_bc == 0)
        _free(arg1)
    else
        var_bc(&var_334, arg1)
    
    result = sub_62a8c0(&var_334, esi_2)

sub_69a5bc(result_1 ^ &var_338)
return result
