// 函数: sub_512230
// 地址: 0x512230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

int32_t var_10_1 = arg2
struct partsengine::CPartsList::VTable** edx_1 = sub_4f14d0(arg1 + 0x34)
int32_t esi_1

if (edx_1 != 0)
    esi_1 = edx_1[2]

struct partsengine::CPartsList::VTable** esi_2

if (edx_1 == 0 || arg2 s< esi_1 || edx_1[1] + esi_1 s<= arg2)
    esi_2 = nullptr
else
    esi_2 = edx_1[3][arg2 - esi_1]
    
    if (esi_2 == 0)
        int32_t var_10_2 = arg2
        esi_2 = sub_526580(edx_1)

int32_t* ecx_5 = esi_2[0x1d]

if (ecx_5 != 0 && (*(*ecx_5 + 8))(1) == 9)
    sub_51a9d0(sub_4ef6a0(esi_2))
