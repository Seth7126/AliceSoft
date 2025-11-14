// 函数: sub_637a30
// 地址: 0x637a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg2

if (result == 0)
    return 0

if (result u> arg3)
    result = arg3

int32_t ebx = *(arg4 + 0x38)
int32_t ebp = *(arg4 + 0x34)
int32_t* edx = *(arg4 + 0x30)

if (edx + result u> ebx + ebp)
    void* esi_1 = ebp - edx
    result = esi_1 + ebx
    
    if (esi_1 == neg.d(ebx))
        return 0

sub_69d850(arg1, edx, result)
*(arg4 + 0x30) += result
return result
