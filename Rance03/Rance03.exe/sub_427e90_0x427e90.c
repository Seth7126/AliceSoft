// 函数: sub_427e90
// 地址: 0x427e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
int32_t* ebx

if (arg2[5] u< 0x10)
    ebx = arg2
else
    ebx = *arg2

void* eax = sub_427e50(ebx)

if (eax == 0)
    sub_401f60(arg1, 0x6dabf4)
    return arg1

void* eax_2 = sub_427e50(eax)

if (eax_2 != 0)
    sub_403070(arg2, arg1, eax - ebx, eax_2 - eax - 1)
    return arg1

sub_401f60(arg1, 0x6dac0c)
return arg1
