// 函数: sub_478b40
// 地址: 0x478b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg1
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
void* esi_1 = *(data_75d4e4 + 0x93c)

if (esi_1 != 0)
    void* ecx_1 = sub_471170(esi_1 + 0x3c, arg1)
    
    if (ecx_1 != 0)
        (*(*arg2 + 4))((**ecx_1)())
        return 1
    
    ecx_1 = sub_473c30(esi_1 + 8, arg1)
    
    if (ecx_1 != 0)
        (*(*arg2 + 4))((**ecx_1)())
        return 1
    
    ecx_1 = sub_471170(esi_1 + 0x20, arg1)
    
    if (ecx_1 != 0)
        (*(*arg2 + 4))((**ecx_1)())
        return 1

(*(*arg2 + 4))(0x6da1c7)
return 0
