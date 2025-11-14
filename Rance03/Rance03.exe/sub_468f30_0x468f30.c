// 函数: sub_468f30
// 地址: 0x468f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edx = arg2
int32_t eax = edx[5]
int32_t edi = edx[4]
void** esi

if (eax u< 0x10)
    esi = edx
else
    esi = *edx

if (eax u>= 0x10)
    edx = *edx

void** var_c = arg2
return sub_468ff0(arg1 + 4, *(arg1 + 8), edx, esi + edi)
