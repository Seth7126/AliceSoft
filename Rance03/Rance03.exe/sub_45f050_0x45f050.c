// 函数: sub_45f050
// 地址: 0x45f050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = arg2
arg1[1] = arg2
int32_t edi_1 = arg3 - arg2
arg1[2] = arg2
arg1[3] = arg3
arg1[4] = 0
arg1[6] = arg1[5]
sub_42f470(&arg1[8], edi_1)
char* result = nullptr
int32_t edx = 1

if (arg2 u> arg3)
    edi_1 = 0

if (edi_1 != 0)
    do
        *(arg1[8] + (result << 2)) = edx
        
        if (result[arg2] == 0xa)
            edx += 1
        
        result = &result[1]
    while (result != edi_1)

return result
