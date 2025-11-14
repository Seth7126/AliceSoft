// 函数: sub_468f70
// 地址: 0x468f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edx = arg2
int32_t eax = edx[5]
int32_t ebx = edx[4]
void** edi

if (eax u< 0x10)
    edi = edx
else
    edi = *edx

if (eax u>= 0x10)
    edx = *edx

void** var_10 = arg2
sub_468ff0(arg1 + 4, *(arg1 + 8), edx, edi + ebx)
arg2.b = 0
return sub_414b60(arg1 + 4, &arg2)
