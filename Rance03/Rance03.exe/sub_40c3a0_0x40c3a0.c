// 函数: sub_40c3a0
// 地址: 0x40c3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg2
int32_t esi = edx[4]

if (edx[5] u>= 0x10)
    edx = *edx

int32_t* ecx = arg1
int32_t edi = ecx[4]

if (ecx[5] u>= 0x10)
    ecx = *ecx

int32_t eax = esi

if (edi u< esi)
    eax = edi

int32_t result = sub_405190(eax, edx, ecx, eax)
bool cond:3 = result s< 0

if (result == 0)
    if (edi u< esi)
        int32_t eax_1
        eax_1.b = true
        return 0xffffff01
    
    result.b = edi != esi
    cond:3 = result s< 0

result.b = cond:3
return result
