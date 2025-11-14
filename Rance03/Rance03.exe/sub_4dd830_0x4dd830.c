// 函数: sub_4dd830
// 地址: 0x4dd830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
arg1[0x28] += arg2
arg1[0x29] += arg2
sub_47ec00(&arg1[0xd])
int32_t* result = sub_4dd8c0(arg1, arg4)
int32_t* esi = arg1[0x17]
int32_t ecx_2 = 0
uint32_t ebx_3 = (arg1[0x18] - esi + 3) u>> 2

if (esi u> arg1[0x18])
    ebx_3 = 0

if (ebx_3 != 0)
    int32_t edi_1 = 0
    
    do
        result, ecx_2 = sub_4a33c0(*esi, arg2, arg3, arg4)
        edi_1 += 1
        esi = &esi[1]
    while (edi_1 != ebx_3)

if (arg1[0xa].b == 0)
    int32_t var_18_2 = ecx_2
    result = sub_4856c0(&arg1[2])
    arg1[0xa].b = 1

return result
