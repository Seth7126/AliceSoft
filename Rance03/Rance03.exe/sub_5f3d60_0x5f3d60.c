// 函数: sub_5f3d60
// 地址: 0x5f3d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
void* ebp = edi
void* eax = (edi << 1) + 2
bool cond:0 = eax != arg4

while (eax s< arg4)
    if (*(*(*(arg3 + (eax << 2)) + 0x48) + 8) s> *(*(*(arg3 + (eax << 2) - 4) + 0x48) + 8))
        eax -= 1
    
    *(arg3 + (edi << 2)) = *(arg3 + (eax << 2))
    edi = eax
    eax = (eax << 1) + 2
    cond:0 = eax != arg4

if (not(cond:0))
    eax = *(arg3 + (arg4 << 2) - 4)
    *(arg3 + (edi << 2)) = eax
    edi = arg4 - 1

int32_t var_14 = arg6
return sub_5f3dd0(eax, edi, arg3, ebp, arg5)
