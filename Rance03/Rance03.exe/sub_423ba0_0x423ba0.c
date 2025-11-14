// 函数: sub_423ba0
// 地址: 0x423ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = *(*(arg1 + 0x118) - 0x24)
int32_t eax_3 = (*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebp)
int32_t edi_1 = arg2 - 2

if ((*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebp) == 4)
    edi_1 += sub_423e80(arg1, ebp, edi_1)

int32_t result

if (eax_3 == 1)
    void* esi_5 = *(arg1 + 0xe0)
    *arg3 = (*(**(esi_5 + 0xc) + 0xc))((*(**(esi_5 + 8) + 0x18))(ebp), edi_1)
    
    if (sub_42cfa0(*(arg1 + 0xe0), ebp, edi_1, arg4).b == 0)
        result.b = 0
        return result
else if (eax_3 == 3)
    if (sub_42dd60(*(arg1 + 0xe0), ebp, arg3).b == 0)
        result.b = 0
        return result
    
    result = sub_42cfa0(*(arg1 + 0xe0), ebp, edi_1, arg4)
    
    if (result.b == 0)
        return result
else
    if (eax_3 != 4)
        result.b = 0
        return result
    
    void* esi_4 = *(arg1 + 0xe0)
    *arg3 = (*(**(esi_4 + 0xc) + 0x24))((*(**(esi_4 + 8) + 0x1c))(ebp), edi_1)
    result = sub_42cfa0(*(arg1 + 0xe0), ebp, edi_1, arg4)
    
    if (result.b == 0)
        return result

result.b = 1
return result
