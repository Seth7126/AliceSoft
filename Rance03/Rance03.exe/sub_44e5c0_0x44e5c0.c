// 函数: sub_44e5c0
// 地址: 0x44e5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* arg_4
int32_t* edi = arg_4
arg_4 = edi
sub_42f3d0(&arg1[6], &var_4, &arg_4)
int32_t* eax = var_4

if (eax != arg1[6])
    int32_t result = eax[5]
    
    if (result != 0)
        return result

if (sub_44ee00(&arg1[5], edi) != 0)
    arg_4 = edi
    sub_42f3d0(&arg1[6], &var_4, &arg_4)
    int32_t* eax_3 = var_4
    
    if (eax_3 != arg1[6])
        return eax_3[5]

return 0
