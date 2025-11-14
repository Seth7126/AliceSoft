// 函数: sub_68a830
// 地址: 0x68a830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg2 + 0xc
int32_t* ecx_1 = arg1 + 0xc
int32_t edi = edx[4]

if (edx[5] u>= 0x10)
    edx = *edx

int32_t esi = ecx_1[4]

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int32_t eax = edi

if (esi u< edi)
    eax = esi

int32_t result = sub_405190(eax, edx, ecx_1, eax)
bool cond:3 = result s< 0

if (result == 0)
    if (esi u< edi)
        int32_t eax_1
        eax_1.b = true
        return 0xffffff01
    
    result.b = esi != edi
    cond:3 = result s< 0

result.b = cond:3
return result
