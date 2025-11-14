// 函数: sub_4a42a0
// 地址: 0x4a42a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0xec)

if (esi == 0)
    int32_t eax
    eax.b = 1
    return eax

int32_t* edi = *(arg1 + 0x60)
int32_t var_c = esi
int32_t* eax_1

if (sub_4a55e0(edi).b != 0)
    int32_t var_c_1 = esi
    int32_t* esi_1 = sub_4a56f0(edi)
    int32_t* ecx_2 = esi_1[0x17]
    
    if (ecx_2 != 0 && (*(*ecx_2 + 8))(1) == 1)
        int32_t* ecx_3 = esi_1[0x17]
        
        if (ecx_3 != 0 && (*(*ecx_3 + 8))(1) == 1)
            void* eax_3
            eax_3.b = *(esi_1[0x17] + 0xa4)
            return eax_3
        
        eax_1.b = 0
        return eax_1

eax_1.b = 1
return eax_1
