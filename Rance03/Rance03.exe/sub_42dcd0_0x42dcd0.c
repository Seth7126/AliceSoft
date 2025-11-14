// 函数: sub_42dcd0
// 地址: 0x42dcd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t arg_4
int32_t ebx = arg_4
arg_4 = (*(*arg1[2] + 0x1c))(ebx)
int32_t* eax_3 = *sub_42f3d0(&arg1[6], &var_4, &arg_4)

if (eax_3 != arg1[6])
    return eax_3[5]

int32_t result = sub_430490(arg1, ebx, (*(*arg1[3] + 0x20))((*(*arg1[2] + 0x1c))(ebx)))
*sub_42f350(&arg1[6], &arg_4) = result
return result
