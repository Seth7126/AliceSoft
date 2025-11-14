// 函数: sub_69f7d7
// 地址: 0x69f7d7
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg1
int32_t esi = data_74a560

if (esi s< 0)
    esi = 0
    int32_t eax_2 = data_75df34 ^ __security_cookie
    var_8 = 0
    
    if (eax_2 != 0 && eax_2(&var_8, 0) == 0x7a)
        esi = 1
    
    data_74a560 = esi

int32_t result
result.b = esi s> 0
return result
