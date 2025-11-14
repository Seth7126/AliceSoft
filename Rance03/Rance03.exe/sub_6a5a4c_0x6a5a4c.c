// 函数: sub_6a5a4c
// 地址: 0x6a5a4c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14
sub_69beb0(&var_14, nullptr)
data_75d194 = 0
uint32_t result = arg1

if (result == 0xfffffffe)
    data_75d194 = 1
    result = GetOEMCP()
else if (result == 0xfffffffd)
    data_75d194 = 1
    result = GetACP()
else if (result == 0xfffffffc)
    void* eax = var_14
    data_75d194 = 1
    result = *(eax + 4)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
