// 函数: sub_441240
// 地址: 0x441240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *arg2
*arg2 = ecx + 1
int32_t edi = arg3[1]
int32_t* i = *arg3
int32_t ebp = *(*arg1 + (ecx << 2))

for (; i != edi; i = &i[4])
    (**i)(0)

arg3[1] = *arg3
sub_4412c0(arg3, ebp)
int32_t esi = 0

if (ebp s> 0)
    int32_t edi_1 = 0
    
    do
        if (sub_43f8d0(*arg3 + edi_1, arg1, arg2) == 0)
            return 0
        
        esi += 1
        edi_1 += 0x10
    while (esi s< ebp)

return 1
