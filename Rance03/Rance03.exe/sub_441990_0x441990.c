// 函数: sub_441990
// 地址: 0x441990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s< 0 || arg2 s>= *(arg1 + 8))
    int32_t eax
    eax.b = 0
    return eax

int32_t* esi = *(arg1 + 4)
int32_t ecx = 0
int32_t* eax_1 = *esi

if (arg2 s> 0)
    do
        if (eax_1 == esi)
            goto label_4419c2
        
        eax_1 = *eax_1
        ecx += 1
    while (ecx s< arg2)

void* ecx_1 = eax_1[2]

if (ecx_1 != 0)
    return sub_440d00(ecx_1, arg3) != 0

label_4419c2:
eax_1.b = 0
return eax_1
