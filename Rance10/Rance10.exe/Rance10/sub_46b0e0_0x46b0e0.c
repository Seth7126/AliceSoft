// 函数: sub_46b0e0
// 地址: 0x46b0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
struct exfile::CDefineData::VTable** eax = sub_46aa00(ecx, arg1)

if (eax == 0 || eax[0xd] != 4)
    eax.b = 0
    return eax

int32_t eax_2 = eax[0x17][2].vFunc_0()
int32_t* vFunc_0

if (eax_2 - 1 s>= 0)
    if (eax[0x17][2].vFunc_0() s<= eax_2 - 1)
        goto label_46b13c
    
    vFunc_0 = eax[0x1c][eax_2 - 1].vFunc_0
    
    if (vFunc_0 == 0)
        goto label_46b13c
    
    if ((*(*vFunc_0 + 8))() s< eax[0x17][3].vFunc_0())
        goto label_46b146
    
    goto label_46b13c

label_46b13c:
vFunc_0 = sub_45fd50(&eax[0x17])
int32_t* eax_8

if (vFunc_0 != 0)
label_46b146:
    eax_8 = sub_45f690(vFunc_0, 0xffffffff)
    int32_t xmm0_1 = *arg2
    
    if (eax_8 != 0)
        eax_8[0xd] = 2
        eax_8[0x10] = sub_462f40(xmm0_1)
        int32_t eax_10 = (*(*vFunc_0 + 8))()
        void* const esi_3
        
        if (eax_10 - 1 s>= 0)
            if ((*(*vFunc_0 + 8))() s> eax_10 - 1)
                esi_3 = *(vFunc_0[1] + ((eax_10 - 1) << 2))
            else
                esi_3 = nullptr
        else
            esi_3 = nullptr
        
        eax_8 = sub_46b760(&eax[0x18], eax_10 - 1)
        
        if (esi_3 != 0 && eax_8 != 0 && *(esi_3 + 0x34) == eax_8[2])
            eax_8.b = 1
            return eax_8

eax_8.b = 0
return eax_8
