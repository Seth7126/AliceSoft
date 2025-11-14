// 函数: sub_4a0330
// 地址: 0x4a0330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4a03a0(arg1, arg4)
int32_t* esi = arg1[0x17]
int32_t edi = 0
uint32_t ebx_3 = (arg1[0x18] - esi + 3) u>> 2

if (esi u> arg1[0x18])
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_4a33c0(*esi, arg2, arg3, arg4)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t* result
int32_t ecx_2
result, ecx_2 = sub_47ec00(&arg1[0xd])

if (arg1[0xa].b == 0)
    int32_t var_14_2 = ecx_2
    result = sub_4856c0(&arg1[2])
    arg1[0xa].b = 1

return result
