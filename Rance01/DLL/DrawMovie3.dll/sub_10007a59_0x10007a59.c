// 函数: sub_10007a59
// 地址: 0x10007a59
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* var_14
sub_10004910(&var_14, nullptr)
data_1002237c = 0
void* var_c
char var_8
uint32_t eax_1

if (arg1 == 0xfffffffe)
    data_1002237c = 1
    eax_1 = GetOEMCP()
else if (arg1 != 0xfffffffd)
    if (arg1 != 0xfffffffc)
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return arg1
    
    eax_1 = *(var_14 + 4)
    data_1002237c = 1
else
    data_1002237c = 1
    eax_1 = GetACP()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return eax_1
