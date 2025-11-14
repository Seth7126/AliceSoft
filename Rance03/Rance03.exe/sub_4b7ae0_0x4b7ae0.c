// 函数: sub_4b7ae0
// 地址: 0x4b7ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t arg_4
int32_t arg_8

if ((*(arg1 + 0x98) - *(arg1 + 0x94)) s>> 2 s<= arg_4)
    int32_t eax_3 = arg_8
    arg_4 = eax_3
    sub_4b7b70(arg1, eax_3)
    int32_t eax_4 = sub_4158d0(arg1 + 0x94, &arg_4)
    *(arg1 + 4) = 1
    return eax_4

sub_4b7b70(arg1, arg_8)
bool cond:0 = arg_4 s<= 0
int32_t* ecx_2 = &arg_4
var_4 = nullptr

if (cond:0)
    ecx_2 = &var_4

int32_t* var_10_3 = &arg_8
int32_t* eax_7 = sub_47a0a0(arg1 + 0x94, &arg_4, *(arg1 + 0x94) + (*ecx_2 << 2), &arg_8)
*(arg1 + 4) = 1
return eax_7
