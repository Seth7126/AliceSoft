// 函数: sub_62ba90
// 地址: 0x62ba90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0)
    return 

*(arg3 + 0x60) = arg2
void (* edx)(void* arg1, char* arg2, uint32_t arg3) = sub_62ba50

if (arg4 != 0)
    edx = arg4

bool cond:1_1 = *(arg3 + 0x58) == 0
*(arg3 + 0x5c) = edx

if (not(cond:1_1))
    *(arg3 + 0x58) = 0
    sub_62a550(arg3, "Can't set both read_data_fn and write_data_fn in the same structure")

*(arg3 + 0x17c) = 0
