// 函数: sub_4058a0
// 地址: 0x4058a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg2[4]

if (arg2[5] u>= 0x10)
    arg2 = *arg2

int32_t esi = arg1[4]

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int32_t eax = edi

if (esi u< edi)
    eax = esi

int32_t ecx = sub_405190(eax, arg2, arg1, eax)

if (ecx == 0)
    if (esi u< edi)
        int32_t eax_1
        eax_1.b = false
        return eax_1
    
    ecx.b = esi != edi

int32_t eax_2
eax_2.b = ecx == 0
return eax_2
