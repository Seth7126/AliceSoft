// 函数: sub_4d2570
// 地址: 0x4d2570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* ecx = *(arg1 + 0x40)
int32_t esi = *(ecx + 0xd8)

if (esi == 0)
    int32_t eax_3 = *(*(*(ecx + 0x50) + 0x58) + 0x90)
    
    if (eax_3 s<= 0)
        esi = 0
    else
        int32_t var_14_1 = eax_3
        void* eax_4 = sub_4a56f0(*(ecx + 0x54))
        
        if (eax_4 == 0)
            esi = 0
        else
            esi = sub_4a2ab0(eax_4)
            
            if (esi == 0)
                esi = 0

int32_t* ebx = *(arg1 + 0x3c)
int32_t var_14_2 = esi
int32_t esi_1

if (sub_4a55e0(ebx) == 0)
    esi_1 = arg2
else
    int32_t var_14_3 = esi
    struct partsengine::CPartsList::VTable** eax_6 = sub_4a52a0(ebx)
    int32_t ebx_1
    
    if (eax_6 != 0)
        ebx_1 = eax_6[2]
    
    struct IInterface::VTable** vFunc_0
    
    if (eax_6 == 0 || esi s< ebx_1 || eax_6[1] + ebx_1 s<= esi)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax_6[3][esi - ebx_1].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax_6, esi)
    
    void* eax_10 = sub_4a4020(vFunc_0)
    esi_1 = arg2
    void* ecx_9
    ecx_9.b = *(*(arg1 + 0x40) + 0x47f)
    var_4.b = ecx_9.b
    char result =
        sub_5111d0(*(eax_10 + 0x34), esi_1, arg3, 1.40129846e-45f, *(eax_10 + 0x40), var_4)
    
    if (result == 0)
        return result

float ecx_12 = *(arg1 + 0x40)
arg2.b = *(ecx_12 i+ 0x47f)
return sub_5111d0(*(arg1 + 0x34), esi_1, arg3, arg4, ecx_12, arg2)
