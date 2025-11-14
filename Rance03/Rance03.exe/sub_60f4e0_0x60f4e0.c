// 函数: sub_60f4e0
// 地址: 0x60f4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if (*(arg1 + 0x44) == 0)
    int32_t eax
    eax.b = 0
    return eax

void* esi = *(arg1 + 8)
int32_t edi = *(arg1 + 0x4c)
var_4 = *(arg1 + 0x48)
int32_t* ecx_1 = *(esi + 0x38)
int32_t eax_1

if (ecx_1 != 0)
    (*(*ecx_1 + 0x84))(ecx_1, 1, &var_4, edi)
    int32_t eax_3 = var_4
    *(esi + 0x4c) = edi
    *(esi + 0x48) = eax_3
    void* esi_1 = *(arg1 + 8)
    int32_t* eax_4 = *(esi_1 + 0x38)
    (*(*eax_4 + 0xb0))(eax_4, 1, arg1 + 0x50)
    *(esi_1 + 0x10) = int.d(fconvert.t(*(arg1 + 0x58)))
    *(esi_1 + 0x14) = int.d(fconvert.t(*(arg1 + 0x5c)))
    int32_t* ecx_3 = *(arg1 + 0x4c)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 8))(ecx_3)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_4 = *(arg1 + 0x48)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 8))(ecx_4)
        *(arg1 + 0x48) = 0
    
    if (*(arg1 + 0x3c) != 0)
        eax_1 = sub_60f8d0(arg1, *(arg1 + 8) + 0x2c)
    
    if (*(arg1 + 0x3c) == 0 || eax_1.b != 0)
        *(arg1 + 0x44) = 0
        eax_1.b = 1
        return eax_1

eax_1.b = 0
return eax_1
