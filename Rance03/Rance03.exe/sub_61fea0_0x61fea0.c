// 函数: sub_61fea0
// 地址: 0x61fea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* ecx = *(arg1 + 0x1c)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x1c) = 0

int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0xc) = 0

sub_61ffe0(arg1, arg2)
*(arg1 + 0x10) = arg3
int32_t result = *(arg1 + 0xc)

if (result != 0)
    *(arg1 + 0x18) = result
    sub_6201d0(arg1 + 0x14)
    int32_t* ecx_4 = *(arg1 + 0x1c)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 0x30))(ecx_4, 0, 0, 1)

result.b = 1
return result
