// 函数: sub_56a3a0
// 地址: 0x56a3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg2
int32_t edi = edx[4]
int32_t* ecx = arg1 + 0x14

if (edx[5] u>= 0x10)
    edx = *edx

int32_t esi = ecx[4]

if (ecx[5] u>= 0x10)
    ecx = *ecx

int32_t eax = edi

if (esi u< edi)
    eax = esi

int32_t eax_1

if (sub_405190(eax, edx, ecx, eax) == 0 && esi u>= edi)
    eax_1.b = esi != edi
    
    if (eax_1 == 0)
        int32_t eax_2
        eax_2.b = *(arg1 + 0x2c) == arg3
        return eax_2

eax_1.b = 0
return eax_1
