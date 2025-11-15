// 函数: sub_67bfd0
// 地址: 0x67bfd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edi_1 = data_7fcbd0 + 0x28
int32_t* edx

if (arg1[5] u< 0x10)
    edx = arg1
else
    edx = *arg1

char* ecx

if (*(edi_1 + 0x14) u< 0x10)
    ecx = edi_1
else
    ecx = *edi_1

int32_t ebx = arg1[4]
int32_t eax = ebx
int32_t ebp = *(edi_1 + 0x10)

if (ebp u< ebx)
    eax = ebp

int32_t* result = sub_406ac0(eax, edx, ecx, eax)

if ((result != 0 || ebp u< ebx || ebp u> ebx) && edi_1 != arg1)
    return sub_403590(edi_1, arg1, 0, 0xffffffff)

return result
