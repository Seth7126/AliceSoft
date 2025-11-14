// 函数: sub_60c860
// 地址: 0x60c860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t ecx

if (arg6 == 0)
    eax = arg1[2]
    ecx = arg1[3]
else
    eax = arg1[6]
    ecx = arg1[7]

int32_t var_c = ecx
int32_t var_10 = eax
int32_t var_24
int32_t var_20

if (sub_619ff0(&arg1[0x6e], var_24, var_20) != 0)
    int32_t var_14_1 = arg7
    int32_t var_18_1 = arg5
    
    if (sub_61a220(&arg1[0x6e], arg2, arg3, arg4) != 0)
        int32_t eax_2 = *arg1
        
        if (arg4.b == 0)
            (*(eax_2 + 0xbc))(0)
            int32_t eax_4
            eax_4.b = 1
            return eax_4
        
        (*(eax_2 + 0xbc))(1)
        int32_t eax_3
        eax_3.b = 1
        return eax_3

return 0
