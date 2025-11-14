// 函数: sub_680ed0
// 地址: 0x680ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
void* esi = data_75d4cc
int32_t arg_4 = arg_4
sub_42f3d0(esi + 0x2a0, &var_4, &arg_4)
int32_t* eax_1 = var_4

if (eax_1 != *(esi + 0x2a0))
    void* ecx_1 = eax_1[5]
    
    if (ecx_1 != 0)
        int32_t result
        result.b = *(ecx_1 + 0x2c) != 0
        return result

return 0
