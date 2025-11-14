// 函数: sub_627e40
// 地址: 0x627e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_e4
int32_t eax_1 = __security_cookie ^ &var_e4
char* edx

if (arg4 - 0x10 u> 0x2540be30)
    edx = "gamma value out of range"
else
    if ((*(arg3 + 0x74) & 0x8000) == 0 || (*(arg2 + 0x4a) & 8) == 0)
        int32_t eax_3 = 0x8000
        
        if ((*(arg2 + 0x4a) & 0x8000) == 0)
            eax_3 = sub_627cd0(0x8000, arg2, arg3, arg4, 1)
            
            if (eax_3 != 0)
                *(arg2 + 0x4a) |= 9
                *arg2 = arg4
        
        sub_69a5bc(eax_1 ^ &var_e4)
        return eax_3
    
    edx = "duplicate"

*(arg2 + 0x4a) |= 0x8000

if ((*(arg3 + 0x74) & 0x8000) != 0)
    void var_e0
    sub_62a640(0x8000, &var_e0, arg3, edx)
    edx = &var_e0
else if ((*(arg3 + 0x78) & &__dos_header) == 0)
    sub_62a520(arg3, edx)
    noreturn

int32_t* eax_4 = sub_62a550(arg3, edx)
sub_69a5bc(eax_1 ^ &var_e4)
return eax_4
