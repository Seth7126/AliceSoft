// 函数: sub_50b3b0
// 地址: 0x50b3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
void* edi = arg2
int32_t eax = esi[5]
int32_t* edx

if (eax u< 0x10)
    edx = esi
else
    edx = *esi

if (eax u>= 0x10)
    arg1 = *esi

void* var_14 = arg2
sub_468ff0(edi + 4, *(edi + 8), arg1, edx + esi[4])
arg2.b = 0
sub_414b60(edi + 4, &arg2)
int32_t ecx_2 = esi[0xb]
void* esi_1 = &esi[6]
int32_t edx_1 = *(esi_1 + 0x10)
void* eax_2

if (ecx_2 u< 0x10)
    eax_2 = esi_1
else
    eax_2 = *esi_1

if (ecx_2 u>= 0x10)
    esi_1 = *esi_1

void* var_14_2 = arg2
sub_468ff0(edi + 4, *(edi + 8), esi_1, eax_2 + edx_1)
arg2.b = 0
return sub_414b60(edi + 4, &arg2)
