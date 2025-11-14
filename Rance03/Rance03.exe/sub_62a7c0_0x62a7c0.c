// 函数: sub_62a7c0
// 地址: 0x62a7c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_dc[0xd8]
int32_t eax_1 = __security_cookie ^ &var_dc

if ((*(arg1 + 0x78) & 0x100000) == 0)
    sub_62a740(arg1, arg2)
    noreturn

sub_62a640(eax_1, &var_dc, arg1, arg2)
int32_t* result = sub_62a550(arg1, &var_dc)
sub_69a5bc(eax_1 ^ &var_dc)
return result
