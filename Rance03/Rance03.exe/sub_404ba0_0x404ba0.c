// 函数: sub_404ba0
// 地址: 0x404ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t edi = arg1[0xae]

if (arg1[0xad] == 0xffffffff || edi == 0xffffffff)
    return 

int32_t ebx_1 = data_75d4b0

if ((*(*arg1[0x13f] + 4))(ebx_1, edi, &var_4) == 0)
    return 

if (sub_413850(&arg1[0xb8], ebx_1, edi) == 0)
    sub_413650(&arg1[0xb8], ebx_1, edi, var_4)

(*(*arg1 + 0x64))(arg1[3], 0x9c65, 0)
