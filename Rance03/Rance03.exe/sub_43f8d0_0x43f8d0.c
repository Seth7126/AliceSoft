// 函数: sub_43f8d0
// 地址: 0x43f8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *arg3
*arg3 = edx + 1
int32_t edi = *(arg1 + 8)
int32_t* i = *(arg1 + 4)
int32_t ebp = *(*arg2 + (edx << 2))

for (; i != edi; i = &i[0x1a])
    (**i)(0)

*(arg1 + 8) = *(arg1 + 4)
sub_43f950(arg1 + 4, ebp)
int32_t esi = 0

if (ebp s> 0)
    int32_t edi_1 = 0
    
    do
        if (sub_440500(*(arg1 + 4) + edi_1, arg2, arg3) == 0)
            return 0
        
        esi += 1
        edi_1 += 0x68
    while (esi s< ebp)

return 1
