// 函数: sub_62a5c0
// 地址: 0x62a5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_dc
int32_t eax_1 = __security_cookie ^ &var_dc

if ((*(arg1 + 0x78) & 0x100000) == 0)
    if ((*(arg1 + 0x74) & 0x8000) != 0 && *(arg1 + 0x11c) != 0)
        sub_62a740(arg1, arg2)
        noreturn
    
    sub_62a520(arg1, arg2)
    noreturn

if ((*(arg1 + 0x74) & 0x8000) != 0 && *(arg1 + 0x11c) != 0)
    sub_62a640(eax_1, &var_dc, arg1, arg2)
    arg2 = &var_dc

int32_t* result = sub_62a550(arg1, arg2)
sub_69a5bc(eax_1 ^ &var_dc)
return result
