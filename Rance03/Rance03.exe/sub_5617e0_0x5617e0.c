// 函数: sub_5617e0
// 地址: 0x5617e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg3
*ebx = 0x7fffffff
*edi = 0x80000000

for (int32_t* i = *(arg1 + 0x14); i != *(arg1 + 0x18); i = &i[0x9b])
    int32_t* var_14_1 = &arg3
    sub_536ec0(i, &arg2)
    int32_t* eax_1 = arg2
    
    if (*ebx s> eax_1)
        *ebx = eax_1
    
    int32_t* eax = arg3
    
    if (*edi s< eax)
        *edi = eax

if (*ebx == 0x7fffffff)
    *ebx = 0

if (*edi == 0x80000000)
    *edi = 0
