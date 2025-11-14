// 函数: sub_577170
// 地址: 0x577170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[0xd]

if (eax != 0)
    j__free(eax)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t result = arg1[0xa]

if (result != 0)
    result = j__free(result)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

void* ecx = arg1[7]

if (ecx != 0)
    int32_t* var_c_3 = arg1
    void* var_10_1 = ecx
    sub_579920(ecx, arg1[8])
    result = j__free(arg1[7])
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

if (arg1[5] u>= 0x10)
    result = j__free(*arg1)

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
return result
