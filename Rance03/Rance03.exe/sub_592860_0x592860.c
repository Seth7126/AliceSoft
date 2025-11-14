// 函数: sub_592860
// 地址: 0x592860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t edi
int32_t var_c = edi
sub_52b110(arg1 + 0x1c)
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

int32_t* result = (*(**(arg1 + 4) + 0x4c))()
*(arg1 + 0xc) = result

if (result != 0 && (*(*result + 0x30))(*(arg1 + 0x10), *(arg1 + 0x14), 1, 3, 0, 1).b != 0)
    return sub_52b030(arg1 + 0x1c, edi, 3, *(arg1 + 0x10), *(arg1 + 0x14), 5, *(arg1 + 4), 1, 0)
        != 0

result.b = 0
return result
