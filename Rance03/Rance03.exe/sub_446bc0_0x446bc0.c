// 函数: sub_446bc0
// 地址: 0x446bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
var_4 = nullptr
uint32_t eax = sub_443580(arg2)
int32_t eax_1
int32_t* esi_1

if (eax s>= 0)
    int32_t esi_5 = eax & 0x40000000
    eax_1 = 2
    int32_t esi_6 = neg.d(esi_5)
    esi_1 = neg.d(sbb.d(esi_6, esi_6, esi_5 != 0)) + 1
else if ((eax & 0x40000000) == 0)
    int32_t esi_2 = eax & 0x20000000
    eax_1 = 3
    int32_t esi_3 = neg.d(esi_2)
    esi_1 = sbb.d(esi_3, esi_3, esi_2 != 0) & 3
else
    eax_1 = sub_446f40(&var_4, eax)
    esi_1 = var_4

*(arg2 + 8) += eax_1
int32_t ebp = *(arg2 + 8)

if (esi_1 s<= 0)
    *arg1 = 0
else
    eax_1 = sub_443540(arg2, esi_1)
    *arg1 = eax_1
    *(arg2 + 8) = esi_1 + ebp
    
    if ((eax_1 & 1 << (esi_1.b - 1)) == 0)
        int32_t eax_2
        eax_2.b = 1
        *arg1 = (eax_1 + 1) | 0xffffffff << esi_1.b
        return eax_2

eax_1.b = 1
return eax_1
